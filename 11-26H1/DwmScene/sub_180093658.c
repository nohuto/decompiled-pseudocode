/*
 * XREFs of sub_180093658 @ 0x180093658
 * Callers:
 *     sub_1800903A4 @ 0x1800903A4 (sub_1800903A4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180093658(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++qword_1801CDAF0;
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = qword_1801CDAF8;
  v6 = 2 * (a2 & qword_1801CDB10);
  v7 = *(_QWORD *)(qword_1801CDAF8 + 16 * (a2 & qword_1801CDB10));
  if ( v7 == qword_1801CDAE8 )
  {
    *(_QWORD *)(qword_1801CDAF8 + 8 * v6) = a4;
LABEL_6:
    *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
    return a4;
  }
  if ( v7 == a3 )
  {
    *(_QWORD *)(qword_1801CDAF8 + 8 * v6) = a4;
  }
  else if ( *(_QWORD **)(qword_1801CDAF8 + 8 * v6 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}
