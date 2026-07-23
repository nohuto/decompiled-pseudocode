/*
 * XREFs of RtlCompressBufferLz4 @ 0x180152D90
 * Callers:
 *     <none>
 * Callees:
 *     LZ4_compress_fast_extState @ 0x1801094B4 (LZ4_compress_fast_extState.c)
 *     LZ4_compress_HC_extStateHC @ 0x180155ABC (LZ4_compress_HC_extStateHC.c)
 */

__int64 __fastcall RtlCompressBufferLz4(__int16 a1, char *a2, int a3, _BYTE *a4, int a5, int a6, int *a7, __int64 a8)
{
  int v9; // eax

  if ( (a1 & 0xFEFF) != 0 )
    return 3221225659LL;
  if ( (a8 & 7) != 0 )
    return 3221226612LL;
  if ( a1 )
    v9 = LZ4_compress_HC_extStateHC(a8, (_DWORD)a2, (_DWORD)a4, a3, a5);
  else
    v9 = LZ4_compress_fast_extState(a8, a2, a4, a3, a5);
  if ( v9 <= 0 )
    return 3221225507LL;
  *a7 = v9;
  return 0LL;
}
