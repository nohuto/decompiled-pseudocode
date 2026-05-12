/*
 * XREFs of sub_140001D70 @ 0x140001D70
 * Callers:
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140001D70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        const char *a15,
        int a16,
        char a17)
{
  __int64 v17; // rcx
  const char *v18; // r11
  const char *v19; // r10
  const char *v20; // rdx
  const char *v21; // r8
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v33[16]; // [rsp+48h] [rbp-C0h] BYREF
  const wchar_t *v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  char *v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  __int64 v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-88h]
  char *v40; // [rsp+88h] [rbp-80h]
  __int64 v41; // [rsp+90h] [rbp-78h]
  char *v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  char *v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B0h] [rbp-58h]
  __int64 v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  const char *v48; // [rsp+C8h] [rbp-40h]
  int v49; // [rsp+D0h] [rbp-38h]
  int v50; // [rsp+D4h] [rbp-34h]
  const char *v51; // [rsp+D8h] [rbp-30h]
  int v52; // [rsp+E0h] [rbp-28h]
  int v53; // [rsp+E4h] [rbp-24h]
  const char *v54; // [rsp+E8h] [rbp-20h]
  int v55; // [rsp+F0h] [rbp-18h]
  int v56; // [rsp+F4h] [rbp-14h]
  char *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  const char *v59; // [rsp+108h] [rbp+0h]
  int v60; // [rsp+110h] [rbp+8h]
  int v61; // [rsp+114h] [rbp+Ch]
  __int64 *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  char *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]

  v17 = -1LL;
  v18 = a15;
  v19 = a13;
  v20 = a12;
  v21 = a11;
  v32 = qword_140168430;
  if ( a4 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a4[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v35 = v23;
  v37 = 4LL;
  v36 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v38 = a6;
  v40 = &a7;
  v42 = &a8;
  v44 = &a9;
  v34 = a4;
  v46 = a10;
  v39 = 16LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 16LL;
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
  v49 = v25;
  v50 = 0;
  if ( !a11 )
    v21 = "NULL";
  v48 = v21;
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
  v52 = v27;
  v53 = 0;
  if ( !a12 )
    v20 = "NULL";
  v51 = v20;
  if ( a13 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a13[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v55 = v29;
  v56 = 0;
  if ( !a13 )
    v19 = "NULL";
  v57 = &a14;
  v54 = v19;
  v58 = 4LL;
  if ( a15 )
  {
    do
      ++v17;
    while ( a15[v17] );
    v30 = (unsigned int)(v17 + 1);
  }
  else
  {
    v30 = 5LL;
  }
  v60 = v30;
  v62 = &v32;
  v61 = 0;
  v64 = &a17;
  v63 = 8LL;
  if ( !a15 )
    v18 = "NULL";
  v59 = v18;
  v65 = 8LL;
  return sub_1400031E4(v30, &unk_1401488E0, 0LL, 15LL, v33);
}
