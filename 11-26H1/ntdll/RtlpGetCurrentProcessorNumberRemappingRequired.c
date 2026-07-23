/*
 * XREFs of RtlpGetCurrentProcessorNumberRemappingRequired @ 0x180152E40
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1801633D0 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetCurrentProcessorNumberRemappingRequired(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  int v4; // r9d
  unsigned int i; // edx
  unsigned __int64 v6; // rax

  v2 = a2;
  if ( !a2 )
    return a1;
  v4 = 0;
  for ( i = a1 % (unsigned int)__popcnt(a2) + 1; i; --i )
  {
    _BitScanForward64(&v6, v2);
    v4 += v6 + 1;
    v2 >>= (unsigned __int8)v6 + 1;
  }
  return (unsigned int)(v4 - 1);
}
