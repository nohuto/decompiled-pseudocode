/*
 * XREFs of StorpTelemetrySendUnitUniqueErrorData @ 0x1400261C0
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x140025890 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer @ 0x1400273A0 (McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetrySendUnitUniqueErrorData(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // r9
  char v4; // cl

  if ( (byte_140173445 & 0x40) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = &unk_140153274;
    v4 = *(_BYTE *)(a1 + 506);
    if ( *(_QWORD *)(v2 + 5144) )
      v3 = *(void **)(v2 + 5144);
    McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer(
      v4 & 1,
      a1 + 242,
      a1 + 177,
      *(_DWORD *)(v2 + 56),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      v2 + 5128,
      *(_DWORD *)(a1 + 3432),
      *(_QWORD *)(v2 + 4784),
      a1 + 168,
      a1 + 177,
      a1 + 242,
      (__int64)v3,
      v4 & 1);
  }
  return 0LL;
}
