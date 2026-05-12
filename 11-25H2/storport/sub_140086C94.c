/*
 * XREFs of sub_140086C94 @ 0x140086C94
 * Callers:
 *     sub_14008FA40 @ 0x14008FA40 (sub_14008FA40.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140086C94(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        char a13,
        int a14,
        __int64 a15)
{
  const wchar_t *v15; // rdx
  const char *v16; // rbx
  const char *v17; // r8
  __int64 v18; // rcx
  const wchar_t *v19; // r10
  const char *v20; // r9
  int v21; // r11d
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  int v32; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+48h] [rbp-C0h] BYREF
  int *v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  const wchar_t *v38; // [rsp+78h] [rbp-90h]
  int v39; // [rsp+80h] [rbp-88h]
  int v40; // [rsp+84h] [rbp-84h]
  const char *v41; // [rsp+88h] [rbp-80h]
  int v42; // [rsp+90h] [rbp-78h]
  int v43; // [rsp+94h] [rbp-74h]
  const wchar_t *v44; // [rsp+98h] [rbp-70h]
  int v45; // [rsp+A0h] [rbp-68h]
  int v46; // [rsp+A4h] [rbp-64h]
  char *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  char *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  const char *v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  const char *v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+E0h] [rbp-28h]
  int v56; // [rsp+E4h] [rbp-24h]
  char *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  int *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  __int64 v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  int v63; // [rsp+160h] [rbp+58h] BYREF

  v63 = a4;
  v15 = a6;
  v16 = a12;
  v17 = a11;
  v18 = -1LL;
  v19 = a8;
  v20 = a7;
  v34 = &v63;
  v21 = 10;
  v36 = a5;
  v32 = 512;
  v35 = 4LL;
  v37 = 16LL;
  if ( a6 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a6[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v39 = v23;
  v40 = 0;
  if ( !a6 )
    v15 = L"NULL";
  v38 = v15;
  if ( a7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a7[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v42 = v25;
  v43 = 0;
  if ( !a7 )
    v20 = "NULL";
  v41 = v20;
  v26 = a8 == 0LL;
  if ( a8 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a8[v27] );
    v21 = 2 * v27 + 2;
    v26 = a8 == 0LL;
  }
  v45 = v21;
  if ( v26 )
    v19 = L"NULL";
  v47 = &a9;
  v44 = v19;
  v49 = &a10;
  v46 = 0;
  v48 = 2LL;
  v50 = 2LL;
  if ( a11 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a11[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v52 = v29;
  v53 = 0;
  if ( !a11 )
    v17 = "NULL";
  v51 = v17;
  if ( a12 )
  {
    do
      ++v18;
    while ( a12[v18] );
    v30 = (unsigned int)(v18 + 1);
  }
  else
  {
    v30 = 5LL;
  }
  v55 = v30;
  v57 = &a13;
  v56 = 0;
  v59 = &v32;
  if ( !a12 )
    v16 = "NULL";
  v61 = a15;
  v54 = v16;
  v58 = 8LL;
  v60 = 4LL;
  v62 = 512LL;
  return sub_1400031E4(v30, &stru_14014B248, 0LL, 0xDu, &v33);
}
