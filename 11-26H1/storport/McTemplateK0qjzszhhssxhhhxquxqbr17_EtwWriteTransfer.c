/*
 * XREFs of McTemplateK0qjzszhhssxhhhxquxqbr17_EtwWriteTransfer @ 0x14008E2E4
 * Callers:
 *     StorLogNVMeErrorInfo @ 0x140097970 (StorLogNVMeErrorInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssxhhhxquxqbr17_EtwWriteTransfer(
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
        int a21,
        __int64 a22)
{
  const wchar_t *v22; // rcx
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
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+40h] [rbp-C0h] BYREF
  int *v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  const wchar_t *v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+7Ch] [rbp-84h]
  const char *v49; // [rsp+80h] [rbp-80h]
  int v50; // [rsp+88h] [rbp-78h]
  int v51; // [rsp+8Ch] [rbp-74h]
  const wchar_t *v52; // [rsp+90h] [rbp-70h]
  int v53; // [rsp+98h] [rbp-68h]
  int v54; // [rsp+9Ch] [rbp-64h]
  char *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  char *v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  const char *v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  const char *v62; // [rsp+D0h] [rbp-30h]
  int v63; // [rsp+D8h] [rbp-28h]
  int v64; // [rsp+DCh] [rbp-24h]
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
  int *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  __int64 v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]
  int v85; // [rsp+1B8h] [rbp+B8h] BYREF

  v85 = a4;
  v22 = a6;
  v42 = &v85;
  v44 = a5;
  v23 = -1LL;
  v40 = 4096;
  v43 = 4LL;
  v24 = 10;
  v45 = 16LL;
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
  v47 = v26;
  v48 = 0;
  if ( !a6 )
    v22 = L"NULL";
  v27 = 5;
  v46 = v22;
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
  v50 = v30;
  v51 = 0;
  if ( !a7 )
    v28 = "NULL";
  v49 = v28;
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
  v53 = v24;
  v52 = v31;
  v55 = &a9;
  v57 = &a10;
  v34 = a11;
  v54 = 0;
  v56 = 2LL;
  v58 = 2LL;
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
  v60 = v36;
  v61 = 0;
  if ( !a11 )
    v34 = "NULL";
  v59 = v34;
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
  v63 = v27;
  v62 = v37;
  v65 = &a13;
  v64 = 0;
  v67 = &a14;
  v66 = 8LL;
  v69 = &a15;
  v68 = 2LL;
  v71 = &a16;
  v73 = &a17;
  v75 = &a18;
  v77 = &a19;
  v79 = &a20;
  v81 = &v40;
  v83 = a22;
  v70 = 2LL;
  v72 = 2LL;
  v74 = 8LL;
  v76 = 4LL;
  v78 = 1LL;
  v80 = 8LL;
  v82 = 4LL;
  v84 = 4096LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v37, &EventNvmeErrorInfoLog, 0LL, 0x14u, &v41);
}
