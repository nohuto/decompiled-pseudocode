/*
 * XREFs of sub_18006095C @ 0x18006095C
 * Callers:
 *     sub_180016344 @ 0x180016344 (sub_180016344.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_180030794 @ 0x180030794 (sub_180030794.c)
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 *     sub_18006092C @ 0x18006092C (sub_18006092C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18006095C(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-10h] BYREF

  v13[0] = *a5;
  v13[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  v14[0] = *a4;
  v14[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v12[0] = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180030CF0(a1, a2, v12, v14, v13);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  *(_WORD *)(a1 + 1457) = 0;
  *(_DWORD *)(a1 + 1460) = 1065353216;
  sub_180030794((_BYTE *)(a1 + 1464), 0);
  sub_180030794((_BYTE *)(a1 + 1465), 0);
  sub_180030794((_BYTE *)(a1 + 1466), 0);
  sub_180030794((_BYTE *)(a1 + 1467), 0);
  sub_180030794((_BYTE *)(a1 + 1468), 0);
  *(_OWORD *)(a1 + 1472) = xmmword_1800FA7E0;
  sub_18006092C(a1 + 1488);
  sub_180025874(a1 + 1552);
  v8 = a3[1];
  if ( v8 )
    sub_180010EC8(v8);
  v9 = a4[1];
  if ( v9 )
    sub_180010EC8(v9);
  v10 = a5[1];
  if ( v10 )
    sub_180010EC8(v10);
  return a1;
}
