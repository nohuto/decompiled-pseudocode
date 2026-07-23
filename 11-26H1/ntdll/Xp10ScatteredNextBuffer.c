/*
 * XREFs of Xp10ScatteredNextBuffer @ 0x180122BD4
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x1800F8ED8 (RtlDecompressBuffer2Xp10.c)
 *     Xp10ExecuteHuffmanDecode @ 0x1800F9900 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ScatteredReadBytes @ 0x1800FA0B0 (Xp10ScatteredReadBytes.c)
 *     Xp10ScatteredCopyBits @ 0x1800FA4B4 (Xp10ScatteredCopyBits.c)
 *     Xp10ScatteredCopy @ 0x180152B6C (Xp10ScatteredCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ScatteredNextBuffer(_QWORD *a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx

  if ( *a1 == a1[1] )
  {
    v2 = a1[3];
    v3 = v2 + 1;
    if ( (unsigned __int64)(v2 + 1) >= a1[5] )
      return 0LL;
    v5 = a1[4];
    v6 = 16 * v2;
    a1[2] += *(_QWORD *)(v6 + v5 + 8);
    a1[3] = v3;
    v7 = *(_QWORD *)(v6 + v5 + 16);
    *a1 = v7;
    a1[1] = *(_QWORD *)(v6 + v5 + 24) + v7;
  }
  return 1LL;
}
