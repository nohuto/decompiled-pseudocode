/*
 * XREFs of CmpFindExtraParameterInBlock @ 0x140A6AA70
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408ABF08 (VrpPostOpenOrCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpFindExtraParameterInBlock(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // r9
  __int64 v5; // r10

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 3221225524LL;
    v5 = i[2] - *a2;
    if ( !v5 )
      v5 = i[3] - a2[1];
    if ( !v5 )
      break;
  }
  *a3 = i;
  return 0LL;
}
