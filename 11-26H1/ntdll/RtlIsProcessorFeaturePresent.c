/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1800D5BC0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlHpGlobalsInitialize @ 0x1800D4060 (RtlHpGlobalsInitialize.c)
 *     __cpu_features_init @ 0x18013180C (__cpu_features_init.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  unsigned __int64 v2; // rdx

  if ( a1 >= 0xC0 )
    return 0;
  if ( a1 < 0x40 )
    return *(_BYTE *)(a1 + 0x7FFE0274LL);
  v2 = a1 - 64;
  if ( v2 >= RtlProcessorFeaturesBitMap )
    return 0;
  return _bittest64((const signed __int64 *)off_1801C5550 + (v2 >> 6), ((_BYTE)a1 - 64) & 0x3F);
}
