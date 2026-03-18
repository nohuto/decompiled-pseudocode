/*
 * XREFs of McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer @ 0x140003468
 * Callers:
 *     Etw_ControllerRundown @ 0x140002800 (Etw_ControllerRundown.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000EF70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
        const char *a14,
        const char *a15,
        const char *a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33,
        char a34,
        char a35,
        char a36,
        char a37,
        char a38,
        char a39,
        int a40,
        __int64 a41,
        int a42,
        __int64 a43)
{
  __int64 v43; // rcx
  int v45; // r8d
  const char *v46; // rax
  __int64 v47; // rdx
  int v48; // edx
  const char *v49; // rax
  __int64 v50; // rdx
  int v51; // edx
  const char *v52; // rax
  bool v53; // zf
  _BYTE v55[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v56; // [rsp+40h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B8h]
  char *v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  char *v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  char *v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  char *v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  char *v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  char *v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  char *v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  char *v72; // [rsp+C0h] [rbp-40h]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  char *v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  const char *v76; // [rsp+E0h] [rbp-20h]
  int v77; // [rsp+E8h] [rbp-18h]
  int v78; // [rsp+ECh] [rbp-14h]
  const char *v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  const char *v82; // [rsp+100h] [rbp+0h]
  int v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+10Ch] [rbp+Ch]
  char *v85; // [rsp+110h] [rbp+10h]
  __int64 v86; // [rsp+118h] [rbp+18h]
  char *v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+128h] [rbp+28h]
  char *v89; // [rsp+130h] [rbp+30h]
  __int64 v90; // [rsp+138h] [rbp+38h]
  char *v91; // [rsp+140h] [rbp+40h]
  __int64 v92; // [rsp+148h] [rbp+48h]
  char *v93; // [rsp+150h] [rbp+50h]
  __int64 v94; // [rsp+158h] [rbp+58h]
  char *v95; // [rsp+160h] [rbp+60h]
  __int64 v96; // [rsp+168h] [rbp+68h]
  char *v97; // [rsp+170h] [rbp+70h]
  __int64 v98; // [rsp+178h] [rbp+78h]
  char *v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+188h] [rbp+88h]
  char *v101; // [rsp+190h] [rbp+90h]
  __int64 v102; // [rsp+198h] [rbp+98h]
  char *v103; // [rsp+1A0h] [rbp+A0h]
  __int64 v104; // [rsp+1A8h] [rbp+A8h]
  char *v105; // [rsp+1B0h] [rbp+B0h]
  __int64 v106; // [rsp+1B8h] [rbp+B8h]
  char *v107; // [rsp+1C0h] [rbp+C0h]
  __int64 v108; // [rsp+1C8h] [rbp+C8h]
  char *v109; // [rsp+1D0h] [rbp+D0h]
  __int64 v110; // [rsp+1D8h] [rbp+D8h]
  char *v111; // [rsp+1E0h] [rbp+E0h]
  __int64 v112; // [rsp+1E8h] [rbp+E8h]
  char *v113; // [rsp+1F0h] [rbp+F0h]
  __int64 v114; // [rsp+1F8h] [rbp+F8h]
  char *v115; // [rsp+200h] [rbp+100h]
  __int64 v116; // [rsp+208h] [rbp+108h]
  char *v117; // [rsp+210h] [rbp+110h]
  __int64 v118; // [rsp+218h] [rbp+118h]
  char *v119; // [rsp+220h] [rbp+120h]
  __int64 v120; // [rsp+228h] [rbp+128h]
  char *v121; // [rsp+230h] [rbp+130h]
  __int64 v122; // [rsp+238h] [rbp+138h]
  char *v123; // [rsp+240h] [rbp+140h]
  __int64 v124; // [rsp+248h] [rbp+148h]
  char *v125; // [rsp+250h] [rbp+150h]
  __int64 v126; // [rsp+258h] [rbp+158h]
  char *v127; // [rsp+260h] [rbp+160h]
  __int64 v128; // [rsp+268h] [rbp+168h]
  char *v129; // [rsp+270h] [rbp+170h]
  __int64 v130; // [rsp+278h] [rbp+178h]
  __int64 v131; // [rsp+280h] [rbp+180h]
  __int64 v132; // [rsp+288h] [rbp+188h]
  __int64 v133; // [rsp+290h] [rbp+190h]
  __int64 v134; // [rsp+298h] [rbp+198h]
  __int64 v135; // [rsp+2D8h] [rbp+1D8h] BYREF

  v135 = a4;
  v57 = 8LL;
  v56 = &v135;
  v59 = 4LL;
  v58 = &a5;
  v43 = -1LL;
  v61 = 1LL;
  v60 = &a6;
  v63 = 1LL;
  v62 = &a7;
  v45 = 5;
  v65 = 4LL;
  v64 = &a8;
  v66 = &a9;
  v68 = &a10;
  v70 = &a11;
  v72 = &a12;
  v74 = &a13;
  v46 = a14;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  if ( a14 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a14[v47] );
    v48 = v47 + 1;
  }
  else
  {
    v48 = 5;
  }
  v77 = v48;
  v78 = 0;
  if ( !a14 )
    v46 = "NULL";
  v76 = v46;
  v49 = a15;
  if ( a15 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( a15[v50] );
    v51 = v50 + 1;
  }
  else
  {
    v51 = 5;
  }
  v80 = v51;
  v81 = 0;
  if ( !a15 )
    v49 = "NULL";
  v79 = v49;
  v52 = a16;
  v53 = a16 == 0LL;
  if ( a16 )
  {
    do
      ++v43;
    while ( a16[v43] );
    v45 = v43 + 1;
    v53 = a16 == 0LL;
  }
  if ( v53 )
    v52 = "NULL";
  v83 = v45;
  v82 = v52;
  v85 = &a17;
  v87 = &a18;
  v89 = &a19;
  v91 = &a20;
  v93 = &a21;
  v95 = &a22;
  v97 = &a23;
  v99 = &a24;
  v101 = &a25;
  v103 = &a26;
  v105 = &a27;
  v107 = &a28;
  v109 = &a29;
  v111 = &a30;
  v113 = &a31;
  v115 = &a32;
  v117 = &a33;
  v119 = &a34;
  v121 = &a35;
  v123 = &a36;
  v125 = &a37;
  v127 = &a38;
  v129 = &a39;
  v131 = a41;
  v133 = a43;
  v84 = 0;
  v86 = 8LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 8LL;
  v110 = 8LL;
  v112 = 4LL;
  v114 = 4LL;
  v116 = 4LL;
  v118 = 4LL;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 4LL;
  v126 = 4LL;
  v128 = 4LL;
  v130 = 4LL;
  v132 = 96LL;
  v134 = 64LL;
  return McGenEventWrite_EtwWriteTransfer(v43, &USBXHCI_ETW_EVENT_RUNDOWN_CONTROLLER_INFORMATION_V6, a3, 39LL, v55);
}
