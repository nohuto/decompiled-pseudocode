/*
 * XREFs of sub_140057278 @ 0x140057278
 * Callers:
 *     sub_1400671AC @ 0x1400671AC (sub_1400671AC.c)
 *     sub_1400C3810 @ 0x1400C3810 (sub_1400C3810.c)
 *     sub_1400C4B80 @ 0x1400C4B80 (sub_1400C4B80.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140057278(
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
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20)
{
  const char *v20; // rbx
  const char *v21; // r8
  const wchar_t *v22; // r10
  const wchar_t *v24; // rdx
  const char *v25; // r9
  int v26; // r11d
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  int v31; // ecx
  bool v32; // zf
  __int64 v33; // rcx
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
  const wchar_t *v49; // [rsp+80h] [rbp-80h]
  int v50; // [rsp+88h] [rbp-78h]
  int v51; // [rsp+8Ch] [rbp-74h]
  char *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  char *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  const char *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  const char *v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  char *v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
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
  int v78; // [rsp+1A8h] [rbp+A8h] BYREF

  v78 = a4;
  v20 = a12;
  v21 = a11;
  v22 = a8;
  v24 = a6;
  v25 = a7;
  v39 = &v78;
  v26 = 10;
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
    v24 = L"NULL";
  v43 = v24;
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
  if ( !a7 )
    v25 = "NULL";
  v46 = v25;
  v32 = a8 == 0LL;
  if ( a8 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a8[v33] );
    v26 = 2 * v33 + 2;
    v32 = a8 == 0LL;
  }
  v50 = v26;
  if ( v32 )
    v22 = L"NULL";
  v52 = &a9;
  v49 = v22;
  v54 = &a10;
  v51 = 0;
  v53 = 2LL;
  v55 = 2LL;
  if ( a11 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a11[v34] );
    v35 = (unsigned int)(v34 + 1);
  }
  else
  {
    v35 = 5LL;
  }
  v57 = v35;
  v58 = 0;
  if ( !a11 )
    v21 = "NULL";
  v56 = v21;
  if ( a12 )
  {
    do
      ++v27;
    while ( a12[v27] );
    v36 = v27 + 1;
  }
  else
  {
    v36 = 5;
  }
  v60 = v36;
  v61 = 0;
  v62 = &a13;
  if ( !a12 )
    v20 = "NULL";
  v59 = v20;
  v64 = &a14;
  v63 = 4LL;
  v66 = &a15;
  v65 = 4LL;
  v68 = &a16;
  v67 = 4LL;
  v70 = &a17;
  v72 = &a18;
  v74 = &a19;
  v76 = &a20;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 1LL;
  v75 = 1LL;
  v77 = 4LL;
  return sub_1400031E4(v35, a2, 0LL, 0x12u, &v38);
}
