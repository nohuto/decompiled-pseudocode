/*
 * XREFs of HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x140578F2C
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x14043E70C (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelDmaThin @ 0x1404DEC50 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140512EF0 (HalCancelAdapterChannelDmarThin.c)
 *     HalCancelAdapterChannel @ 0x1405888B0 (HalCancelAdapterChannel.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall HalpDmaRemoveFromEmergencyLogicalAddressQueue(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  _QWORD *v5; // rbx
  KIRQL v6; // r8
  _QWORD *i; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx

  v2 = (KSPIN_LOCK *)(a1 + 568);
  v4 = 0;
  v5 = (_QWORD *)(a1 + 576);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 568));
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    v8 = (_QWORD *)*i;
    if ( i == a2 )
    {
      v4 = 1;
      if ( (_QWORD *)v8[1] != i || (v9 = (_QWORD *)i[1], (_QWORD *)*v9 != i) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      break;
    }
  }
  KeReleaseSpinLock(v2, v6);
  return v4;
}
