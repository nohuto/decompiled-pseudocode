/*
 * XREFs of LZ4HC_reverseCountPattern @ 0x1800E6394
 * Callers:
 *     LZ4HC_compress_generic @ 0x1800ED00C (LZ4HC_compress_generic.c)
 *     LZ4HC_compress_generic_dictCtx @ 0x1800EFA3C (LZ4HC_compress_generic_dictCtx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZ4HC_reverseCountPattern(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rdx
  int v5; // r9d
  char *v6; // rdx
  int v8; // [rsp+18h] [rbp+18h] BYREF

  HIBYTE(v8) = HIBYTE(a3);
  v4 = a2 + 4;
  v5 = a1;
  while ( a1 >= v4 && *(_DWORD *)(a1 - 4) == a3 )
    a1 -= 4LL;
  v6 = (char *)&v8 - a1 + 3;
  while ( a1 > a2 && *(_BYTE *)(a1 - 1) == v6[a1] )
    --a1;
  return (unsigned int)(v5 - a1);
}
