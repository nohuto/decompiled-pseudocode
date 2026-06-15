/*
 * XREFs of sub_14007C270 @ 0x14007C270
 * Callers:
 *     sub_14007C310 @ 0x14007C310 (sub_14007C310.c)
 *     sub_14007C320 @ 0x14007C320 (sub_14007C320.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_140078C98 @ 0x140078C98 (sub_140078C98.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007C270(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r10
  int v10; // ebx

  *a3 = 0LL;
  if ( sub_14001FC10(a2, &stru_1400C6598) || sub_14001FC10(v3, &dword_1400C6698) )
  {
    *v4 = v5;
    sub_1400B6010(v5);
    return 0;
  }
  if ( sub_14001FC10(v6, &xmmword_1400C5CC0) )
  {
    *v7 = v8;
    v10 = 0;
LABEL_6:
    sub_1400B6010(*v7);
    return (unsigned int)v10;
  }
  v10 = sub_140078C98(v8 + 8, v9);
  if ( v10 >= 0 )
    goto LABEL_6;
  return (unsigned int)v10;
}
