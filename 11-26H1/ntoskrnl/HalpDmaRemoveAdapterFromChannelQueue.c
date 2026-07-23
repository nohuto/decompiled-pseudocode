/*
 * XREFs of HalpDmaRemoveAdapterFromChannelQueue @ 0x14058F264
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelDmaThin @ 0x1404D8330 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14050C960 (HalCancelAdapterChannelDmarThin.c)
 *     HalCancelAdapterChannel @ 0x14058AF80 (HalCancelAdapterChannel.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall HalpDmaRemoveAdapterFromChannelQueue(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v6; // r8
  char v7; // si
  _QWORD *i; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  v1 = *(_QWORD *)(a1 + 368);
  v3 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  v4 = *(unsigned __int8 *)(v1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v4 )
    __writecr8(v4);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
  KxAcquireSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 368) + 168LL));
  v6 = (_QWORD *)(v3 + 144);
  v7 = 0;
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v9 = (_QWORD *)*i;
    if ( i == (_QWORD *)(a1 + 208) )
    {
      if ( (_QWORD *)v9[1] != i || (v10 = (_QWORD *)i[1], (_QWORD *)*v10 != i) )
        __fastfail(3u);
      *v10 = v9;
      v7 = 1;
      v9[1] = v10;
      break;
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 368) + 168LL));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v7;
}
