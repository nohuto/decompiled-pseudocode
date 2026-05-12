/*
 * XREFs of sub_14005853C @ 0x14005853C
 * Callers:
 *     sub_14003B24C @ 0x14003B24C (sub_14003B24C.c)
 *     sub_14005C38C @ 0x14005C38C (sub_14005C38C.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14005853C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const wchar_t *a14,
        char a15,
        char a16)
{
  const wchar_t *v16; // rdx
  const wchar_t *v17; // r11
  const char *v18; // r8
  __int64 v19; // rcx
  const char *v20; // r10
  const char *v21; // r9
  int v22; // ebx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  bool v31; // zf
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+38h] [rbp-D0h] BYREF
  int *v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h]
  char *v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  char *v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h]
  char *v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+80h] [rbp-88h]
  __int64 v42; // [rsp+88h] [rbp-80h]
  __int64 v43; // [rsp+90h] [rbp-78h]
  __int64 v44; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  const wchar_t *v46; // [rsp+A8h] [rbp-60h]
  int v47; // [rsp+B0h] [rbp-58h]
  int v48; // [rsp+B4h] [rbp-54h]
  const char *v49; // [rsp+B8h] [rbp-50h]
  int v50; // [rsp+C0h] [rbp-48h]
  int v51; // [rsp+C4h] [rbp-44h]
  const char *v52; // [rsp+C8h] [rbp-40h]
  int v53; // [rsp+D0h] [rbp-38h]
  int v54; // [rsp+D4h] [rbp-34h]
  const char *v55; // [rsp+D8h] [rbp-30h]
  int v56; // [rsp+E0h] [rbp-28h]
  int v57; // [rsp+E4h] [rbp-24h]
  const wchar_t *v58; // [rsp+E8h] [rbp-20h]
  int v59; // [rsp+F0h] [rbp-18h]
  int v60; // [rsp+F4h] [rbp-14h]
  char *v61; // [rsp+F8h] [rbp-10h]
  __int64 v62; // [rsp+100h] [rbp-8h]
  char *v63; // [rsp+108h] [rbp+0h]
  __int64 v64; // [rsp+110h] [rbp+8h]
  int v65; // [rsp+160h] [rbp+58h] BYREF

  v65 = a4;
  v16 = a10;
  v17 = a14;
  v18 = a13;
  v19 = -1LL;
  v20 = a12;
  v21 = a11;
  v34 = &v65;
  v36 = &a5;
  v38 = &a6;
  v40 = &a7;
  v22 = 10;
  v42 = a8;
  v44 = a9;
  v35 = 4LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 16LL;
  v45 = 16LL;
  if ( a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a10[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v47 = v24;
  v48 = 0;
  if ( !a10 )
    v16 = L"NULL";
  v46 = v16;
  if ( a11 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a11[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v50 = v26;
  v51 = 0;
  if ( !a11 )
    v21 = "NULL";
  v49 = v21;
  if ( a12 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a12[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v53 = v28;
  v54 = 0;
  if ( !a12 )
    v20 = "NULL";
  v52 = v20;
  if ( a13 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a13[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v56 = v30;
  v57 = 0;
  if ( !a13 )
    v18 = "NULL";
  v55 = v18;
  v31 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v19;
    while ( a14[v19] );
    v22 = 2 * v19 + 2;
    v31 = a14 == 0LL;
  }
  if ( v31 )
    v17 = L"NULL";
  v59 = v22;
  v58 = v17;
  v61 = &a15;
  v60 = 0;
  v63 = &a16;
  v62 = 8LL;
  v64 = 4LL;
  return sub_1400031E4(v19, &stru_14014A0A8, 0LL, 0xEu, &v33);
}
