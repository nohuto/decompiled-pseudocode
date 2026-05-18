/*
 * XREFs of sub_1800901F8 @ 0x1800901F8
 * Callers:
 *     sub_1800903A4 @ 0x1800903A4 (sub_1800903A4.c)
 *     sub_1800937F0 @ 0x1800937F0 (sub_1800937F0.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 */

_QWORD *__fastcall sub_1800901F8(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  size_t v7; // rbp
  const void *v8; // r14
  const void *v9; // rax

  v5 = *(_QWORD **)(qword_1801CDAF8 + 16 * (a4 & qword_1801CDB10) + 8);
  if ( v5 == (_QWORD *)qword_1801CDAE8 )
  {
    *a2 = qword_1801CDAE8;
    a2[1] = 0LL;
  }
  else
  {
    v6 = *(_QWORD **)(qword_1801CDAF8 + 16 * (a4 & qword_1801CDB10));
    v7 = *(_QWORD *)(a3 + 16);
    v8 = (const void *)sub_1800148EC(a3);
    while ( 1 )
    {
      v9 = (const void *)sub_1800148EC((__int64)(v5 + 2));
      if ( sub_18001CFB0(v8, v7, v9, v5[4]) )
        break;
      if ( v5 == v6 )
      {
        *a2 = v5;
        a2[1] = 0LL;
        return a2;
      }
      v5 = (_QWORD *)v5[1];
    }
    *a2 = *v5;
    a2[1] = v5;
  }
  return a2;
}
