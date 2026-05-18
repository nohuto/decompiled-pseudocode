/*
 * XREFs of sub_180001C50 @ 0x180001C50
 * Callers:
 *     sub_180023110 @ 0x180023110 (sub_180023110.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001C50(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9,
        void **a10,
        void **a11,
        void **a12)
{
  __int64 v13; // rdx
  int v14; // r8d
  _BYTE *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  _BYTE *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  _BYTE *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  _BYTE *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  _BYTE *v28; // rcx
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-99h] BYREF
  _BYTE *v31; // [rsp+50h] [rbp-79h]
  int v32; // [rsp+58h] [rbp-71h]
  int v33; // [rsp+5Ch] [rbp-6Dh]
  __int64 v34; // [rsp+60h] [rbp-69h]
  __int64 v35; // [rsp+68h] [rbp-61h]
  __int64 v36; // [rsp+70h] [rbp-59h]
  __int64 v37; // [rsp+78h] [rbp-51h]
  __int64 v38; // [rsp+80h] [rbp-49h]
  __int64 v39; // [rsp+88h] [rbp-41h]
  _BYTE *v40; // [rsp+90h] [rbp-39h]
  int v41; // [rsp+98h] [rbp-31h]
  int v42; // [rsp+9Ch] [rbp-2Dh]
  _BYTE *v43; // [rsp+A0h] [rbp-29h]
  int v44; // [rsp+A8h] [rbp-21h]
  int v45; // [rsp+ACh] [rbp-1Dh]
  _BYTE *v46; // [rsp+B0h] [rbp-19h]
  int v47; // [rsp+B8h] [rbp-11h]
  int v48; // [rsp+BCh] [rbp-Dh]
  _BYTE *v49; // [rsp+C0h] [rbp-9h]
  int v50; // [rsp+C8h] [rbp-1h]
  int v51; // [rsp+CCh] [rbp+3h]

  v13 = -1LL;
  v14 = 1;
  v15 = *a12;
  if ( *a12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &unk_1800F9DE0;
    v17 = 1;
  }
  v50 = v17;
  v49 = v15;
  v51 = 0;
  v18 = *a11;
  if ( *a11 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v18 = &unk_1800F9DE0;
    v20 = 1;
  }
  v47 = v20;
  v46 = v18;
  v48 = 0;
  v21 = *a10;
  if ( *a10 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v21 = &unk_1800F9DE0;
    v23 = 1;
  }
  v44 = v23;
  v43 = v21;
  v45 = 0;
  v24 = *a9;
  if ( *a9 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v24 = &unk_1800F9DE0;
    v26 = 1;
  }
  v41 = v26;
  v40 = v24;
  v42 = 0;
  v39 = 16LL;
  v38 = *a8;
  v37 = 16LL;
  v35 = 4LL;
  v27 = *a7;
  v34 = a6;
  v36 = v27;
  v28 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v28[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v28 = &unk_1800F9DE0;
  }
  v31 = v28;
  v32 = v14;
  v33 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 0xAu, &v30);
}
