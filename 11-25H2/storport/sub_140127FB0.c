/*
 * XREFs of sub_140127FB0 @ 0x140127FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140126ECC @ 0x140126ECC (sub_140126ECC.c)
 *     sub_140126F38 @ 0x140126F38 (sub_140126F38.c)
 *     sub_14012A294 @ 0x14012A294 (sub_14012A294.c)
 */

void __fastcall sub_140127FB0(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx

  *(_DWORD *)(Context[20] + 76LL) &= ~2u;
  v5 = Context[20];
  v6 = *(_DWORD *)(v5 + 76);
  if ( (v6 & 0x20) != 0 )
    *(_DWORD *)(v5 + 76) = v6 & 0xFFFFFFDF;
  if ( sub_140126F38((__int64)Context) )
  {
    v7 = Context[20];
    v8 = *(_QWORD *)(v7 + 8);
    if ( (*(_DWORD *)(v8 + 20) & 0x40) != 0 && (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 12LL) & 0x800) != 0 )
    {
      if ( *(_BYTE *)v7 == 1 )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 136), 0, 1) )
          PoFxIdleComponent(**(_QWORD **)(Context[20] + 8LL), 0LL, 0LL);
      }
      sub_140126ECC((__int64)Context);
    }
    PoFxReportDevicePoweredOn(**(_QWORD **)(Context[20] + 8LL));
    sub_14012A294(Context);
  }
}
