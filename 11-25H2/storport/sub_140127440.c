/*
 * XREFs of sub_140127440 @ 0x140127440
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006C334 @ 0x14006C334 (sub_14006C334.c)
 *     sub_140126ECC @ 0x140126ECC (sub_140126ECC.c)
 */

void __fastcall sub_140127440(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context)
{
  __int64 v5; // r8
  __int64 v6; // rdx

  *(_DWORD *)(*(_QWORD *)(Context + 160) + 76LL) &= ~2u;
  v5 = *(_QWORD *)(Context + 160);
  v6 = *(_QWORD *)(v5 + 8);
  if ( (*(_DWORD *)(v6 + 20) & 0x40) != 0 && (*(_DWORD *)(*(_QWORD *)(v6 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( *(_BYTE *)v5 == 1 && _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 136), 0, 1) == 1 )
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(Context + 160) + 8LL), 0LL, 0LL);
    sub_140126ECC(Context);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(*(_QWORD *)(Context + 160) + 8LL));
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(Context + 160) + 8LL) + 65LL) = 0;
  if ( *(_QWORD *)(*(_QWORD *)(Context + 160) + 144LL) != *(_QWORD *)(Context + 160) + 144LL )
    sub_14006C334(*(struct _DEVICE_OBJECT **)(Context + 8));
}
