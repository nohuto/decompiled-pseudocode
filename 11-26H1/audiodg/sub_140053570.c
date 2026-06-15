/*
 * XREFs of sub_140053570 @ 0x140053570
 * Callers:
 *     sub_140053600 @ 0x140053600 (sub_140053600.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140053570(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r8
  _DWORD *v8; // r10
  __int64 v9; // r11

  v3 = 0;
  *a3 = 0LL;
  if ( sub_14001FC10(a2, &stru_1400C6598) )
  {
    *v5 = v6;
    goto LABEL_8;
  }
  if ( sub_14001FC10(v4, dword_1400C8400) )
  {
    v9 = v6;
LABEL_5:
    *v7 = v9;
LABEL_8:
    sub_1400B6010(v6);
    return v3;
  }
  if ( sub_14001FC10(v8, dword_1400C83F0) )
    goto LABEL_5;
  return (unsigned int)-2147467262;
}
