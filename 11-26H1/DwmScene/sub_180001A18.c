/*
 * XREFs of sub_180001A18 @ 0x180001A18
 * Callers:
 *     sub_180024300 @ 0x180024300 (sub_180024300.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001A18(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        void **a9,
        void **a10)
{
  __int64 v11; // rdx
  int v12; // r8d
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  _BYTE *v20; // rcx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-49h]
  int v24; // [rsp+58h] [rbp-41h]
  int v25; // [rsp+5Ch] [rbp-3Dh]
  __int64 v26; // [rsp+60h] [rbp-39h]
  __int64 v27; // [rsp+68h] [rbp-31h]
  __int64 v28; // [rsp+70h] [rbp-29h]
  __int64 v29; // [rsp+78h] [rbp-21h]
  __int64 v30; // [rsp+80h] [rbp-19h]
  __int64 v31; // [rsp+88h] [rbp-11h]
  _BYTE *v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+98h] [rbp-1h]
  int v34; // [rsp+9Ch] [rbp+3h]
  _BYTE *v35; // [rsp+A0h] [rbp+7h]
  int v36; // [rsp+A8h] [rbp+Fh]
  int v37; // [rsp+ACh] [rbp+13h]

  v11 = -1LL;
  v12 = 1;
  v13 = *a10;
  if ( *a10 )
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
  v36 = v15;
  v35 = v13;
  v37 = 0;
  v16 = *a9;
  if ( *a9 )
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
  v33 = v18;
  v30 = a8;
  v32 = v16;
  v34 = 0;
  v31 = 4LL;
  v19 = *a7;
  v26 = a6;
  v28 = v19;
  v29 = 16LL;
  v27 = 4LL;
  v20 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v20[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v20 = &unk_1800F9DE0;
  }
  v23 = v20;
  v24 = v12;
  v25 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 8u, &v22);
}
