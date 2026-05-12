/*
 * XREFs of McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C
 * Callers:
 *     NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent @ 0x1400E58B0 (NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E95A0 (NvmeAdapterGetControllerLogPageSync.c)
 *     NvmeAdapterGetFabricControllerFeature @ 0x1400E9A58 (NvmeAdapterGetFabricControllerFeature.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E9D10 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400EA034 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400EB6A0 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 *     NvmeAdapterSendFabricControllerAsyncEventCommand @ 0x1400ED31C (NvmeAdapterSendFabricControllerAsyncEventCommand.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400ED69C (NvmeAdapterSetFabricControllerFeature.c)
 *     NvmeAdapterSetFabricControllerProperty @ 0x1400EDB68 (NvmeAdapterSetFabricControllerProperty.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400F4110 (NvmeControllerGetLogPageCompletionForAER.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const char *a14,
        const char *a15,
        char a16,
        const char *a17,
        char a18,
        const char *a19,
        char a20,
        const char *a21,
        char a22,
        const char *a23,
        char a24,
        const char *a25,
        int a26,
        const char *a27,
        int a28,
        const char *a29,
        int a30,
        char a31,
        char a32,
        char a33,
        char a34)
{
  const wchar_t *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // edx
  const char *v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // edx
  const char *v42; // rdx
  __int64 v43; // r8
  int v44; // r8d
  const char *v45; // rdx
  __int64 v46; // r8
  int v47; // r8d
  const char *v48; // rdx
  __int64 v49; // r8
  int v50; // r8d
  const char *v51; // rdx
  __int64 v52; // r8
  int v53; // r8d
  const char *v54; // rdx
  __int64 v55; // r8
  int v56; // r8d
  const char *v57; // rdx
  __int64 v58; // r8
  int v59; // r8d
  const char *v60; // rdx
  __int64 v61; // r8
  int v62; // r8d
  const char *v63; // rdx
  __int64 v64; // r8
  int v65; // r8d
  const char *v66; // rdx
  __int64 v67; // r8
  int v68; // r8d
  const char *v69; // rdx
  __int64 v70; // r8
  int v71; // r8d
  const char *v72; // rdx
  __int64 v73; // r8
  int v74; // r8d
  const char *v75; // rdx
  bool v76; // zf
  __int64 v78; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v79; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+50h] [rbp-B0h] BYREF
  int *v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+68h] [rbp-98h]
  __int64 v84; // [rsp+70h] [rbp-90h]
  __int64 v85; // [rsp+78h] [rbp-88h]
  const wchar_t *v86; // [rsp+80h] [rbp-80h]
  int v87; // [rsp+88h] [rbp-78h]
  int v88; // [rsp+8Ch] [rbp-74h]
  const char *v89; // [rsp+90h] [rbp-70h]
  int v90; // [rsp+98h] [rbp-68h]
  int v91; // [rsp+9Ch] [rbp-64h]
  char *v92; // [rsp+A0h] [rbp-60h]
  __int64 v93; // [rsp+A8h] [rbp-58h]
  char *v94; // [rsp+B0h] [rbp-50h]
  __int64 v95; // [rsp+B8h] [rbp-48h]
  char *v96; // [rsp+C0h] [rbp-40h]
  __int64 v97; // [rsp+C8h] [rbp-38h]
  const char *v98; // [rsp+D0h] [rbp-30h]
  int v99; // [rsp+D8h] [rbp-28h]
  int v100; // [rsp+DCh] [rbp-24h]
  const char *v101; // [rsp+E0h] [rbp-20h]
  int v102; // [rsp+E8h] [rbp-18h]
  int v103; // [rsp+ECh] [rbp-14h]
  const char *v104; // [rsp+F0h] [rbp-10h]
  int v105; // [rsp+F8h] [rbp-8h]
  int v106; // [rsp+FCh] [rbp-4h]
  const char *v107; // [rsp+100h] [rbp+0h]
  int v108; // [rsp+108h] [rbp+8h]
  int v109; // [rsp+10Ch] [rbp+Ch]
  const char *v110; // [rsp+110h] [rbp+10h]
  int v111; // [rsp+118h] [rbp+18h]
  int v112; // [rsp+11Ch] [rbp+1Ch]
  char *v113; // [rsp+120h] [rbp+20h]
  __int64 v114; // [rsp+128h] [rbp+28h]
  const char *v115; // [rsp+130h] [rbp+30h]
  int v116; // [rsp+138h] [rbp+38h]
  int v117; // [rsp+13Ch] [rbp+3Ch]
  char *v118; // [rsp+140h] [rbp+40h]
  __int64 v119; // [rsp+148h] [rbp+48h]
  const char *v120; // [rsp+150h] [rbp+50h]
  int v121; // [rsp+158h] [rbp+58h]
  int v122; // [rsp+15Ch] [rbp+5Ch]
  char *v123; // [rsp+160h] [rbp+60h]
  __int64 v124; // [rsp+168h] [rbp+68h]
  const char *v125; // [rsp+170h] [rbp+70h]
  int v126; // [rsp+178h] [rbp+78h]
  int v127; // [rsp+17Ch] [rbp+7Ch]
  char *v128; // [rsp+180h] [rbp+80h]
  __int64 v129; // [rsp+188h] [rbp+88h]
  const char *v130; // [rsp+190h] [rbp+90h]
  int v131; // [rsp+198h] [rbp+98h]
  int v132; // [rsp+19Ch] [rbp+9Ch]
  char *v133; // [rsp+1A0h] [rbp+A0h]
  __int64 v134; // [rsp+1A8h] [rbp+A8h]
  const char *v135; // [rsp+1B0h] [rbp+B0h]
  int v136; // [rsp+1B8h] [rbp+B8h]
  int v137; // [rsp+1BCh] [rbp+BCh]
  __int64 *v138; // [rsp+1C0h] [rbp+C0h]
  __int64 v139; // [rsp+1C8h] [rbp+C8h]
  const char *v140; // [rsp+1D0h] [rbp+D0h]
  int v141; // [rsp+1D8h] [rbp+D8h]
  int v142; // [rsp+1DCh] [rbp+DCh]
  __int64 *v143; // [rsp+1E0h] [rbp+E0h]
  __int64 v144; // [rsp+1E8h] [rbp+E8h]
  const char *v145; // [rsp+1F0h] [rbp+F0h]
  int v146; // [rsp+1F8h] [rbp+F8h]
  int v147; // [rsp+1FCh] [rbp+FCh]
  __int64 *v148; // [rsp+200h] [rbp+100h]
  __int64 v149; // [rsp+208h] [rbp+108h]
  char *v150; // [rsp+210h] [rbp+110h]
  __int64 v151; // [rsp+218h] [rbp+118h]
  char *v152; // [rsp+220h] [rbp+120h]
  __int64 v153; // [rsp+228h] [rbp+128h]
  char *v154; // [rsp+230h] [rbp+130h]
  __int64 v155; // [rsp+238h] [rbp+138h]
  char *v156; // [rsp+240h] [rbp+140h]
  __int64 v157; // [rsp+248h] [rbp+148h]
  int v158; // [rsp+288h] [rbp+188h] BYREF

  v158 = a4;
  v34 = a6;
  v82 = &v158;
  v84 = a5;
  v35 = -1LL;
  v80 = 0LL;
  v79 = 0LL;
  v78 = 0LL;
  v83 = 4LL;
  v85 = 16LL;
  if ( a6 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a6[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v37 = 10;
  }
  v87 = v37;
  v88 = 0;
  if ( !a6 )
    v34 = L"NULL";
  v38 = a7;
  v86 = v34;
  v39 = 5LL;
  if ( a7 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a7[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v41 = 5;
  }
  v90 = v41;
  v91 = 0;
  v92 = &a8;
  v93 = 2LL;
  v94 = &a9;
  if ( !a7 )
    v38 = "NULL";
  v89 = v38;
  v96 = &a10;
  v42 = a11;
  v95 = 2LL;
  v97 = 1LL;
  if ( a11 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a11[v43] );
    v44 = v43 + 1;
  }
  else
  {
    v44 = 5;
  }
  v99 = v44;
  v100 = 0;
  if ( !a11 )
    v42 = "NULL";
  v98 = v42;
  v45 = a12;
  if ( a12 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a12[v46] );
    v47 = v46 + 1;
  }
  else
  {
    v47 = 5;
  }
  v102 = v47;
  v103 = 0;
  if ( !a12 )
    v45 = "NULL";
  v101 = v45;
  v48 = a13;
  if ( a13 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( a13[v49] );
    v50 = v49 + 1;
  }
  else
  {
    v50 = 5;
  }
  v105 = v50;
  v106 = 0;
  if ( !a13 )
    v48 = "NULL";
  v104 = v48;
  v51 = a14;
  if ( a14 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( a14[v52] );
    v53 = v52 + 1;
  }
  else
  {
    v53 = 5;
  }
  v108 = v53;
  v109 = 0;
  if ( !a14 )
    v51 = "NULL";
  v107 = v51;
  v54 = a15;
  if ( a15 )
  {
    v55 = -1LL;
    do
      ++v55;
    while ( a15[v55] );
    v56 = v55 + 1;
  }
  else
  {
    v56 = 5;
  }
  v111 = v56;
  v112 = 0;
  if ( !a15 )
    v54 = "NULL";
  v114 = 8LL;
  v110 = v54;
  v113 = &a16;
  v57 = a17;
  if ( a17 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( a17[v58] );
    v59 = v58 + 1;
  }
  else
  {
    v59 = 5;
  }
  v116 = v59;
  v117 = 0;
  if ( !a17 )
    v57 = "NULL";
  v119 = 8LL;
  v115 = v57;
  v118 = &a18;
  v60 = a19;
  if ( a19 )
  {
    v61 = -1LL;
    do
      ++v61;
    while ( a19[v61] );
    v62 = v61 + 1;
  }
  else
  {
    v62 = 5;
  }
  v121 = v62;
  v122 = 0;
  if ( !a19 )
    v60 = "NULL";
  v124 = 8LL;
  v120 = v60;
  v123 = &a20;
  v63 = a21;
  if ( a21 )
  {
    v64 = -1LL;
    do
      ++v64;
    while ( a21[v64] );
    v65 = v64 + 1;
  }
  else
  {
    v65 = 5;
  }
  v126 = v65;
  v127 = 0;
  if ( !a21 )
    v63 = "NULL";
  v129 = 8LL;
  v125 = v63;
  v128 = &a22;
  v66 = a23;
  if ( a23 )
  {
    v67 = -1LL;
    do
      ++v67;
    while ( a23[v67] );
    v68 = v67 + 1;
  }
  else
  {
    v68 = 5;
  }
  v131 = v68;
  v132 = 0;
  if ( !a23 )
    v66 = "NULL";
  v134 = 8LL;
  v130 = v66;
  v133 = &a24;
  v69 = a25;
  if ( a25 )
  {
    v70 = -1LL;
    do
      ++v70;
    while ( a25[v70] );
    v71 = v70 + 1;
  }
  else
  {
    v71 = 5;
  }
  v136 = v71;
  v137 = 0;
  if ( !a25 )
    v69 = "NULL";
  v139 = 8LL;
  v135 = v69;
  v138 = &v78;
  v72 = a27;
  if ( a27 )
  {
    v73 = -1LL;
    do
      ++v73;
    while ( a27[v73] );
    v74 = v73 + 1;
  }
  else
  {
    v74 = 5;
  }
  v141 = v74;
  v142 = 0;
  if ( !a27 )
    v72 = "NULL";
  v144 = 8LL;
  v140 = v72;
  v143 = &v79;
  v75 = a29;
  v76 = a29 == 0LL;
  if ( a29 )
  {
    do
      ++v35;
    while ( a29[v35] );
    v39 = (unsigned int)(v35 + 1);
    v76 = a29 == 0LL;
  }
  if ( v76 )
    v75 = "NULL";
  v147 = 0;
  v145 = v75;
  v148 = &v80;
  v146 = v39;
  v150 = &a31;
  v149 = 8LL;
  v152 = &a32;
  v151 = 4LL;
  v154 = &a33;
  v156 = &a34;
  v153 = 1LL;
  v155 = 1LL;
  v157 = 1LL;
  return McGenEventWrite_EtwWriteTransfer(v39, &EventNVMeQueueRequestFailed, 0LL, 0x20u, &v81);
}
