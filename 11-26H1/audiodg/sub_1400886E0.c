/*
 * XREFs of sub_1400886E0 @ 0x1400886E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400886E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( (unsigned int)sub_140088ED0(a2, &stru_1400C6598, a3, a1) )
  {
    *v5 = v6;
    goto LABEL_6;
  }
  if ( (unsigned int)sub_140088ED0(v4, &unk_1400CC018, v5, v6) )
  {
    *v7 = v6;
LABEL_6:
    sub_1400B6010(v6);
    return v3;
  }
  return (unsigned int)-2147467262;
}
