/*
 * XREFs of McTemplateK0qjzszhhsshqqqqqqqqquuq_EtwWriteTransfer @ 0x1400C87E8
 * Callers:
 *     StorLogMFNDSetChildPFQoS @ 0x1400CCD5C (StorLogMFNDSetChildPFQoS.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhsshqqqqqqqqquuq_EtwWriteTransfer(
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
        char a22,
        char a23,
        char a24,
        char a25)
{
  const wchar_t *v25; // rcx
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rdx
  unsigned int v29; // edx
  int v30; // r8d
  const char *v31; // rcx
  __int64 v32; // rdx
  int v33; // edx
  const wchar_t *v34; // rcx
  bool v35; // zf
  __int64 v36; // rdx
  const char *v37; // rcx
  __int64 v38; // rdx
  int v39; // edx
  const char *v40; // rcx
  bool v41; // zf
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+38h] [rbp-D0h] BYREF
  int *v44; // [rsp+48h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-B8h]
  __int64 v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  const wchar_t *v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h]
  const char *v50; // [rsp+78h] [rbp-90h]
  int v51; // [rsp+80h] [rbp-88h]
  int v52; // [rsp+84h] [rbp-84h]
  const wchar_t *v53; // [rsp+88h] [rbp-80h]
  int v54; // [rsp+90h] [rbp-78h]
  int v55; // [rsp+94h] [rbp-74h]
  char *v56; // [rsp+98h] [rbp-70h]
  __int64 v57; // [rsp+A0h] [rbp-68h]
  char *v58; // [rsp+A8h] [rbp-60h]
  __int64 v59; // [rsp+B0h] [rbp-58h]
  const char *v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C0h] [rbp-48h]
  int v62; // [rsp+C4h] [rbp-44h]
  const char *v63; // [rsp+C8h] [rbp-40h]
  int v64; // [rsp+D0h] [rbp-38h]
  int v65; // [rsp+D4h] [rbp-34h]
  char *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  char *v68; // [rsp+E8h] [rbp-20h]
  __int64 v69; // [rsp+F0h] [rbp-18h]
  char *v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  char *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  char *v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+18h]
  char *v76; // [rsp+128h] [rbp+20h]
  __int64 v77; // [rsp+130h] [rbp+28h]
  char *v78; // [rsp+138h] [rbp+30h]
  __int64 v79; // [rsp+140h] [rbp+38h]
  char *v80; // [rsp+148h] [rbp+40h]
  __int64 v81; // [rsp+150h] [rbp+48h]
  char *v82; // [rsp+158h] [rbp+50h]
  __int64 v83; // [rsp+160h] [rbp+58h]
  char *v84; // [rsp+168h] [rbp+60h]
  __int64 v85; // [rsp+170h] [rbp+68h]
  char *v86; // [rsp+178h] [rbp+70h]
  __int64 v87; // [rsp+180h] [rbp+78h]
  char *v88; // [rsp+188h] [rbp+80h]
  __int64 v89; // [rsp+190h] [rbp+88h]
  char *v90; // [rsp+198h] [rbp+90h]
  __int64 v91; // [rsp+1A0h] [rbp+98h]
  int v92; // [rsp+1E0h] [rbp+D8h] BYREF

  v92 = a4;
  v25 = a6;
  v44 = &v92;
  v46 = a5;
  v26 = -1LL;
  v45 = 4LL;
  v47 = 16LL;
  v27 = 10;
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
  v49 = v29;
  if ( !a6 )
    v25 = L"NULL";
  v30 = 5;
  v48 = v25;
  v31 = a7;
  if ( a7 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a7[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v51 = v33;
  v52 = 0;
  if ( !a7 )
    v31 = "NULL";
  v50 = v31;
  v34 = a8;
  v35 = a8 == 0LL;
  if ( a8 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a8[v36] );
    v27 = 2 * v36 + 2;
    v35 = a8 == 0LL;
  }
  if ( v35 )
    v34 = L"NULL";
  v54 = v27;
  v53 = v34;
  v56 = &a9;
  v58 = &a10;
  v37 = a11;
  v55 = 0;
  v57 = 2LL;
  v59 = 2LL;
  if ( a11 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a11[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v39 = 5;
  }
  v61 = v39;
  v62 = 0;
  if ( !a11 )
    v37 = "NULL";
  v60 = v37;
  v40 = a12;
  v41 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v26;
    while ( a12[v26] );
    v30 = v26 + 1;
    v41 = a12 == 0LL;
  }
  v64 = v30;
  v66 = &a13;
  v65 = 0;
  v68 = &a14;
  if ( v41 )
    v40 = "NULL";
  v63 = v40;
  v70 = &a15;
  v67 = 2LL;
  v72 = &a16;
  v69 = 4LL;
  v74 = &a17;
  v76 = &a18;
  v78 = &a19;
  v80 = &a20;
  v82 = &a21;
  v84 = &a22;
  v86 = &a23;
  v88 = &a24;
  v90 = &a25;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 1LL;
  v89 = 1LL;
  v91 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v40, &EventMFNDSetChildPFQoS, 0LL, 0x17u, &v43);
}
