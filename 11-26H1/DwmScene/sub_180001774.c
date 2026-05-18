/*
 * XREFs of sub_180001774 @ 0x180001774
 * Callers:
 *     sub_180024410 @ 0x180024410 (sub_180024410.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001774(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        void **a8,
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
  _BYTE *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  _BYTE *v31; // rcx
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-99h] BYREF
  _BYTE *v34; // [rsp+50h] [rbp-79h]
  int v35; // [rsp+58h] [rbp-71h]
  int v36; // [rsp+5Ch] [rbp-6Dh]
  __int64 v37; // [rsp+60h] [rbp-69h]
  __int64 v38; // [rsp+68h] [rbp-61h]
  __int64 v39; // [rsp+70h] [rbp-59h]
  __int64 v40; // [rsp+78h] [rbp-51h]
  _BYTE *v41; // [rsp+80h] [rbp-49h]
  int v42; // [rsp+88h] [rbp-41h]
  int v43; // [rsp+8Ch] [rbp-3Dh]
  _BYTE *v44; // [rsp+90h] [rbp-39h]
  int v45; // [rsp+98h] [rbp-31h]
  int v46; // [rsp+9Ch] [rbp-2Dh]
  _BYTE *v47; // [rsp+A0h] [rbp-29h]
  int v48; // [rsp+A8h] [rbp-21h]
  int v49; // [rsp+ACh] [rbp-1Dh]
  _BYTE *v50; // [rsp+B0h] [rbp-19h]
  int v51; // [rsp+B8h] [rbp-11h]
  int v52; // [rsp+BCh] [rbp-Dh]
  _BYTE *v53; // [rsp+C0h] [rbp-9h]
  int v54; // [rsp+C8h] [rbp-1h]
  int v55; // [rsp+CCh] [rbp+3h]

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
  v54 = v17;
  v53 = v15;
  v55 = 0;
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
  v51 = v20;
  v50 = v18;
  v52 = 0;
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
  v48 = v23;
  v47 = v21;
  v49 = 0;
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
  v45 = v26;
  v44 = v24;
  v46 = 0;
  v27 = *a8;
  if ( *a8 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v27 = &unk_1800F9DE0;
    v29 = 1;
  }
  v42 = v29;
  v41 = v27;
  v43 = 0;
  v40 = 16LL;
  v30 = *a7;
  v37 = a6;
  v39 = v30;
  v38 = 4LL;
  v31 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v31[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v31 = &unk_1800F9DE0;
  }
  v34 = v31;
  v35 = v14;
  v36 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 0xAu, &v33);
}
