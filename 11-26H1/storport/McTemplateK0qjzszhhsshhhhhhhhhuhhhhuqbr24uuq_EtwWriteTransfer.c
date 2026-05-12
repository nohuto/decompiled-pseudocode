/*
 * XREFs of McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer @ 0x1400C7760
 * Callers:
 *     StorLogMFNDQueryCCQueuesState @ 0x1400CB324 (StorLogMFNDQueryCCQueuesState.c)
 *     StorLogMFNDSetCCQueuesState @ 0x1400CC658 (StorLogMFNDSetCCQueuesState.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer(
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
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        int a28,
        __int64 a29,
        char a30,
        char a31,
        char a32)
{
  const wchar_t *v32; // rcx
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // rdx
  unsigned int v37; // edx
  int v38; // r8d
  const char *v39; // rcx
  __int64 v40; // rdx
  int v41; // edx
  const wchar_t *v42; // rcx
  bool v43; // zf
  __int64 v44; // rdx
  const char *v45; // rcx
  __int64 v46; // rdx
  int v47; // edx
  const char *v48; // rcx
  bool v49; // zf
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+38h] [rbp-D0h] BYREF
  int *v52; // [rsp+48h] [rbp-C0h]
  __int64 v53; // [rsp+50h] [rbp-B8h]
  __int64 v54; // [rsp+58h] [rbp-B0h]
  __int64 v55; // [rsp+60h] [rbp-A8h]
  const wchar_t *v56; // [rsp+68h] [rbp-A0h]
  __int64 v57; // [rsp+70h] [rbp-98h]
  const char *v58; // [rsp+78h] [rbp-90h]
  int v59; // [rsp+80h] [rbp-88h]
  int v60; // [rsp+84h] [rbp-84h]
  const wchar_t *v61; // [rsp+88h] [rbp-80h]
  int v62; // [rsp+90h] [rbp-78h]
  int v63; // [rsp+94h] [rbp-74h]
  char *v64; // [rsp+98h] [rbp-70h]
  __int64 v65; // [rsp+A0h] [rbp-68h]
  char *v66; // [rsp+A8h] [rbp-60h]
  __int64 v67; // [rsp+B0h] [rbp-58h]
  const char *v68; // [rsp+B8h] [rbp-50h]
  int v69; // [rsp+C0h] [rbp-48h]
  int v70; // [rsp+C4h] [rbp-44h]
  const char *v71; // [rsp+C8h] [rbp-40h]
  int v72; // [rsp+D0h] [rbp-38h]
  int v73; // [rsp+D4h] [rbp-34h]
  char *v74; // [rsp+D8h] [rbp-30h]
  __int64 v75; // [rsp+E0h] [rbp-28h]
  char *v76; // [rsp+E8h] [rbp-20h]
  __int64 v77; // [rsp+F0h] [rbp-18h]
  char *v78; // [rsp+F8h] [rbp-10h]
  __int64 v79; // [rsp+100h] [rbp-8h]
  char *v80; // [rsp+108h] [rbp+0h]
  __int64 v81; // [rsp+110h] [rbp+8h]
  char *v82; // [rsp+118h] [rbp+10h]
  __int64 v83; // [rsp+120h] [rbp+18h]
  char *v84; // [rsp+128h] [rbp+20h]
  __int64 v85; // [rsp+130h] [rbp+28h]
  char *v86; // [rsp+138h] [rbp+30h]
  __int64 v87; // [rsp+140h] [rbp+38h]
  char *v88; // [rsp+148h] [rbp+40h]
  __int64 v89; // [rsp+150h] [rbp+48h]
  char *v90; // [rsp+158h] [rbp+50h]
  __int64 v91; // [rsp+160h] [rbp+58h]
  char *v92; // [rsp+168h] [rbp+60h]
  __int64 v93; // [rsp+170h] [rbp+68h]
  char *v94; // [rsp+178h] [rbp+70h]
  __int64 v95; // [rsp+180h] [rbp+78h]
  char *v96; // [rsp+188h] [rbp+80h]
  __int64 v97; // [rsp+190h] [rbp+88h]
  char *v98; // [rsp+198h] [rbp+90h]
  __int64 v99; // [rsp+1A0h] [rbp+98h]
  char *v100; // [rsp+1A8h] [rbp+A0h]
  __int64 v101; // [rsp+1B0h] [rbp+A8h]
  char *v102; // [rsp+1B8h] [rbp+B0h]
  __int64 v103; // [rsp+1C0h] [rbp+B8h]
  int *v104; // [rsp+1C8h] [rbp+C0h]
  __int64 v105; // [rsp+1D0h] [rbp+C8h]
  __int64 v106; // [rsp+1D8h] [rbp+D0h]
  int v107; // [rsp+1E0h] [rbp+D8h]
  int v108; // [rsp+1E4h] [rbp+DCh]
  char *v109; // [rsp+1E8h] [rbp+E0h]
  __int64 v110; // [rsp+1F0h] [rbp+E8h]
  char *v111; // [rsp+1F8h] [rbp+F0h]
  __int64 v112; // [rsp+200h] [rbp+F8h]
  char *v113; // [rsp+208h] [rbp+100h]
  __int64 v114; // [rsp+210h] [rbp+108h]
  int v115; // [rsp+250h] [rbp+148h] BYREF

  v115 = a4;
  v32 = a6;
  v52 = &v115;
  v54 = a5;
  v34 = -1LL;
  v53 = 4LL;
  v55 = 16LL;
  v35 = 10;
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
  v57 = v37;
  if ( !a6 )
    v32 = L"NULL";
  v38 = 5;
  v56 = v32;
  v39 = a7;
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
  v59 = v41;
  v60 = 0;
  if ( !a7 )
    v39 = "NULL";
  v58 = v39;
  v42 = a8;
  v43 = a8 == 0LL;
  if ( a8 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( a8[v44] );
    v35 = 2 * v44 + 2;
    v43 = a8 == 0LL;
  }
  if ( v43 )
    v42 = L"NULL";
  v62 = v35;
  v61 = v42;
  v64 = &a9;
  v66 = &a10;
  v45 = a11;
  v63 = 0;
  v65 = 2LL;
  v67 = 2LL;
  if ( a11 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a11[v46] );
    v47 = v46 + 1;
  }
  else
  {
    v47 = 5;
  }
  v69 = v47;
  v70 = 0;
  if ( !a11 )
    v45 = "NULL";
  v68 = v45;
  v48 = a12;
  v49 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v34;
    while ( a12[v34] );
    v38 = v34 + 1;
    v49 = a12 == 0LL;
  }
  v72 = v38;
  v74 = &a13;
  if ( v49 )
    v48 = "NULL";
  v71 = v48;
  v76 = &a14;
  v73 = 0;
  v78 = &a15;
  v75 = 2LL;
  v80 = &a16;
  v77 = 2LL;
  v82 = &a17;
  v84 = &a18;
  v86 = &a19;
  v88 = &a20;
  v90 = &a21;
  v92 = &a22;
  v94 = &a23;
  v96 = &a24;
  v98 = &a25;
  v100 = &a26;
  v102 = &a27;
  v104 = &a28;
  v106 = a29;
  v107 = a28;
  v109 = &a30;
  v111 = &a31;
  v113 = &a32;
  v79 = 2LL;
  v81 = 2LL;
  v83 = 2LL;
  v85 = 2LL;
  v87 = 2LL;
  v89 = 2LL;
  v91 = 2LL;
  v93 = 1LL;
  v95 = 2LL;
  v97 = 2LL;
  v99 = 2LL;
  v101 = 2LL;
  v103 = 1LL;
  v105 = 4LL;
  v108 = 0;
  v110 = 1LL;
  v112 = 1LL;
  v114 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v48, a2, 0LL, 0x1Eu, &v51);
}
