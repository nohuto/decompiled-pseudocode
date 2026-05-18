/*
 * XREFs of sub_180001184 @ 0x180001184
 * Callers:
 *     sub_1800214C0 @ 0x1800214C0 (sub_1800214C0.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001184(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        void **a7,
        void **a8,
        void **a9,
        __int64 a10)
{
  __int64 v11; // rcx
  int v12; // r8d
  _BYTE *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  _BYTE *v22; // rdx
  _BYTE v24[32]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v25; // [rsp+50h] [rbp-49h]
  int v26; // [rsp+58h] [rbp-41h]
  int v27; // [rsp+5Ch] [rbp-3Dh]
  __int64 v28; // [rsp+60h] [rbp-39h]
  __int64 v29; // [rsp+68h] [rbp-31h]
  _BYTE *v30; // [rsp+70h] [rbp-29h]
  int v31; // [rsp+78h] [rbp-21h]
  int v32; // [rsp+7Ch] [rbp-1Dh]
  _BYTE *v33; // [rsp+80h] [rbp-19h]
  int v34; // [rsp+88h] [rbp-11h]
  int v35; // [rsp+8Ch] [rbp-Dh]
  _BYTE *v36; // [rsp+90h] [rbp-9h]
  int v37; // [rsp+98h] [rbp-1h]
  int v38; // [rsp+9Ch] [rbp+3h]
  __int64 v39; // [rsp+A0h] [rbp+7h]
  __int64 v40; // [rsp+A8h] [rbp+Fh]

  v39 = a10;
  v11 = -1LL;
  v40 = 4LL;
  v12 = 1;
  v13 = *a9;
  if ( *a9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_1800F9DE0;
    v15 = 1;
  }
  v37 = v15;
  v36 = v13;
  v38 = 0;
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
  v34 = v18;
  v33 = v16;
  v35 = 0;
  v19 = *a7;
  if ( *a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v19 = &unk_1800F9DE0;
    v21 = 1;
  }
  v31 = v21;
  v28 = a6;
  v30 = v19;
  v32 = 0;
  v29 = 8LL;
  v22 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v22[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v22 = &unk_1800F9DE0;
  }
  v25 = v22;
  v26 = v12;
  v27 = 0;
  return sub_18000155C(&dword_1801BD188, a2, 0LL, 0LL, 8, v24);
}
