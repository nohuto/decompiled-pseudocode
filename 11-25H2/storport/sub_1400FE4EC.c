/*
 * XREFs of sub_1400FE4EC @ 0x1400FE4EC
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_1400EA980 @ 0x1400EA980 (sub_1400EA980.c)
 *     sub_14010F0B0 @ 0x14010F0B0 (sub_14010F0B0.c)
 */

NTSTATUS __fastcall sub_1400FE4EC(__int64 a1, IRP *a2, _BYTE *a3)
{
  __int64 v4; // rcx

  a2->IoStatus.Information = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  *a3 = 1;
  if ( (*(_BYTE *)(v4 + 136) & 2) != 0 )
    return sub_1400EA980(v4, (__int64)a2);
  if ( *(_BYTE *)(v4 + 1728) == 1 )
    return sub_14010F0B0(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), a2);
}
