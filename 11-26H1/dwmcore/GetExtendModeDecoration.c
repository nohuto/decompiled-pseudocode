/*
 * XREFs of GetExtendModeDecoration @ 0x1801DE0F8
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1801452A0 (AppendCustomSamplerShaderBody.c)
 *     PerformSample @ 0x1801479B0 (PerformSample.c)
 * Callees:
 *     <none>
 */

char __fastcall GetExtendModeDecoration(char a1)
{
  switch ( a1 )
  {
    case 1:
      return 67;
    case 2:
      return 87;
    case 3:
      return 77;
  }
  return 0;
}
