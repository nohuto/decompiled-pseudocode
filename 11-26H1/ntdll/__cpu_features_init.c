/*
 * XREFs of __cpu_features_init @ 0x18013157C
 * Callers:
 *     LdrpInitialize @ 0x1800CC108 (LdrpInitialize.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1800D11A0 (RtlIsProcessorFeaturePresent.c)
 */

__int64 _cpu_features_init()
{
  char v0; // bl
  BOOLEAN IsProcessorFeaturePresent; // al
  char v2; // dl
  char v3; // bl
  BOOLEAN v4; // al
  char v5; // dl
  char v6; // bl
  BOOLEAN v7; // al
  char v8; // dl

  v0 = RtlIsProcessorFeaturePresent(0x26u) != 0 ? 8 : 0;
  IsProcessorFeaturePresent = RtlIsProcessorFeaturePresent(0x2Au);
  v2 = v0 | 2;
  if ( !IsProcessorFeaturePresent )
    v2 = v0;
  v3 = v2;
  v4 = RtlIsProcessorFeaturePresent(0x27u);
  v5 = v3 | 4;
  if ( !v4 )
    v5 = v3;
  v6 = v5;
  v7 = RtlIsProcessorFeaturePresent(0x28u);
  v8 = v6 | 0x10;
  if ( !v7 )
    v8 = v6;
  _isa_info = v8 | 1;
  return 0LL;
}
