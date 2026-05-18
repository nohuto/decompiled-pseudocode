/*
 * XREFs of sub_180042B80 @ 0x180042B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_1800432F4 @ 0x1800432F4 (sub_1800432F4.c)
 *     sub_1800D3F84 @ 0x1800D3F84 (sub_1800D3F84.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180042B80(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r11
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  _QWORD v16[3]; // [rsp+48h] [rbp-20h] BYREF

  sub_1800160E4(&v12, (__int64)a3, *a3);
  if ( v12 )
    v6 = *(_QWORD *)(v12 + 152);
  else
    v6 = *(_QWORD *)(v5 + 32);
  if ( *(_WORD *)(v5 + 24) != 511 )
  {
    sub_180012A94(v5 + 8, &v14);
    if ( v14 )
    {
      v7 = sub_180012C40(v16, &v12);
      sub_1800432F4(v9, v7, v8, v6);
    }
    if ( v15 )
      sub_180010EC8(v15);
  }
  sub_1800D3F84(a2);
  if ( v13 )
    sub_180010EC8(v13);
  v10 = a3[1];
  if ( v10 )
    sub_180010EC8(v10);
  return a2;
}
