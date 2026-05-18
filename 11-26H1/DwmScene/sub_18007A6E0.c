/*
 * XREFs of sub_18007A6E0 @ 0x18007A6E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 *     sub_18004A388 @ 0x18004A388 (sub_18004A388.c)
 *     sub_18004A3AC @ 0x18004A3AC (sub_18004A3AC.c)
 *     sub_18005ADF0 @ 0x18005ADF0 (sub_18005ADF0.c)
 *     sub_18007EC28 @ 0x18007EC28 (sub_18007EC28.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007A6E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax
  __int64 *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-59h] BYREF
  __int64 v7; // [rsp+28h] [rbp-51h]
  int v8; // [rsp+30h] [rbp-49h] BYREF
  __int128 v9; // [rsp+34h] [rbp-45h]
  int v10; // [rsp+44h] [rbp-35h]
  __int128 v11; // [rsp+48h] [rbp-31h]
  int v12; // [rsp+58h] [rbp-21h]
  __int128 v13; // [rsp+5Ch] [rbp-1Dh]
  int v14; // [rsp+6Ch] [rbp-Dh]
  __int64 v15; // [rsp+70h] [rbp-9h] BYREF
  __int64 v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h] BYREF
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __m128 v19[4]; // [rsp+90h] [rbp+17h] BYREF

  sub_18004A388(a2, &v17);
  result = (__int64)sub_18004A3AC(a2, &v6, v3);
  if ( v6 )
  {
    v5 = sub_180042248(a2, &v15);
    sub_18003BCCC(*v5, v19);
    if ( v16 )
      sub_180010EC8(v16);
    v8 = 1065353216;
    v9 = 0LL;
    v10 = 1065353216;
    v11 = 0LL;
    v12 = 1065353216;
    v13 = 0LL;
    v14 = 1065353216;
    sub_18005ADF0(v19, (__m128 *)&v8);
    result = sub_18007EC28(v6);
  }
  if ( v7 )
    result = sub_180010EC8(v7);
  if ( v18 )
    return sub_180010EC8(v18);
  return result;
}
