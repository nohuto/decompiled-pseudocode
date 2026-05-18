/*
 * XREFs of sub_180001600 @ 0x180001600
 * Callers:
 *     sub_180022210 @ 0x180022210 (sub_180022210.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001600(
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
        void **a11)
{
  __int64 v12; // rdx
  int v13; // r8d
  _BYTE *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  _BYTE *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  _BYTE *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  _BYTE *v27; // rcx
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-81h] BYREF
  _BYTE *v30; // [rsp+50h] [rbp-61h]
  int v31; // [rsp+58h] [rbp-59h]
  int v32; // [rsp+5Ch] [rbp-55h]
  __int64 v33; // [rsp+60h] [rbp-51h]
  __int64 v34; // [rsp+68h] [rbp-49h]
  __int64 v35; // [rsp+70h] [rbp-41h]
  __int64 v36; // [rsp+78h] [rbp-39h]
  _BYTE *v37; // [rsp+80h] [rbp-31h]
  int v38; // [rsp+88h] [rbp-29h]
  int v39; // [rsp+8Ch] [rbp-25h]
  _BYTE *v40; // [rsp+90h] [rbp-21h]
  int v41; // [rsp+98h] [rbp-19h]
  int v42; // [rsp+9Ch] [rbp-15h]
  _BYTE *v43; // [rsp+A0h] [rbp-11h]
  int v44; // [rsp+A8h] [rbp-9h]
  int v45; // [rsp+ACh] [rbp-5h]
  _BYTE *v46; // [rsp+B0h] [rbp-1h]
  int v47; // [rsp+B8h] [rbp+7h]
  int v48; // [rsp+BCh] [rbp+Bh]

  v12 = -1LL;
  v13 = 1;
  v14 = *a11;
  if ( *a11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &unk_1800F9DE0;
    v16 = 1;
  }
  v47 = v16;
  v46 = v14;
  v48 = 0;
  v17 = *a10;
  if ( *a10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v17 = &unk_1800F9DE0;
    v19 = 1;
  }
  v44 = v19;
  v43 = v17;
  v45 = 0;
  v20 = *a9;
  if ( *a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v20 = &unk_1800F9DE0;
    v22 = 1;
  }
  v41 = v22;
  v40 = v20;
  v42 = 0;
  v23 = *a8;
  if ( *a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v23 = &unk_1800F9DE0;
    v25 = 1;
  }
  v38 = v25;
  v37 = v23;
  v39 = 0;
  v36 = 16LL;
  v26 = *a7;
  v33 = a6;
  v35 = v26;
  v34 = 4LL;
  v27 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v27[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v27 = &unk_1800F9DE0;
  }
  v30 = v27;
  v31 = v13;
  v32 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 9u, &v29);
}
