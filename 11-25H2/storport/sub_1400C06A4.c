/*
 * XREFs of sub_1400C06A4 @ 0x1400C06A4
 * Callers:
 *     sub_1400C2F28 @ 0x1400C2F28 (sub_1400C2F28.c)
 *     sub_1400C4254 @ 0x1400C4254 (sub_1400C4254.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C06A4(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        __int64 a15,
        char a16,
        char a17,
        char a18)
{
  const char *v18; // rbx
  const char *v19; // r9
  const wchar_t *v20; // r10
  const wchar_t *v22; // rdx
  __int64 v23; // rcx
  const char *v24; // r8
  int v25; // r11d
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+30h] [rbp-D0h] BYREF
  int *v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h]
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  const wchar_t *v41; // [rsp+60h] [rbp-A0h]
  int v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+6Ch] [rbp-94h]
  const char *v44; // [rsp+70h] [rbp-90h]
  int v45; // [rsp+78h] [rbp-88h]
  int v46; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+88h] [rbp-78h]
  int v49; // [rsp+8Ch] [rbp-74h]
  char *v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  char *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  const char *v54; // [rsp+B0h] [rbp-50h]
  int v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+BCh] [rbp-44h]
  const char *v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+CCh] [rbp-34h]
  char *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  int *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  __int64 v64; // [rsp+F0h] [rbp-10h]
  int v65; // [rsp+F8h] [rbp-8h]
  int v66; // [rsp+FCh] [rbp-4h]
  char *v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  char *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  char *v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  int v73; // [rsp+188h] [rbp+88h] BYREF

  v73 = a4;
  v18 = a12;
  v19 = a11;
  v20 = a8;
  v22 = a6;
  v23 = -1LL;
  v24 = a7;
  v37 = &v73;
  v25 = 10;
  v39 = a5;
  v38 = 4LL;
  v40 = 16LL;
  if ( a6 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a6[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v42 = v27;
  v43 = 0;
  if ( !a6 )
    v22 = L"NULL";
  v41 = v22;
  if ( a7 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a7[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v45 = v29;
  v46 = 0;
  if ( !a7 )
    v24 = "NULL";
  v44 = v24;
  v30 = a8 == 0LL;
  if ( a8 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a8[v31] );
    v25 = 2 * v31 + 2;
    v30 = a8 == 0LL;
  }
  v48 = v25;
  if ( v30 )
    v20 = L"NULL";
  v50 = &a9;
  v47 = v20;
  v52 = &a10;
  v49 = 0;
  v51 = 2LL;
  v53 = 2LL;
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
  v55 = v33;
  v56 = 0;
  if ( !a11 )
    v19 = "NULL";
  v54 = v19;
  if ( a12 )
  {
    do
      ++v23;
    while ( a12[v23] );
    v34 = (unsigned int)(v23 + 1);
  }
  else
  {
    v34 = 5LL;
  }
  v58 = v34;
  v60 = &a13;
  v59 = 0;
  v62 = &a14;
  if ( !a12 )
    v18 = "NULL";
  v64 = a15;
  v65 = a14;
  v67 = &a16;
  v69 = &a17;
  v71 = &a18;
  v57 = v18;
  v61 = 4LL;
  v63 = 4LL;
  v66 = 0;
  v68 = 1LL;
  v70 = 1LL;
  v72 = 4LL;
  return sub_1400031E4(v34, a2, 0LL, 0x10u, &v36);
}
