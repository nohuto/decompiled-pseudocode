/*
 * XREFs of RtlpIsImmutableFeatureConfigurationPriority @ 0x140627B58
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x140B1BA58 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsImmutableFeatureConfigurationPriority(unsigned int a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 <= 0xF )
  {
    v1 = 33291;
    if ( _bittest(&v1, a1) )
      return 1;
  }
  return result;
}
