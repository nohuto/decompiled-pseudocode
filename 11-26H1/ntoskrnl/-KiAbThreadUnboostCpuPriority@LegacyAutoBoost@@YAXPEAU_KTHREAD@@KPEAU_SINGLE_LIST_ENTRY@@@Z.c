/*
 * XREFs of ?KiAbThreadUnboostCpuPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429430
 * Callers:
 *     ?KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429394 (-KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PE.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiClearPriorityFloor @ 0x1403823E0 (KiClearPriorityFloor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall LegacyAutoBoost::KiAbThreadUnboostCpuPriority(
        ULONG_PTR BugCheckParameter1,
        struct _KTHREAD *a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  ULONG_PTR v6; // r14
  unsigned __int8 CurrentIrql; // bl
  struct _SINGLE_LIST_ENTRY *v8; // rsi
  int v10; // eax
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v11 = 0LL;
  v5 = (unsigned int)a2;
  v6 = BugCheckParameter1;
  CurrentIrql = -1;
  if ( a3 )
  {
    v8 = (struct _SINGLE_LIST_ENTRY *)a3;
  }
  else
  {
    v8 = (struct _SINGLE_LIST_ENTRY *)&v11;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(BugCheckParameter1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, 2LL);
    }
  }
  while ( _BitScanForward((unsigned int *)&v10, v5) )
  {
    KiClearPriorityFloor(v6, v8, (char)v10 + 1, 0);
    v5 &= v5 - 1;
  }
  if ( !v4 )
  {
    LOBYTE(a3) = CurrentIrql;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v8, a3, (__int64)a4);
  }
}
