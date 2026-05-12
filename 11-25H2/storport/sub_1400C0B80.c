/*
 * XREFs of sub_1400C0B80 @ 0x1400C0B80
 * Callers:
 *     sub_1400C39F8 @ 0x1400C39F8 (sub_1400C39F8.c)
 *     sub_1400C3BAC @ 0x1400C3BAC (sub_1400C3BAC.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C0B80(
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
        char a17)
{
  const char *v17; // rbx
  const char *v18; // r8
  const wchar_t *v19; // r10
  const wchar_t *v21; // rdx
  __int64 v22; // rcx
  const char *v23; // r9
  int v24; // r11d
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+30h] [rbp-D0h] BYREF
  int *v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  const wchar_t *v40; // [rsp+60h] [rbp-A0h]
  int v41; // [rsp+68h] [rbp-98h]
  int v42; // [rsp+6Ch] [rbp-94h]
  const char *v43; // [rsp+70h] [rbp-90h]
  int v44; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v46; // [rsp+80h] [rbp-80h]
  int v47; // [rsp+88h] [rbp-78h]
  int v48; // [rsp+8Ch] [rbp-74h]
  char *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  char *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  const char *v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  const char *v56; // [rsp+C0h] [rbp-40h]
  int v57; // [rsp+C8h] [rbp-38h]
  int v58; // [rsp+CCh] [rbp-34h]
  char *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  char *v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  char *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  char *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  char *v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  int v69; // [rsp+178h] [rbp+78h] BYREF

  v69 = a4;
  v17 = a12;
  v18 = a11;
  v19 = a8;
  v21 = a6;
  v22 = -1LL;
  v23 = a7;
  v36 = &v69;
  v24 = 10;
  v38 = a5;
  v37 = 4LL;
  v39 = 16LL;
  if ( a6 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a6[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v41 = v26;
  v42 = 0;
  if ( !a6 )
    v21 = L"NULL";
  v40 = v21;
  if ( a7 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a7[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v44 = v28;
  v45 = 0;
  if ( !a7 )
    v23 = "NULL";
  v43 = v23;
  v29 = a8 == 0LL;
  if ( a8 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a8[v30] );
    v24 = 2 * v30 + 2;
    v29 = a8 == 0LL;
  }
  v47 = v24;
  if ( v29 )
    v19 = L"NULL";
  v49 = &a9;
  v46 = v19;
  v51 = &a10;
  v48 = 0;
  v50 = 2LL;
  v52 = 2LL;
  if ( a11 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a11[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v54 = v32;
  v55 = 0;
  if ( !a11 )
    v18 = "NULL";
  v53 = v18;
  if ( a12 )
  {
    do
      ++v22;
    while ( a12[v22] );
    v33 = (unsigned int)(v22 + 1);
  }
  else
  {
    v33 = 5LL;
  }
  v57 = v33;
  v59 = &a13;
  v58 = 0;
  v61 = &a14;
  if ( !a12 )
    v17 = "NULL";
  v56 = v17;
  v63 = &a15;
  v60 = 4LL;
  v65 = &a16;
  v62 = 4LL;
  v67 = &a17;
  v64 = 1LL;
  v66 = 1LL;
  v68 = 4LL;
  return sub_1400031E4(v33, a2, 0LL, 0xFu, &v35);
}
