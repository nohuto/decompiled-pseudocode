/*
 * XREFs of sub_180001010 @ 0x180001010
 * Callers:
 *     sub_180021560 @ 0x180021560 (sub_180021560.c)
 *     sub_180021600 @ 0x180021600 (sub_180021600.c)
 *     sub_1800216A0 @ 0x1800216A0 (sub_1800216A0.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001010(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        void **a9,
        __int64 a10)
{
  __int64 v10; // rcx
  _BYTE *v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  int v14; // r9d
  int v15; // r8d
  _BYTE *v16; // r9
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // r9
  _BYTE v21[32]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE *v22; // [rsp+50h] [rbp-78h]
  int v23; // [rsp+58h] [rbp-70h]
  int v24; // [rsp+5Ch] [rbp-6Ch]
  __int64 v25; // [rsp+60h] [rbp-68h]
  __int64 v26; // [rsp+68h] [rbp-60h]
  __int64 v27; // [rsp+70h] [rbp-58h]
  __int64 v28; // [rsp+78h] [rbp-50h]
  _BYTE *v29; // [rsp+80h] [rbp-48h]
  int v30; // [rsp+88h] [rbp-40h]
  int v31; // [rsp+8Ch] [rbp-3Ch]
  _BYTE *v32; // [rsp+90h] [rbp-38h]
  int v33; // [rsp+98h] [rbp-30h]
  int v34; // [rsp+9Ch] [rbp-2Ch]
  __int64 v35; // [rsp+A0h] [rbp-28h]
  __int64 v36; // [rsp+A8h] [rbp-20h]

  v35 = a10;
  v10 = -1LL;
  v36 = 4LL;
  v11 = *a9;
  if ( *a9 )
  {
    v12 = -1LL;
    do
      v13 = v11[++v12] == 0;
    while ( !v13 );
    v14 = v12 + 1;
    v15 = 1;
  }
  else
  {
    v15 = 1;
    v11 = &unk_1800F9DE0;
    v14 = 1;
  }
  v32 = v11;
  v33 = v14;
  v34 = 0;
  v16 = *a8;
  if ( *a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &unk_1800F9DE0;
    v18 = 1;
  }
  v30 = v18;
  v27 = a7;
  v25 = a6;
  v29 = v16;
  v31 = 0;
  v28 = 8LL;
  v19 = *a5;
  v26 = 8LL;
  if ( v19 )
  {
    do
      v13 = v19[++v10] == 0;
    while ( !v13 );
    v15 = v10 + 1;
  }
  else
  {
    v19 = &unk_1800F9DE0;
  }
  v22 = v19;
  v23 = v15;
  v24 = 0;
  return sub_18000155C(&dword_1801BD188, a2, 0LL, 0LL, 8, v21);
}
