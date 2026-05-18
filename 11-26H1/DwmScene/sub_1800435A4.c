/*
 * XREFs of sub_1800435A4 @ 0x1800435A4
 * Callers:
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_18006E60C @ 0x18006E60C (sub_18006E60C.c)
 *     sub_18008DF20 @ 0x18008DF20 (sub_18008DF20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_180042444 @ 0x180042444 (sub_180042444.c)
 *     sub_180042A7C @ 0x180042A7C (sub_180042A7C.c)
 *     sub_18005DD64 @ 0x18005DD64 (sub_18005DD64.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 */

char __fastcall sub_1800435A4(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  char result; // al
  __int64 *v12; // rax
  _BYTE v13[8]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v14; // [rsp+30h] [rbp-31h]
  __int64 v15; // [rsp+38h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h]
  __int64 v17; // [rsp+48h] [rbp-19h] BYREF
  __int64 v18; // [rsp+50h] [rbp-11h]
  _DWORD v19[3]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v20; // [rsp+64h] [rbp+3h]
  int v21; // [rsp+6Ch] [rbp+Bh]
  char v22; // [rsp+70h] [rbp+Fh]
  __int128 v23; // [rsp+74h] [rbp+13h]
  __int128 v24; // [rsp+84h] [rbp+23h]
  char v25; // [rsp+94h] [rbp+33h]
  bool v26; // [rsp+95h] [rbp+34h]
  char v27; // [rsp+96h] [rbp+35h]
  __int16 v28; // [rsp+97h] [rbp+36h]
  int v29; // [rsp+9Ch] [rbp+3Bh]

  v8 = (_QWORD *)sub_180026A6C(a1, &v15);
  v9 = *(_QWORD *)(*(_QWORD *)sub_18005DD64(*v8, v13) + 18688LL);
  if ( v14 )
    sub_180010EC8(v14);
  if ( v16 )
    sub_180010EC8(v16);
  v10 = *(_QWORD *)(a1 + 168);
  v19[0] = 0;
  v26 = a3 == 1;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  v25 = 1;
  v28 = 256;
  v29 = 3;
  v27 = 0;
  v19[2] = a2;
  v19[1] = a4;
  v23 = 0LL;
  v24 = 0LL;
  if ( !v10 || (result = sub_180042A7C(*(_QWORD *)(v10 + 112), (__int64)v19)) == 0 )
  {
    v12 = sub_180042444(v9, &v17);
    sub_180011F5C((_QWORD *)(a1 + 168), v12);
    if ( v18 )
      sub_180010EC8(v18);
    return sub_180081920(*(_QWORD *)(a1 + 168), v19, 0LL);
  }
  return result;
}
