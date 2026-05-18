/*
 * XREFs of sub_18004A530 @ 0x18004A530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180016E10 @ 0x180016E10 (sub_180016E10.c)
 *     sub_1800475BC @ 0x1800475BC (sub_1800475BC.c)
 *     sub_18004A638 @ 0x18004A638 (sub_18004A638.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     sub_1800D3F84 @ 0x1800D3F84 (sub_1800D3F84.c)
 */

__int64 __fastcall sub_18004A530(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  _QWORD *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int16 v13; // r8
  int v14; // r10d
  int v15; // r11d
  __int64 v17; // [rsp+68h] [rbp-30h] BYREF
  __int64 v18; // [rsp+70h] [rbp-28h]

  sub_1800D3F84(&v17);
  if ( v18 )
    sub_180010EC8(v18);
  v10 = (_QWORD *)sub_18007AB60(a1);
  v11 = sub_180016E10(v10, &v17);
  sub_180011F5C((_QWORD *)(a1 + 88), v11);
  if ( v18 )
    sub_180010EC8(v18);
  sub_1800475BC(*(_QWORD *)(a1 + 88), a4);
  v12 = sub_180012C40(&v17, (_QWORD *)(a1 + 88));
  sub_18004A638(a1, a2, a3, a6, (__int64)v12, v15, v14, a4 + 116, a4 + 180, a4 + 192, (v13 & 0x200) != 0);
  return a2;
}
