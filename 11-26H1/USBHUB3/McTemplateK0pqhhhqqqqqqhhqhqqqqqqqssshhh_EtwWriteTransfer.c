/*
 * XREFs of McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer @ 0x14001CED0
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x14001A9F0 (HUBPDO_ReportDeviceFailure.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A20 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
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
        const char *a26,
        const char *a27,
        const char *a28,
        char a29,
        char a30,
        char a31)
{
  const char *v31; // rdx
  __int64 v32; // rcx
  int v34; // r8d
  __int64 v35; // rax
  int v36; // eax
  const char *v37; // rax
  __int64 v38; // rdx
  int v39; // edx
  const char *v40; // rax
  bool v41; // zf
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+48h] [rbp-B8h]
  char *v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  char *v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h]
  char *v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  char *v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  char *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  char *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  char *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  char *v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
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
  char *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  char *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  char *v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  char *v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]
  char *v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  const char *v88; // [rsp+1A0h] [rbp+A0h]
  int v89; // [rsp+1A8h] [rbp+A8h]
  int v90; // [rsp+1ACh] [rbp+ACh]
  const char *v91; // [rsp+1B0h] [rbp+B0h]
  int v92; // [rsp+1B8h] [rbp+B8h]
  int v93; // [rsp+1BCh] [rbp+BCh]
  const char *v94; // [rsp+1C0h] [rbp+C0h]
  int v95; // [rsp+1C8h] [rbp+C8h]
  int v96; // [rsp+1CCh] [rbp+CCh]
  char *v97; // [rsp+1D0h] [rbp+D0h]
  __int64 v98; // [rsp+1D8h] [rbp+D8h]
  char *v99; // [rsp+1E0h] [rbp+E0h]
  __int64 v100; // [rsp+1E8h] [rbp+E8h]
  char *v101; // [rsp+1F0h] [rbp+F0h]
  __int64 v102; // [rsp+1F8h] [rbp+F8h]
  __int64 v103; // [rsp+238h] [rbp+138h] BYREF

  v103 = a4;
  v31 = a26;
  v44 = &v103;
  v45 = 8LL;
  v46 = &a5;
  v32 = -1LL;
  v47 = 4LL;
  v48 = &a6;
  v50 = &a7;
  v52 = &a8;
  v54 = &a9;
  v56 = &a10;
  v58 = &a11;
  v60 = &a12;
  v62 = &a13;
  v64 = &a14;
  v66 = &a15;
  v68 = &a16;
  v70 = &a17;
  v72 = &a18;
  v74 = &a19;
  v76 = &a20;
  v78 = &a21;
  v80 = &a22;
  v82 = &a23;
  v84 = &a24;
  v86 = &a25;
  v49 = 2LL;
  v34 = 5;
  v51 = 2LL;
  v53 = 2LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 4LL;
  v67 = 2LL;
  v69 = 2LL;
  v71 = 4LL;
  v73 = 2LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  if ( a26 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a26[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v89 = v36;
  v37 = a27;
  if ( !a26 )
    v31 = "NULL";
  v90 = 0;
  v88 = v31;
  if ( a27 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a27[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v39 = 5;
  }
  v92 = v39;
  v93 = 0;
  if ( !a27 )
    v37 = "NULL";
  v91 = v37;
  v40 = a28;
  v41 = a28 == 0LL;
  if ( a28 )
  {
    do
      ++v32;
    while ( a28[v32] );
    v34 = v32 + 1;
    v41 = a28 == 0LL;
  }
  if ( v41 )
    v40 = "NULL";
  v95 = v34;
  v94 = v40;
  v96 = 0;
  v97 = &a29;
  v98 = 2LL;
  v99 = &a30;
  v100 = 2LL;
  v101 = &a31;
  v102 = 2LL;
  return McGenEventWrite_EtwWriteTransfer(v32, &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILURE, a3, 0x1Du, &v43);
}
