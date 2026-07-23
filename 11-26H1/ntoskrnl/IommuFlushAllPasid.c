/*
 * XREFs of IommuFlushAllPasid @ 0x14059E930
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IommuFlushAllPasid(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  KSPIN_LOCK *v3; // rbp
  _QWORD *v4; // rsi
  _QWORD *i; // rdi
  _BYTE v7[4]; // [rsp+40h] [rbp-78h] BYREF
  int v8; // [rsp+44h] [rbp-74h]
  int v9; // [rsp+70h] [rbp-48h]

  if ( (_BYTE)KdDebuggerNotPresent || HalpTimerProcessorsFrozen <= 0 )
  {
    memset_0(v7, 0, 0x70uLL);
    v9 = *(_DWORD *)(a1 + 16);
    v8 = 2;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    v3 = (KSPIN_LOCK *)(a1 + 24);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 24));
    v4 = (_QWORD *)(a1 + 32);
    for ( i = *(_QWORD **)(a1 + 32); i != v4; i = (_QWORD *)*i )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(i[2] + 16LL), 0xFFFFFFFFLL);
    KxReleaseSpinLock(v3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
