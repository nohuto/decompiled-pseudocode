/*
 * XREFs of sub_180002500 @ 0x180002500
 * Callers:
 *     sub_180022D30 @ 0x180022D30 (sub_180022D30.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180002500(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9,
        __int64 a10,
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
  __int64 v20; // rcx
  _BYTE *v21; // rcx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-81h] BYREF
  _BYTE *v24; // [rsp+50h] [rbp-61h]
  int v25; // [rsp+58h] [rbp-59h]
  int v26; // [rsp+5Ch] [rbp-55h]
  __int64 v27; // [rsp+60h] [rbp-51h]
  __int64 v28; // [rsp+68h] [rbp-49h]
  __int64 v29; // [rsp+70h] [rbp-41h]
  __int64 v30; // [rsp+78h] [rbp-39h]
  __int64 v31; // [rsp+80h] [rbp-31h]
  __int64 v32; // [rsp+88h] [rbp-29h]
  _BYTE *v33; // [rsp+90h] [rbp-21h]
  int v34; // [rsp+98h] [rbp-19h]
  int v35; // [rsp+9Ch] [rbp-15h]
  __int64 v36; // [rsp+A0h] [rbp-11h]
  __int64 v37; // [rsp+A8h] [rbp-9h]
  _BYTE *v38; // [rsp+B0h] [rbp-1h]
  int v39; // [rsp+B8h] [rbp+7h]
  int v40; // [rsp+BCh] [rbp+Bh]

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
  v39 = v16;
  v36 = a10;
  v38 = v14;
  v40 = 0;
  v37 = 4LL;
  v17 = *a9;
  if ( *a9 )
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
  v34 = v19;
  v33 = v17;
  v35 = 0;
  v32 = 16LL;
  v31 = *a8;
  v30 = 16LL;
  v28 = 4LL;
  v20 = *a7;
  v27 = a6;
  v29 = v20;
  v21 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v21[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v21 = &unk_1800F9DE0;
  }
  v24 = v21;
  v25 = v13;
  v26 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 9u, &v23);
}
