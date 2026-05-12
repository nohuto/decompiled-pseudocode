/*
 * XREFs of McTemplateK0qjzszhhssqqqxqquuq_EtwWriteTransfer @ 0x14005E45C
 * Callers:
 *     StorLogMFNDNameSpaceRead @ 0x14006E9A4 (StorLogMFNDNameSpaceRead.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqqqxqquuq_EtwWriteTransfer(
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
        char a21)
{
  const wchar_t *v21; // rcx
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // rdx
  int v26; // edx
  int v27; // r8d
  const char *v28; // rcx
  __int64 v29; // rdx
  int v30; // edx
  const wchar_t *v31; // rcx
  bool v32; // zf
  __int64 v33; // rdx
  const char *v34; // rcx
  __int64 v35; // rdx
  int v36; // edx
  const char *v37; // rcx
  bool v38; // zf
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+30h] [rbp-D0h] BYREF
  int *v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h]
  const wchar_t *v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+6Ch] [rbp-94h]
  const char *v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v51; // [rsp+80h] [rbp-80h]
  int v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+8Ch] [rbp-74h]
  char *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  char *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  const char *v58; // [rsp+B0h] [rbp-50h]
  int v59; // [rsp+B8h] [rbp-48h]
  int v60; // [rsp+BCh] [rbp-44h]
  const char *v61; // [rsp+C0h] [rbp-40h]
  int v62; // [rsp+C8h] [rbp-38h]
  int v63; // [rsp+CCh] [rbp-34h]
  char *v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  char *v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  char *v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  char *v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  char *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  char *v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  char *v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  char *v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  char *v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+1A8h] [rbp+A8h] BYREF

  v82 = a4;
  v21 = a6;
  v41 = &v82;
  v43 = a5;
  v23 = -1LL;
  v42 = 4LL;
  v44 = 16LL;
  v24 = 10;
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
  v46 = v26;
  v47 = 0;
  if ( !a6 )
    v21 = L"NULL";
  v27 = 5;
  v45 = v21;
  v28 = a7;
  if ( a7 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a7[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v49 = v30;
  v50 = 0;
  if ( !a7 )
    v28 = "NULL";
  v48 = v28;
  v31 = a8;
  v32 = a8 == 0LL;
  if ( a8 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a8[v33] );
    v24 = 2 * v33 + 2;
    v32 = a8 == 0LL;
  }
  if ( v32 )
    v31 = L"NULL";
  v52 = v24;
  v51 = v31;
  v54 = &a9;
  v56 = &a10;
  v34 = a11;
  v53 = 0;
  v55 = 2LL;
  v57 = 2LL;
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v59 = v36;
  v60 = 0;
  if ( !a11 )
    v34 = "NULL";
  v58 = v34;
  v37 = a12;
  v38 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v23;
    while ( a12[v23] );
    v27 = v23 + 1;
    v38 = a12 == 0LL;
  }
  if ( v38 )
    v37 = "NULL";
  v62 = v27;
  v61 = v37;
  v64 = &a13;
  v63 = 0;
  v66 = &a14;
  v65 = 4LL;
  v68 = &a15;
  v67 = 4LL;
  v70 = &a16;
  v72 = &a17;
  v74 = &a18;
  v76 = &a19;
  v78 = &a20;
  v80 = &a21;
  v69 = 4LL;
  v71 = 8LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 1LL;
  v79 = 1LL;
  v81 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v37, a2, 0LL, 0x13u, &v40);
}
