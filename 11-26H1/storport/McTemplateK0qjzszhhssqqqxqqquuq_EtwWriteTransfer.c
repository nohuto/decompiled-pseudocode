/*
 * XREFs of McTemplateK0qjzszhhssqqqxqqquuq_EtwWriteTransfer @ 0x14005E1C4
 * Callers:
 *     StorLogMFNDNameSpaceWrite @ 0x14006EC68 (StorLogMFNDNameSpaceWrite.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqqqxqqquuq_EtwWriteTransfer(
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
        char a20,
        char a21,
        char a22)
{
  const wchar_t *v22; // rcx
  __int64 v24; // rax
  int v25; // r9d
  __int64 v26; // rdx
  int v27; // edx
  int v28; // r8d
  const char *v29; // rcx
  __int64 v30; // rdx
  int v31; // edx
  const wchar_t *v32; // rcx
  bool v33; // zf
  __int64 v34; // rdx
  const char *v35; // rcx
  __int64 v36; // rdx
  int v37; // edx
  const char *v38; // rcx
  bool v39; // zf
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+30h] [rbp-D0h] BYREF
  int *v42; // [rsp+40h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  const wchar_t *v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+6Ch] [rbp-94h]
  const char *v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+78h] [rbp-88h]
  int v51; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v52; // [rsp+80h] [rbp-80h]
  int v53; // [rsp+88h] [rbp-78h]
  int v54; // [rsp+8Ch] [rbp-74h]
  char *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  char *v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  const char *v59; // [rsp+B0h] [rbp-50h]
  int v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+BCh] [rbp-44h]
  const char *v62; // [rsp+C0h] [rbp-40h]
  int v63; // [rsp+C8h] [rbp-38h]
  int v64; // [rsp+CCh] [rbp-34h]
  char *v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  char *v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  char *v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  char *v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  char *v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]
  char *v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  char *v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  char *v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  char *v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  char *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  int v85; // [rsp+1B8h] [rbp+B8h] BYREF

  v85 = a4;
  v22 = a6;
  v42 = &v85;
  v44 = a5;
  v24 = -1LL;
  v43 = 4LL;
  v45 = 16LL;
  v25 = 10;
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
  v47 = v27;
  v48 = 0;
  if ( !a6 )
    v22 = L"NULL";
  v28 = 5;
  v46 = v22;
  v29 = a7;
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
  v50 = v31;
  v51 = 0;
  if ( !a7 )
    v29 = "NULL";
  v49 = v29;
  v32 = a8;
  v33 = a8 == 0LL;
  if ( a8 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a8[v34] );
    v25 = 2 * v34 + 2;
    v33 = a8 == 0LL;
  }
  if ( v33 )
    v32 = L"NULL";
  v53 = v25;
  v52 = v32;
  v55 = &a9;
  v57 = &a10;
  v35 = a11;
  v54 = 0;
  v56 = 2LL;
  v58 = 2LL;
  if ( a11 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a11[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v60 = v37;
  v61 = 0;
  if ( !a11 )
    v35 = "NULL";
  v59 = v35;
  v38 = a12;
  v39 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v24;
    while ( a12[v24] );
    v28 = v24 + 1;
    v39 = a12 == 0LL;
  }
  if ( v39 )
    v38 = "NULL";
  v63 = v28;
  v62 = v38;
  v65 = &a13;
  v64 = 0;
  v67 = &a14;
  v66 = 4LL;
  v69 = &a15;
  v68 = 4LL;
  v71 = &a16;
  v73 = &a17;
  v75 = &a18;
  v77 = &a19;
  v79 = &a20;
  v81 = &a21;
  v83 = &a22;
  v70 = 4LL;
  v72 = 8LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 1LL;
  v82 = 1LL;
  v84 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v38, a2, 0LL, 0x14u, &v41);
}
