/*
 * XREFs of sub_1400F7AB0 @ 0x1400F7AB0
 * Callers:
 *     sub_1400F9A20 @ 0x1400F9A20 (sub_1400F9A20.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400F7AB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22)
{
  const wchar_t *v22; // rcx
  const char *v23; // r11
  const char *v24; // r8
  const char *v25; // r9
  const char *v26; // r10
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // edx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+30h] [rbp-D0h] BYREF
  int *v39; // [rsp+40h] [rbp-C0h]
  __int64 v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  const wchar_t *v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+6Ch] [rbp-94h]
  const char *v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+7Ch] [rbp-84h]
  char *v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  char *v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  char *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  const char *v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+BCh] [rbp-44h]
  const char *v58; // [rsp+C0h] [rbp-40h]
  int v59; // [rsp+C8h] [rbp-38h]
  int v60; // [rsp+CCh] [rbp-34h]
  const char *v61; // [rsp+D0h] [rbp-30h]
  int v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+DCh] [rbp-24h]
  char *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  char *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  char *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  char *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  char *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  char *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  char *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  char *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  char *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  int v82; // [rsp+1B8h] [rbp+B8h] BYREF

  v82 = a4;
  v22 = a6;
  v23 = a13;
  v24 = a12;
  v25 = a11;
  v26 = a7;
  v39 = &v82;
  v41 = a5;
  v27 = -1LL;
  v40 = 4LL;
  v42 = 16LL;
  if ( a6 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a6[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v29 = 10;
  }
  v44 = v29;
  v45 = 0;
  if ( !a6 )
    v22 = L"NULL";
  v43 = v22;
  if ( a7 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a7[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v47 = v31;
  v48 = 0;
  v49 = &a8;
  v50 = 2LL;
  if ( !a7 )
    v26 = "NULL";
  v51 = &a9;
  v46 = v26;
  v53 = &a10;
  v52 = 4LL;
  v54 = 1LL;
  if ( a11 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a11[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v56 = v33;
  v57 = 0;
  if ( !a11 )
    v25 = "NULL";
  v55 = v25;
  if ( a12 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a12[v34] );
    v35 = (unsigned int)(v34 + 1);
  }
  else
  {
    v35 = 5LL;
  }
  v59 = v35;
  v60 = 0;
  if ( !a12 )
    v24 = "NULL";
  v58 = v24;
  if ( a13 )
  {
    do
      ++v27;
    while ( a13[v27] );
    v36 = v27 + 1;
  }
  else
  {
    v36 = 5;
  }
  v62 = v36;
  v65 = 1LL;
  v64 = &a14;
  if ( !a13 )
    v23 = "NULL";
  v67 = 1LL;
  v66 = &a15;
  v69 = 1LL;
  v68 = &a16;
  v61 = v23;
  v70 = &a17;
  v63 = 0;
  v72 = &a18;
  v74 = &a19;
  v76 = &a20;
  v78 = &a21;
  v80 = &a22;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  return sub_1400031E4(v35, &stru_140149DD0, 0LL, 0x14u, &v38);
}
