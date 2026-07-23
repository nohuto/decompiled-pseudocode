/*
 * XREFs of MiActOnMirrorHugeRangeBitmap @ 0x1406F41A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiSplitMirrorBitMap @ 0x14086EAC0 (MiSplitMirrorBitMap.c)
 */

__int64 __fastcall MiActOnMirrorHugeRangeBitmap(int *a1, int a2, unsigned __int64 a3)
{
  int v3; // eax

  v3 = *a1;
  if ( !*a1 )
    return (unsigned int)MiSplitMirrorBitMap(*((_QWORD *)a1 + 1), a2 & 0x3FFFFF) == 0 ? 0xC000009A : 0;
  if ( v3 == 1 )
  {
    RtlSetBitsEx(*((_QWORD *)a1 + 1), a2 & 0x3FFFFF, a3);
  }
  else if ( v3 == 2 )
  {
    RtlClearBitsEx(*((_QWORD *)a1 + 1), a2 & 0x3FFFFF, a3);
  }
  return 0LL;
}
