/*
 * XREFs of BgpFmSqrt @ 0x140357694
 * Callers:
 *     RaspTestIntersection @ 0x1403573DC (RaspTestIntersection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmSqrt(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 result; // rax

  if ( a1 <= 0 )
    return 0LL;
  v1 = 0LL;
  v2 = (a1 + 1) >> 1;
  if ( v2 > 0 )
  {
    do
      v2 -= v1++;
    while ( v2 > v1 );
  }
  v3 = v1 << 16;
  if ( !v3 )
    return 0LL;
  v4 = 7LL;
  do
  {
    result = ((a1 << 32) + v3 * v3) / (2 * v3);
    v3 = result;
    --v4;
  }
  while ( v4 );
  return result;
}
