/*
 * XREFs of ?KiAbpCleanupThreadEntries@AutoBoost@@YAXPEAU_AB_THREAD_ENTRIES@1@PEAU_KTHREAD@@@Z @ 0x140203AAC
 * Callers:
 *     KeCleanupThreadState @ 0x140201FC8 (KeCleanupThreadState.c)
 * Callees:
 *     ?KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140203BD0 (-KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall AutoBoost::KiAbpCleanupThreadEntries(
        AutoBoost *this,
        struct AutoBoost::_AB_THREAD_ENTRIES *a2,
        struct _KTHREAD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 i; // rdx
  char *v9; // r10
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v11; // r9

  if ( !this )
    return;
  AutoBoost::KiAbpPerformPendingReleases(a2, (struct _KTHREAD *)a2);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = 2;
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, v5);
  }
  for ( i = 0LL; (unsigned int)i < *((unsigned __int8 *)this + 14); i = (unsigned int)(i + 1) )
  {
    v9 = (char *)this + 48 * i;
    BugCheckParameter4 = *((_QWORD *)v9 + 2);
    if ( BugCheckParameter4 )
    {
      v11 = 1LL;
    }
    else
    {
      if ( *((_DWORD *)v9 + 12) )
      {
        v11 = 2LL;
      }
      else if ( *(struct AutoBoost::_AB_THREAD_ENTRIES **)&v9[-48 * (*((_BYTE *)this + 48 * i + 52) & 0x7F)] == a2 )
      {
        if ( !*((_DWORD *)this + 12 * i + 14) )
          continue;
        v11 = 4LL;
      }
      else
      {
        v11 = 3LL;
      }
      BugCheckParameter4 = 0LL;
    }
    if ( *((char *)this + 48 * i + 52) >= 0 )
      KeBugCheckEx(0x153u, (ULONG_PTR)a2, (ULONG_PTR)(v9 + 16), v11, BugCheckParameter4);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(i) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), i);
  }
  __writecr8(CurrentIrql);
}
