/*
 * XREFs of sub_14007C430 @ 0x14007C430
 * Callers:
 *     sub_14007C4C0 @ 0x14007C4C0 (sub_14007C4C0.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_140078CE0 @ 0x140078CE0 (sub_140078CE0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007C430(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r10
  unsigned int v9; // ebx
  int v10; // eax

  *a3 = 0LL;
  if ( sub_14001FC10(a2, &stru_1400C6598) )
  {
    *v4 = v5;
    sub_1400B6010(v5);
    return 0;
  }
  if ( sub_14001FC10(v3, dword_1400CBB00) )
  {
    *v6 = v7;
    v9 = 0;
LABEL_6:
    sub_1400B6010(*v6);
    return v9;
  }
  v10 = sub_140078CE0(v7 + 8, v8);
  v9 = -2147467262;
  if ( v10 != -2147467262 )
  {
    v9 = v10;
    if ( v10 >= 0 )
      goto LABEL_6;
  }
  return v9;
}
