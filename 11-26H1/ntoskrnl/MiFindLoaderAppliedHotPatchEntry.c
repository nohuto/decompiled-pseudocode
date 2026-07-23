/*
 * XREFs of MiFindLoaderAppliedHotPatchEntry @ 0x140D019F8
 * Callers:
 *     MiUpdateBootHpatPagesInUse @ 0x140D01B84 (MiUpdateBootHpatPagesInUse.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiFindLoaderAppliedHotPatchEntry(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rdx
  _QWORD *v4; // r9

  v2 = (_QWORD *)(*(_QWORD *)(a2 + 240) + 3784LL);
  v3 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  do
  {
    v4 = v3;
    if ( (v3[5] & 1) != 0 && (v3[10] == a1 || v3[11] == a1) )
      break;
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != v2 );
  if ( v3 == v2 )
    return 0LL;
  return v4;
}
