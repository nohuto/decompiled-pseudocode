/*
 * XREFs of MiBlackRemoveChildPartitionHugeRangesCallback @ 0x1406F4240
 * Callers:
 *     <none>
 * Callees:
 *     MiMirrorOmitPagesFromCopy @ 0x140C099DC (MiMirrorOmitPagesFromCopy.c)
 */

__int64 __fastcall MiBlackRemoveChildPartitionHugeRangesCallback(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *i; // rdi

  v3 = *a1;
  v4 = a2 & 0x3FFFFF;
  v5 = a3;
  for ( i = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v4); v5; --v5 )
  {
    if ( (*i & 0x7FF0LL) != 0 )
      MiMirrorOmitPagesFromCopy(v3, 1LL, v4 & 0x3FFFFF, 1LL);
    ++i;
    LODWORD(v4) = (v4 + 1) ^ ((v4 + 1) ^ v4) & 0xFFC00000;
  }
  return 0LL;
}
