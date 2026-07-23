/*
 * XREFs of IoQueryDmaFeatureSupport @ 0x1407A44D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoQueryDmaFeatureSupport(int a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx

  v2 = -1073741637;
  if ( a2 )
    *a2 = 0LL;
  v3 = a1 - 1;
  if ( !v3 )
    return 0;
  v4 = v3 - 1;
  if ( !v4 || (unsigned int)(v4 - 1) <= 1 )
    return 0;
  return v2;
}
