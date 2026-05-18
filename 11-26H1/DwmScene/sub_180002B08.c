/*
 * XREFs of sub_180002B08 @ 0x180002B08
 * Callers:
 *     sub_180022A00 @ 0x180022A00 (sub_180022A00.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180002B08(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
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
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-99h] BYREF
  _BYTE *v28; // [rsp+50h] [rbp-79h]
  int v29; // [rsp+58h] [rbp-71h]
  int v30; // [rsp+5Ch] [rbp-6Dh]
  __int64 v31; // [rsp+60h] [rbp-69h]
  __int64 v32; // [rsp+68h] [rbp-61h]
  __int64 v33; // [rsp+70h] [rbp-59h]
  __int64 v34; // [rsp+78h] [rbp-51h]
  __int64 v35; // [rsp+80h] [rbp-49h]
  __int64 v36; // [rsp+88h] [rbp-41h]
  __int64 v37; // [rsp+90h] [rbp-39h]
  __int64 v38; // [rsp+98h] [rbp-31h]
  _BYTE *v39; // [rsp+A0h] [rbp-29h]
  int v40; // [rsp+A8h] [rbp-21h]
  int v41; // [rsp+ACh] [rbp-1Dh]
  _BYTE *v42; // [rsp+B0h] [rbp-19h]
  int v43; // [rsp+B8h] [rbp-11h]
  int v44; // [rsp+BCh] [rbp-Dh]
  _BYTE *v45; // [rsp+C0h] [rbp-9h]
  int v46; // [rsp+C8h] [rbp-1h]
  int v47; // [rsp+CCh] [rbp+3h]

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
  v46 = v17;
  v45 = v15;
  v47 = 0;
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
  v43 = v20;
  v42 = v18;
  v44 = 0;
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
  v40 = v23;
  v39 = v21;
  v41 = 0;
  v38 = 16LL;
  v37 = *a9;
  v36 = 16LL;
  v34 = 16LL;
  v35 = *a8;
  v32 = 4LL;
  v24 = *a7;
  v31 = a6;
  v33 = v24;
  v25 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v25[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v25 = &unk_1800F9DE0;
  }
  v28 = v25;
  v29 = v14;
  v30 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 0xAu, &v27);
}
