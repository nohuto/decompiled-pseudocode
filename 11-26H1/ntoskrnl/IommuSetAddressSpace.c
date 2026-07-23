/*
 * XREFs of IommuSetAddressSpace @ 0x14059F380
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14058A5DC (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14058A958 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuSetAddressSpace(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  KIRQL v4; // si
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v6; // rbx
  _QWORD *i; // rsi
  KIRQL v9; // [rsp+98h] [rbp+10h]
  __int64 v10; // [rsp+A0h] [rbp+18h]
  __int64 v11; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 8);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&IommuInterfaceStateChangeCallbackPushLock.116 + 4));
  v9 = v4;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 32));
  if ( a2 )
    *(_QWORD *)(*(_QWORD *)(v2 + 24) + 24LL) = a2;
  v6 = *(_QWORD **)(v2 + 40);
  if ( v6 != (_QWORD *)(v2 + 40) )
  {
    do
    {
      for ( i = (_QWORD *)v6[3]; i != v6 + 3; i = (_QWORD *)*i )
      {
        v11 = i[5];
        v10 = *(_QWORD *)(v11 + 24);
        if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 16), *(_QWORD *)(*(_QWORD *)(v11 + 72) + 40LL)) >= 0 )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 16), *(unsigned int *)(v2 + 16));
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)(v2 + 40) );
    v4 = v9;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 32));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  KeReleaseSpinLock((PKSPIN_LOCK)((char *)&IommuInterfaceStateChangeCallbackPushLock.116 + 4), v4);
  return 0LL;
}
