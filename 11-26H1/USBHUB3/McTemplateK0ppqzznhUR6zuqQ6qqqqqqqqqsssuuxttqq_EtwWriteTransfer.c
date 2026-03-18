/*
 * XREFs of McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x140001B44
 * Callers:
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x140079930 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A20 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        int a9,
        __int64 a10,
        unsigned __int16 a11,
        __int64 a12,
        const wchar_t *a13,
        char a14,
        char a15,
        __int64 a16,
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
        char a31,
        char a32,
        char a33,
        char a34,
        char a35)
{
  __int64 v35; // rcx
  const wchar_t *v37; // rax
  int v38; // r8d
  __int64 v40; // rdx
  int v41; // edx
  const wchar_t *v42; // rax
  __int64 v43; // rdx
  int v44; // edx
  const wchar_t *v45; // rdx
  bool v46; // zf
  __int64 v47; // rax
  const char *v48; // rdx
  int v49; // r8d
  __int64 v50; // rax
  int v51; // eax
  const char *v52; // rax
  __int64 v53; // rdx
  int v54; // edx
  const char *v55; // rax
  bool v56; // zf
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v59; // [rsp+40h] [rbp-C0h]
  __int64 v60; // [rsp+48h] [rbp-B8h]
  char *v61; // [rsp+50h] [rbp-B0h]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  char *v63; // [rsp+60h] [rbp-A0h]
  __int64 v64; // [rsp+68h] [rbp-98h]
  const wchar_t *v65; // [rsp+70h] [rbp-90h]
  int v66; // [rsp+78h] [rbp-88h]
  int v67; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v68; // [rsp+80h] [rbp-80h]
  int v69; // [rsp+88h] [rbp-78h]
  int v70; // [rsp+8Ch] [rbp-74h]
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v73; // [rsp+A0h] [rbp-60h]
  __int64 v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  int v76; // [rsp+B8h] [rbp-48h]
  int v77; // [rsp+BCh] [rbp-44h]
  const wchar_t *v78; // [rsp+C0h] [rbp-40h]
  int v79; // [rsp+C8h] [rbp-38h]
  int v80; // [rsp+CCh] [rbp-34h]
  char *v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  char *v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h]
  __int64 v86; // [rsp+F8h] [rbp-8h]
  char *v87; // [rsp+100h] [rbp+0h]
  __int64 v88; // [rsp+108h] [rbp+8h]
  char *v89; // [rsp+110h] [rbp+10h]
  __int64 v90; // [rsp+118h] [rbp+18h]
  char *v91; // [rsp+120h] [rbp+20h]
  __int64 v92; // [rsp+128h] [rbp+28h]
  char *v93; // [rsp+130h] [rbp+30h]
  __int64 v94; // [rsp+138h] [rbp+38h]
  char *v95; // [rsp+140h] [rbp+40h]
  __int64 v96; // [rsp+148h] [rbp+48h]
  char *v97; // [rsp+150h] [rbp+50h]
  __int64 v98; // [rsp+158h] [rbp+58h]
  char *v99; // [rsp+160h] [rbp+60h]
  __int64 v100; // [rsp+168h] [rbp+68h]
  char *v101; // [rsp+170h] [rbp+70h]
  __int64 v102; // [rsp+178h] [rbp+78h]
  char *v103; // [rsp+180h] [rbp+80h]
  __int64 v104; // [rsp+188h] [rbp+88h]
  const char *v105; // [rsp+190h] [rbp+90h]
  int v106; // [rsp+198h] [rbp+98h]
  int v107; // [rsp+19Ch] [rbp+9Ch]
  const char *v108; // [rsp+1A0h] [rbp+A0h]
  int v109; // [rsp+1A8h] [rbp+A8h]
  int v110; // [rsp+1ACh] [rbp+ACh]
  const char *v111; // [rsp+1B0h] [rbp+B0h]
  int v112; // [rsp+1B8h] [rbp+B8h]
  int v113; // [rsp+1BCh] [rbp+BCh]
  char *v114; // [rsp+1C0h] [rbp+C0h]
  __int64 v115; // [rsp+1C8h] [rbp+C8h]
  char *v116; // [rsp+1D0h] [rbp+D0h]
  __int64 v117; // [rsp+1D8h] [rbp+D8h]
  char *v118; // [rsp+1E0h] [rbp+E0h]
  __int64 v119; // [rsp+1E8h] [rbp+E8h]
  char *v120; // [rsp+1F0h] [rbp+F0h]
  __int64 v121; // [rsp+1F8h] [rbp+F8h]
  char *v122; // [rsp+200h] [rbp+100h]
  __int64 v123; // [rsp+208h] [rbp+108h]
  char *v124; // [rsp+210h] [rbp+110h]
  __int64 v125; // [rsp+218h] [rbp+118h]
  char *v126; // [rsp+220h] [rbp+120h]
  __int64 v127; // [rsp+228h] [rbp+128h]
  __int64 v128; // [rsp+278h] [rbp+178h] BYREF

  v128 = a4;
  v60 = 8LL;
  v59 = &v128;
  v62 = 8LL;
  v61 = &a5;
  v35 = -1LL;
  v64 = 4LL;
  v63 = &a6;
  v37 = a7;
  v38 = 10;
  if ( a7 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a7[v40] );
    v41 = 2 * v40 + 2;
  }
  else
  {
    v41 = 10;
  }
  v66 = v41;
  v67 = 0;
  if ( !a7 )
    v37 = L"NULL";
  v65 = v37;
  v42 = a8;
  if ( a8 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a8[v43] );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v44 = 10;
  }
  v69 = v44;
  v45 = a13;
  if ( !a8 )
    v42 = L"NULL";
  v70 = 0;
  v68 = v42;
  v71 = a10;
  v73 = &a11;
  v75 = a12;
  v76 = a11;
  v72 = 18LL;
  v74 = 2LL;
  v77 = 0;
  v46 = a13 == 0LL;
  if ( a13 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a13[v47] );
    v38 = 2 * v47 + 2;
    v46 = a13 == 0LL;
  }
  if ( v46 )
    v45 = L"NULL";
  v79 = v38;
  v78 = v45;
  v48 = a26;
  v49 = 5;
  v81 = &a14;
  v83 = &a15;
  v85 = a16;
  v87 = &a17;
  v89 = &a18;
  v91 = &a19;
  v93 = &a20;
  v95 = &a21;
  v97 = &a22;
  v99 = &a23;
  v101 = &a24;
  v103 = &a25;
  v80 = 0;
  v82 = 1LL;
  v84 = 4LL;
  v86 = 24LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  if ( a26 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( a26[v50] );
    v51 = v50 + 1;
  }
  else
  {
    v51 = 5;
  }
  v106 = v51;
  v52 = a27;
  if ( !a26 )
    v48 = "NULL";
  v107 = 0;
  v105 = v48;
  if ( a27 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( a27[v53] );
    v54 = v53 + 1;
  }
  else
  {
    v54 = 5;
  }
  v109 = v54;
  v110 = 0;
  if ( !a27 )
    v52 = "NULL";
  v108 = v52;
  v55 = a28;
  v56 = a28 == 0LL;
  if ( a28 )
  {
    do
      ++v35;
    while ( a28[v35] );
    v49 = v35 + 1;
    v56 = a28 == 0LL;
  }
  if ( v56 )
    v55 = "NULL";
  v112 = v49;
  v111 = v55;
  v113 = 0;
  v114 = &a29;
  v115 = 1LL;
  v116 = &a30;
  v117 = 1LL;
  v118 = &a31;
  v120 = &a32;
  v122 = &a33;
  v124 = &a34;
  v126 = &a35;
  v119 = 8LL;
  v121 = 4LL;
  v123 = 4LL;
  v125 = 4LL;
  v127 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v35, a2, a3, 0x20u, &v58);
}
