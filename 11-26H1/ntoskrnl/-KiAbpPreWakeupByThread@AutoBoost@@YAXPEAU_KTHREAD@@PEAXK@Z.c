/*
 * XREFs of ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140384934
 * Callers:
 *     KeAbPreWakeupThread @ 0x140269824 (KeAbPreWakeupThread.c)
 *     KiAlertSingleThreadByThreadId @ 0x140382DF0 (KiAlertSingleThreadByThreadId.c)
 *     KeAlertThreadByThreadIdEx @ 0x140383010 (KeAlertThreadByThreadIdEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     ?KiAbpEntryGetResourceSafe@AutoBoost@@YAPEAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140441E70 (-KiAbpEntryGetResourceSafe@AutoBoost@@YAPEAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     KeAbIsValidUserModeLockAddress @ 0x14044F7A0 (KeAbIsValidUserModeLockAddress.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall AutoBoost::KiAbpPreWakeupByThread(AutoBoost *this, struct _KTHREAD *a2, void *a3)
{
  __int64 *v3; // rdi
  unsigned int v5; // r15d
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rdx
  __int64 i; // r8
  __int64 v12; // rsi
  struct AutoBoost::_AB_THREAD_ENTRY *v13; // rdx
  AutoBoost *v14; // rcx
  struct _KTHREAD *ResourceSafe; // rax

  v3 = (__int64 *)*((_QWORD *)this + 142);
  v5 = (unsigned int)a3;
  if ( (unsigned int)KeAbIsValidUserModeLockAddress(a2) )
    v8 = v3[1];
  else
    v8 = *v3;
  if ( v8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v10 = 2LL;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7, 2LL);
    }
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v8 + 14); i = (unsigned int)(i + 1) )
    {
      v12 = v8 + 48 * i + 16;
      if ( (*(_BYTE *)(v12 + 33) & 4) != 0 )
      {
        AutoBoost::KiAbpAcquireEntryLockRaw((AutoBoost *)(v8 + 48 * i + 16), (struct AutoBoost::_AB_THREAD_ENTRY *)v10);
        ResourceSafe = (struct _KTHREAD *)AutoBoost::KiAbpEntryGetResourceSafe(v14, v13);
        _InterlockedAnd8((volatile signed __int8 *)(v12 + 35), 0xFEu);
        if ( ResourceSafe == a2 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          AutoBoost::KiAbpConvertWaiterToOwner(this, (struct _KTHREAD *)v12, (struct AutoBoost::_AB_THREAD_ENTRY *)v5);
          return;
        }
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
