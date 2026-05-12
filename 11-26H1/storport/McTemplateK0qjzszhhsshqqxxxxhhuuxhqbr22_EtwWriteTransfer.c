/*
 * XREFs of McTemplateK0qjzszhhsshqqxxxxhhuuxhqbr22_EtwWriteTransfer @ 0x1400C8AD4
 * Callers:
 *     StorLogMFNDCCQoSStatisticsInfo @ 0x1400CACBC (StorLogMFNDCCQoSStatisticsInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhsshqqxxxxhhuuxhqbr22_EtwWriteTransfer(
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
        char a25,
        int a26,
        __int64 a27)
{
  const wchar_t *v27; // rcx
  __int64 v28; // rax
  int v29; // r9d
  __int64 v30; // rdx
  int v31; // edx
  int v32; // r8d
  const char *v33; // rcx
  __int64 v34; // rdx
  int v35; // edx
  const wchar_t *v36; // rcx
  bool v37; // zf
  __int64 v38; // rdx
  const char *v39; // rcx
  __int64 v40; // rdx
  int v41; // edx
  const char *v42; // rcx
  bool v43; // zf
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+30h] [rbp-D0h] BYREF
  int *v46; // [rsp+40h] [rbp-C0h]
  __int64 v47; // [rsp+48h] [rbp-B8h]
  __int64 v48; // [rsp+50h] [rbp-B0h]
  __int64 v49; // [rsp+58h] [rbp-A8h]
  const wchar_t *v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+6Ch] [rbp-94h]
  const char *v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v56; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+8Ch] [rbp-74h]
  char *v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]
  char *v61; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h]
  const char *v63; // [rsp+B0h] [rbp-50h]
  int v64; // [rsp+B8h] [rbp-48h]
  int v65; // [rsp+BCh] [rbp-44h]
  const char *v66; // [rsp+C0h] [rbp-40h]
  int v67; // [rsp+C8h] [rbp-38h]
  int v68; // [rsp+CCh] [rbp-34h]
  char *v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  char *v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  char *v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  char *v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  char *v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  char *v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  char *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  char *v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  char *v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  char *v87; // [rsp+160h] [rbp+60h]
  __int64 v88; // [rsp+168h] [rbp+68h]
  char *v89; // [rsp+170h] [rbp+70h]
  __int64 v90; // [rsp+178h] [rbp+78h]
  char *v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+188h] [rbp+88h]
  char *v93; // [rsp+190h] [rbp+90h]
  __int64 v94; // [rsp+198h] [rbp+98h]
  int *v95; // [rsp+1A0h] [rbp+A0h]
  __int64 v96; // [rsp+1A8h] [rbp+A8h]
  __int64 v97; // [rsp+1B0h] [rbp+B0h]
  int v98; // [rsp+1B8h] [rbp+B8h]
  int v99; // [rsp+1BCh] [rbp+BCh]
  int v100; // [rsp+1F8h] [rbp+F8h] BYREF

  v100 = a4;
  v27 = a6;
  v46 = &v100;
  v48 = a5;
  v28 = -1LL;
  v47 = 4LL;
  v49 = 16LL;
  v29 = 10;
  if ( a6 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a6[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v51 = v31;
  v52 = 0;
  if ( !a6 )
    v27 = L"NULL";
  v32 = 5;
  v50 = v27;
  v33 = a7;
  if ( a7 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a7[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v54 = v35;
  v55 = 0;
  if ( !a7 )
    v33 = "NULL";
  v53 = v33;
  v36 = a8;
  v37 = a8 == 0LL;
  if ( a8 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a8[v38] );
    v29 = 2 * v38 + 2;
    v37 = a8 == 0LL;
  }
  if ( v37 )
    v36 = L"NULL";
  v57 = v29;
  v56 = v36;
  v59 = &a9;
  v61 = &a10;
  v39 = a11;
  v58 = 0;
  v60 = 2LL;
  v62 = 2LL;
  if ( a11 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a11[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v41 = 5;
  }
  v64 = v41;
  v65 = 0;
  if ( !a11 )
    v39 = "NULL";
  v63 = v39;
  v42 = a12;
  v43 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v28;
    while ( a12[v28] );
    v32 = v28 + 1;
    v43 = a12 == 0LL;
  }
  v67 = v32;
  v69 = &a13;
  v68 = 0;
  v71 = &a14;
  if ( v43 )
    v42 = "NULL";
  v66 = v42;
  v73 = &a15;
  v70 = 2LL;
  v75 = &a16;
  v72 = 4LL;
  v77 = &a17;
  v79 = &a18;
  v81 = &a19;
  v83 = &a20;
  v85 = &a21;
  v87 = &a22;
  v89 = &a23;
  v91 = &a24;
  v93 = &a25;
  v95 = &a26;
  v97 = a27;
  v98 = a26;
  v74 = 4LL;
  v76 = 8LL;
  v78 = 8LL;
  v80 = 8LL;
  v82 = 8LL;
  v84 = 2LL;
  v86 = 2LL;
  v88 = 1LL;
  v90 = 1LL;
  v92 = 8LL;
  v94 = 2LL;
  v96 = 4LL;
  v99 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v42, &EventMFNDCCQoSStatisticsInfo, 0LL, 0x19u, &v45);
}
