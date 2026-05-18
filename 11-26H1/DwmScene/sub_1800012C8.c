/*
 * XREFs of sub_1800012C8 @ 0x1800012C8
 * Callers:
 *     sub_180021420 @ 0x180021420 (sub_180021420.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800012C8(
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
  __int64 v11; // rcx
  int v12; // r8d
  _BYTE *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // rdx
  _BYTE v21[32]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v22; // [rsp+50h] [rbp-49h]
  int v23; // [rsp+58h] [rbp-41h]
  int v24; // [rsp+5Ch] [rbp-3Dh]
  __int64 v25; // [rsp+60h] [rbp-39h]
  __int64 v26; // [rsp+68h] [rbp-31h]
  __int64 v27; // [rsp+70h] [rbp-29h]
  __int64 v28; // [rsp+78h] [rbp-21h]
  _BYTE *v29; // [rsp+80h] [rbp-19h]
  int v30; // [rsp+88h] [rbp-11h]
  int v31; // [rsp+8Ch] [rbp-Dh]
  _BYTE *v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+98h] [rbp-1h]
  int v34; // [rsp+9Ch] [rbp+3h]
  __int64 v35; // [rsp+A0h] [rbp+7h]
  __int64 v36; // [rsp+A8h] [rbp+Fh]

  v35 = a10;
  v11 = -1LL;
  v36 = 4LL;
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
  v33 = v15;
  v32 = v13;
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
  v28 = 4LL;
  v19 = *a5;
  v26 = 8LL;
  if ( v19 )
  {
    do
      ++v11;
    while ( v19[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v19 = &unk_1800F9DE0;
  }
  v22 = v19;
  v23 = v12;
  v24 = 0;
  return sub_18000155C(&dword_1801BD188, a2, 0LL, 0LL, 8, v21);
}
