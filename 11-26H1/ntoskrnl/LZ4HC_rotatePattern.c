/*
 * XREFs of LZ4HC_rotatePattern @ 0x140637F80
 * Callers:
 *     LZ4HC_compress_generic_dictCtx @ 0x1406303C4 (LZ4HC_compress_generic_dictCtx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZ4HC_rotatePattern(char a1, unsigned int a2)
{
  __int64 v2; // rcx

  v2 = 8LL * (a1 & 3);
  if ( v2 )
    return (unsigned int)__ROL4__(a2, v2);
  return a2;
}
