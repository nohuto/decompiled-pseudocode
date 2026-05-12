/*
 * XREFs of sub_14005814C @ 0x14005814C
 * Callers:
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14005814C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        __int64 a11,
        const char *a12,
        const char *a13,
        const char *a14,
        char a15,
        char a16,
        char a17,
        __int64 a18,
        __int64 a19,
        char a20,
        char a21)
{
  const wchar_t *v21; // rdx
  const char *v22; // rbx
  const char *v23; // r8
  __int64 v24; // rcx
  const char *v25; // r9
  const wchar_t *v26; // r10
  int v27; // r11d
  __int64 v28; // rax
  int v29; // eax
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  char v38; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+40h] [rbp-C0h] BYREF
  int *v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  const wchar_t *v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+78h] [rbp-88h]
  int v47; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v48; // [rsp+80h] [rbp-80h]
  int v49; // [rsp+88h] [rbp-78h]
  int v50; // [rsp+8Ch] [rbp-74h]
  char *v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  char *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  char *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  const char *v59; // [rsp+D0h] [rbp-30h]
  int v60; // [rsp+D8h] [rbp-28h]
  int v61; // [rsp+DCh] [rbp-24h]
  const char *v62; // [rsp+E0h] [rbp-20h]
  int v63; // [rsp+E8h] [rbp-18h]
  int v64; // [rsp+ECh] [rbp-14h]
  const char *v65; // [rsp+F0h] [rbp-10h]
  int v66; // [rsp+F8h] [rbp-8h]
  int v67; // [rsp+FCh] [rbp-4h]
  char *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  char *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  char *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  char *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  int *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  char *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  char *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  int v82; // [rsp+1B8h] [rbp+B8h] BYREF

  v82 = a4;
  v21 = a6;
  v22 = a14;
  v23 = a13;
  v24 = -1LL;
  v25 = a12;
  v26 = a7;
  v41 = &v82;
  v27 = 10;
  v43 = a5;
  v39 = 0;
  v38 = 0;
  v42 = 4LL;
  v44 = 16LL;
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
  v46 = v29;
  v47 = 0;
  if ( !a6 )
    v21 = L"NULL";
  v45 = v21;
  v30 = a7 == 0LL;
  if ( a7 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a7[v31] );
    v27 = 2 * v31 + 2;
    v30 = a7 == 0LL;
  }
  v49 = v27;
  if ( v30 )
    v26 = L"NULL";
  v50 = 0;
  v48 = v26;
  v51 = &a8;
  v53 = &a9;
  v55 = &a10;
  v57 = a11;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 1LL;
  v58 = 16LL;
  if ( a12 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a12[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v60 = v33;
  v61 = 0;
  if ( !a12 )
    v25 = "NULL";
  v59 = v25;
  if ( a13 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a13[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v63 = v35;
  v64 = 0;
  if ( !a13 )
    v23 = "NULL";
  v62 = v23;
  if ( a14 )
  {
    do
      ++v24;
    while ( a14[v24] );
    v36 = (unsigned int)(v24 + 1);
  }
  else
  {
    v36 = 5LL;
  }
  v75 = 1LL;
  v68 = &a15;
  v66 = v36;
  v70 = &a16;
  v67 = 0;
  v72 = &a17;
  if ( !a14 )
    v22 = "NULL";
  v65 = v22;
  v74 = &v38;
  v69 = 4LL;
  v76 = &v39;
  v71 = 8LL;
  v78 = &a20;
  v80 = &a21;
  v73 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  return sub_1400031E4(v36, &stru_14014A390, 0LL, 0x13u, &v40);
}
