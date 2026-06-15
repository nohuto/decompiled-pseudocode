/*
 * XREFs of sub_1400504A0 @ 0x1400504A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400504A0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( sub_14001FC10(a2, &stru_1400C6598) )
  {
    *v5 = v6;
    goto LABEL_6;
  }
  if ( sub_14001FC10(v4, dword_1400C82D0) )
  {
    *v7 = v6;
LABEL_6:
    sub_1400B6010(v6);
    return v3;
  }
  return (unsigned int)-2147467262;
}
