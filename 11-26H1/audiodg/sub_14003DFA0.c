/*
 * XREFs of sub_14003DFA0 @ 0x14003DFA0
 * Callers:
 *     sub_14006D390 @ 0x14006D390 (sub_14006D390.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003DFA0(int *a1)
{
  int v1; // r8d
  unsigned int v2; // edx
  _WORD *v4; // rax

  v1 = *a1;
  v2 = 0;
  if ( *a1 && (unsigned int)(v1 - 1) > 2 || !a1[3] && a1[21] )
    return (unsigned int)-2147024809;
  if ( (unsigned int)(v1 - 2) > 1 )
  {
    v4 = (_WORD *)*((_QWORD *)a1 + 2);
    if ( !v4 || (unsigned int)a1[3] >= 0x12 && (*v4 != 0xFFFE || (unsigned int)a1[3] >= 0x28) )
      goto LABEL_8;
    return (unsigned int)-2147024809;
  }
  if ( a1[21] || *((_QWORD *)a1 + 2) )
    return (unsigned int)-2147024809;
LABEL_8:
  if ( (unsigned int)a1[9] < 0x12
    || **((_WORD **)a1 + 5) == 0xFFFE && (unsigned int)a1[9] < 0x28
    || a1[20] && a1[20] != 3 )
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
