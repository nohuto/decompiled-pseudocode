/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1800D11A0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlHpGlobalsInitialize @ 0x1800CFD78 (RtlHpGlobalsInitialize.c)
 *     __cpu_features_init @ 0x18013157C (__cpu_features_init.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  unsigned __int64 v2; // rdx

  if ( ProcessorFeature >= 0xC0 )
    return 0;
  if ( ProcessorFeature < 0x40 )
    return *(_BYTE *)(ProcessorFeature + 0x7FFE0274LL);
  v2 = ProcessorFeature - 64;
  if ( v2 >= RtlProcessorFeaturesBitMap )
    return 0;
  return _bittest64((const signed __int64 *)off_1801C4550 + (v2 >> 6), ((_BYTE)ProcessorFeature - 64) & 0x3F);
}
