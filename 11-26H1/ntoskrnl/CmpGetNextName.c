/*
 * XREFs of CmpGetNextName @ 0x140864E0C
 * Callers:
 *     CmpWalkUnicodeStringPath @ 0x1408665A8 (CmpWalkUnicodeStringPath.c)
 *     CmpFindHiveSubKey @ 0x140CF5570 (CmpFindHiveSubKey.c)
 *     CmpGetKnownHivePathNode @ 0x140CF5A38 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpGetNextName(__int16 *a1, __int64 a2, bool *a3)
{
  _WORD *v3; // r9
  __int16 v5; // ax
  bool result; // al
  __int16 v7; // r8
  unsigned __int16 v8; // cx

  v3 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( v3 && (v5 = *a1) != 0 && *v3 )
  {
    while ( *v3 == 92 )
    {
      a1[1] -= 2;
      ++v3;
      v5 -= 2;
      *((_QWORD *)a1 + 1) = v3;
      *a1 = v5;
      if ( !v5 )
        goto LABEL_6;
    }
    *(_QWORD *)(a2 + 8) = v3;
    v7 = v5;
    do
    {
      if ( *v3 == 92 )
        break;
      a1[1] -= 2;
      ++v3;
      *a1 = v5 - 2;
      *((_QWORD *)a1 + 1) = v3;
      v5 -= 2;
      v7 = v5;
    }
    while ( v5 );
    v8 = a1[4] - *(_WORD *)(a2 + 8);
    *(_WORD *)a2 = v8;
    *(_WORD *)(a2 + 2) = v8;
    *a3 = v7 == 0;
    return v8 <= 0x200u;
  }
  else
  {
LABEL_6:
    *a3 = 1;
    result = 1;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)a2 = 0;
  }
  return result;
}
