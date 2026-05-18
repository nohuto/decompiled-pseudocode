/*
 * XREFs of sub_180093040 @ 0x180093040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003BDF4 @ 0x18003BDF4 (sub_18003BDF4.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 *     sub_18004A388 @ 0x18004A388 (sub_18004A388.c)
 *     sub_18004A3AC @ 0x18004A3AC (sub_18004A3AC.c)
 *     sub_18005ADF0 @ 0x18005ADF0 (sub_18005ADF0.c)
 *     sub_18007EC28 @ 0x18007EC28 (sub_18007EC28.c)
 *     sub_18007ED34 @ 0x18007ED34 (sub_18007ED34.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180093040(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+30h] [rbp-D8h]
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h]
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h]
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+5Ch] [rbp-ACh]
  int v15; // [rsp+6Ch] [rbp-9Ch]
  __int128 v16; // [rsp+70h] [rbp-98h]
  int v17; // [rsp+80h] [rbp-88h]
  __int128 v18; // [rsp+84h] [rbp-84h]
  int v19; // [rsp+94h] [rbp-74h]
  __m128 v20[4]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v21[7]; // [rsp+D8h] [rbp-30h] BYREF

  sub_18004A388(a2, &v11);
  result = (__int64)sub_18004A3AC(a2, &v7, v3);
  if ( v7 )
  {
    v5 = sub_180042248(a2, &v9);
    sub_18003BCCC(*v5, v20);
    if ( v10 )
      sub_180010EC8(v10);
    v6 = sub_180042248(a2, &v9);
    sub_18003BDF4(*v6, (__int64)v21);
    if ( v10 )
      sub_180010EC8(v10);
    v13 = 1065353216;
    v14 = 0LL;
    v15 = 1065353216;
    v16 = 0LL;
    v17 = 1065353216;
    v18 = 0LL;
    v19 = 1065353216;
    sub_18005ADF0(v20, (__m128 *)&v13);
    sub_18007EC28(v7, (__int64)&unk_1801CC078, &v13);
    sub_18007EC28(v7, (__int64)&unk_1801CC098, v21);
    sub_18007ED34(v7, (__int64)&unk_1801CC0B8);
    sub_18007ED34(v7, (__int64)&unk_1801CC0D8);
    result = sub_18007ED34(v7, (__int64)&unk_1801CC0F8);
  }
  if ( v8 )
    result = sub_180010EC8(v8);
  if ( v12 )
    return sub_180010EC8(v12);
  return result;
}
