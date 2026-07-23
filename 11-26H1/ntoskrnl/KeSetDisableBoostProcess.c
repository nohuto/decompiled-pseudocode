/*
 * XREFs of KeSetDisableBoostProcess @ 0x14049D728
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetDisableBoostThread @ 0x14049D8D0 (KiSetDisableBoostThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetDisableBoostProcess(__int64 a1, int a2)
{
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  volatile LONG *v5; // r14
  signed __int8 v6; // cf
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  unsigned int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  struct _SINGLE_LIST_ENTRY v13; // [rsp+40h] [rbp+8h] BYREF

  v13.Next = 0LL;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v5 = (volatile LONG *)(v3 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  if ( a2 )
    v6 = _interlockedbittestandset((volatile signed __int32 *)(v3 + 136), 1u);
  else
    v6 = _interlockedbittestandreset((volatile signed __int32 *)(v3 + 136), 1u);
  v7 = (_QWORD *)(v3 + 48);
  v8 = *(_QWORD **)(v3 + 48);
  v9 = v6;
  while ( v8 != v7 )
  {
    KiSetDisableBoostThread((struct _KTHREAD *)(v8 - 95));
    v8 = (_QWORD *)*v8;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( v13.Next )
  {
    LOBYTE(v10) = CurrentIrql;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v13, v10, v11);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v9;
}
