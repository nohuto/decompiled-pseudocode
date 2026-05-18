/*
 * XREFs of sub_18001C3C0 @ 0x18001C3C0
 * Callers:
 *     sub_180017668 @ 0x180017668 (sub_180017668.c)
 * Callees:
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18001BE84 @ 0x18001BE84 (sub_18001BE84.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 */

__int64 __fastcall sub_18001C3C0(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = a1 + 2;
  sub_180013540(a1 + 2, a2);
  v4 = *v2;
  v5 = sub_180013440(v15, (__int64)&unk_1801C9038);
  v6 = (_QWORD *)sub_180040570(v4, v13, v5);
  v7 = sub_18001BE84(a1 + 4, v6);
  if ( v14 )
    sub_180010EC8(v14);
  if ( v7 < 0 )
  {
    v8 = 33LL;
LABEL_5:
    sub_1800102C4(
      retaddr,
      v8,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectreworld.cpp",
      (unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = *v2;
  v11 = sub_180013440(v15, (__int64)&unk_1801C90B8);
  v12 = (_QWORD *)sub_180040570(v10, v13, v11);
  v7 = sub_18001BE84(a1 + 5, v12);
  if ( v14 )
    sub_180010EC8(v14);
  if ( v7 < 0 )
  {
    v8 = 37LL;
    goto LABEL_5;
  }
  return 0LL;
}
