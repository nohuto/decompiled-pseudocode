/*
 * XREFs of sub_140090FB4 @ 0x140090FB4
 * Callers:
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140090FB4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15)
{
  const char *v15; // r11
  __int64 v16; // rcx
  const char *v17; // rdx
  const char *v18; // r8
  const char *v19; // r10
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+38h] [rbp-D0h] BYREF
  const wchar_t *v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  char *v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h]
  char *v37; // [rsp+78h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-88h]
  char *v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  char *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  const char *v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B4h] [rbp-54h]
  const char *v46; // [rsp+B8h] [rbp-50h]
  int v47; // [rsp+C0h] [rbp-48h]
  int v48; // [rsp+C4h] [rbp-44h]
  const char *v49; // [rsp+C8h] [rbp-40h]
  int v50; // [rsp+D0h] [rbp-38h]
  int v51; // [rsp+D4h] [rbp-34h]
  const char *v52; // [rsp+D8h] [rbp-30h]
  int v53; // [rsp+E0h] [rbp-28h]
  int v54; // [rsp+E4h] [rbp-24h]
  char *v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  char *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]

  v15 = a13;
  v16 = -1LL;
  v17 = a12;
  v18 = a11;
  v19 = a10;
  if ( a4 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a4[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v32 = v21;
  v34 = 4LL;
  v33 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v35 = a6;
  v37 = &a7;
  v39 = &a8;
  v31 = a4;
  v41 = &a9;
  v36 = 16LL;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  if ( a10 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a10[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v44 = v23;
  v45 = 0;
  if ( !a10 )
    v19 = "NULL";
  v43 = v19;
  if ( a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a11[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v47 = v25;
  v48 = 0;
  if ( !a11 )
    v18 = "NULL";
  v46 = v18;
  if ( a12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a12[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v50 = v27;
  v51 = 0;
  if ( !a12 )
    v17 = "NULL";
  v49 = v17;
  if ( a13 )
  {
    do
      ++v16;
    while ( a13[v16] );
    v28 = (unsigned int)(v16 + 1);
  }
  else
  {
    v28 = 5LL;
  }
  v53 = v28;
  v55 = &a14;
  v54 = 0;
  v57 = &a15;
  v56 = 8LL;
  if ( !a13 )
    v15 = "NULL";
  v52 = v15;
  v58 = 4LL;
  return sub_1400031E4(v28, &stru_14014A4E0, 0LL, 0xDu, &v30);
}
