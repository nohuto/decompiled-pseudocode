/*
 * XREFs of sub_1400766D8 @ 0x1400766D8
 * Callers:
 *     sub_140078A18 @ 0x140078A18 (sub_140078A18.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400766D8(
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
  const wchar_t *v22; // rdx
  const char *v23; // rbx
  const char *v24; // r8
  const wchar_t *v25; // r10
  const char *v26; // r9
  int v27; // r11d
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  int v32; // ecx
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+30h] [rbp-D0h] BYREF
  int *v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  const wchar_t *v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+6Ch] [rbp-94h]
  const char *v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+78h] [rbp-88h]
  int v49; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+88h] [rbp-78h]
  int v52; // [rsp+8Ch] [rbp-74h]
  char *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  char *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  const char *v57; // [rsp+B0h] [rbp-50h]
  int v58; // [rsp+B8h] [rbp-48h]
  int v59; // [rsp+BCh] [rbp-44h]
  const char *v60; // [rsp+C0h] [rbp-40h]
  int v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+CCh] [rbp-34h]
  char *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  char *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  char *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  char *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  char *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  char *v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  char *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  char *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  char *v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  char *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  int v83; // [rsp+1B8h] [rbp+B8h] BYREF

  v83 = a4;
  v22 = a6;
  v23 = a12;
  v24 = a11;
  v25 = a8;
  v26 = a7;
  v40 = &v83;
  v27 = 10;
  v42 = a5;
  v28 = -1LL;
  v41 = 4LL;
  v43 = 16LL;
  if ( a6 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a6[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = 10;
  }
  v45 = v30;
  v46 = 0;
  if ( !a6 )
    v22 = L"NULL";
  v44 = v22;
  if ( a7 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a7[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v48 = v32;
  v49 = 0;
  if ( !a7 )
    v26 = "NULL";
  v47 = v26;
  v33 = a8 == 0LL;
  if ( a8 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a8[v34] );
    v27 = 2 * v34 + 2;
    v33 = a8 == 0LL;
  }
  v51 = v27;
  if ( v33 )
    v25 = L"NULL";
  v53 = &a9;
  v50 = v25;
  v55 = &a10;
  v52 = 0;
  v54 = 2LL;
  v56 = 2LL;
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
    v36 = (unsigned int)(v35 + 1);
  }
  else
  {
    v36 = 5LL;
  }
  v58 = v36;
  v59 = 0;
  if ( !a11 )
    v24 = "NULL";
  v57 = v24;
  if ( a12 )
  {
    do
      ++v28;
    while ( a12[v28] );
    v37 = v28 + 1;
  }
  else
  {
    v37 = 5;
  }
  v61 = v37;
  v62 = 0;
  v63 = &a13;
  v64 = 4LL;
  v65 = &a14;
  if ( !a12 )
    v23 = "NULL";
  v60 = v23;
  v67 = &a15;
  v66 = 4LL;
  v69 = &a16;
  v68 = 4LL;
  v71 = &a17;
  v73 = &a18;
  v75 = &a19;
  v77 = &a20;
  v79 = &a21;
  v81 = &a22;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  return sub_1400031E4(v36, &stru_14014AA50, 0LL, 0x14u, &v39);
}
