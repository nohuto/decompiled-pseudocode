/*
 * XREFs of McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer @ 0x140078FD4
 * Callers:
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        __int64 a12,
        __int64 a13,
        const wchar_t *a14,
        const char *a15,
        const char *a16,
        const char *a17,
        const wchar_t *a18,
        const char *a19,
        char a20,
        const wchar_t *a21,
        unsigned __int16 a22,
        __int64 a23,
        unsigned __int16 a24,
        __int64 a25,
        char a26)
{
  const wchar_t *v27; // rdx
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  const char *v32; // rcx
  int v33; // r8d
  __int64 v34; // rdx
  int v35; // edx
  const char *v36; // rcx
  __int64 v37; // rdx
  int v38; // edx
  const char *v39; // rcx
  __int64 v40; // rdx
  int v41; // edx
  const wchar_t *v42; // rcx
  __int64 v43; // rdx
  int v44; // edx
  const char *v45; // rcx
  bool v46; // zf
  __int64 v47; // rdx
  const wchar_t *v48; // rcx
  bool v49; // zf
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+30h] [rbp-D0h] BYREF
  int *v52; // [rsp+40h] [rbp-C0h]
  __int64 v53; // [rsp+48h] [rbp-B8h]
  char *v54; // [rsp+50h] [rbp-B0h]
  __int64 v55; // [rsp+58h] [rbp-A8h]
  char *v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h]
  char *v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  char *v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  char *v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  char *v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  char *v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  __int64 v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  const wchar_t *v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  int v74; // [rsp+ECh] [rbp-14h]
  const char *v75; // [rsp+F0h] [rbp-10h]
  int v76; // [rsp+F8h] [rbp-8h]
  int v77; // [rsp+FCh] [rbp-4h]
  const char *v78; // [rsp+100h] [rbp+0h]
  int v79; // [rsp+108h] [rbp+8h]
  int v80; // [rsp+10Ch] [rbp+Ch]
  const char *v81; // [rsp+110h] [rbp+10h]
  int v82; // [rsp+118h] [rbp+18h]
  int v83; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v84; // [rsp+120h] [rbp+20h]
  int v85; // [rsp+128h] [rbp+28h]
  int v86; // [rsp+12Ch] [rbp+2Ch]
  const char *v87; // [rsp+130h] [rbp+30h]
  int v88; // [rsp+138h] [rbp+38h]
  int v89; // [rsp+13Ch] [rbp+3Ch]
  char *v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]
  const wchar_t *v92; // [rsp+150h] [rbp+50h]
  int v93; // [rsp+158h] [rbp+58h]
  int v94; // [rsp+15Ch] [rbp+5Ch]
  unsigned __int16 *v95; // [rsp+160h] [rbp+60h]
  __int64 v96; // [rsp+168h] [rbp+68h]
  __int64 v97; // [rsp+170h] [rbp+70h]
  int v98; // [rsp+178h] [rbp+78h]
  int v99; // [rsp+17Ch] [rbp+7Ch]
  unsigned __int16 *v100; // [rsp+180h] [rbp+80h]
  __int64 v101; // [rsp+188h] [rbp+88h]
  __int64 v102; // [rsp+190h] [rbp+90h]
  int v103; // [rsp+198h] [rbp+98h]
  int v104; // [rsp+19Ch] [rbp+9Ch]
  char *v105; // [rsp+1A0h] [rbp+A0h]
  __int64 v106; // [rsp+1A8h] [rbp+A8h]
  int v107; // [rsp+1F8h] [rbp+F8h] BYREF

  v107 = a4;
  v53 = 4LL;
  v52 = &v107;
  v55 = 4LL;
  v54 = &a5;
  v27 = a14;
  v56 = &a6;
  v28 = 10;
  v57 = 4LL;
  v58 = &a7;
  v60 = &a8;
  v62 = &a9;
  v64 = &a10;
  v66 = &a11;
  v68 = a12;
  v70 = a13;
  v29 = -1LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 1LL;
  v65 = 1LL;
  v67 = 1LL;
  v69 = 16LL;
  v71 = 16LL;
  if ( a14 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a14[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v73 = v31;
  v32 = a15;
  if ( !a14 )
    v27 = L"NULL";
  v74 = 0;
  v72 = v27;
  v33 = 5;
  if ( a15 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a15[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v76 = v35;
  v77 = 0;
  if ( !a15 )
    v32 = "NULL";
  v75 = v32;
  v36 = a16;
  if ( a16 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a16[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v79 = v38;
  v80 = 0;
  if ( !a16 )
    v36 = "NULL";
  v78 = v36;
  v39 = a17;
  if ( a17 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a17[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v41 = 5;
  }
  v82 = v41;
  v83 = 0;
  if ( !a17 )
    v39 = "NULL";
  v81 = v39;
  v42 = a18;
  if ( a18 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a18[v43] );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v44 = 10;
  }
  v85 = v44;
  v86 = 0;
  if ( !a18 )
    v42 = L"NULL";
  v84 = v42;
  v45 = a19;
  v46 = a19 == 0LL;
  if ( a19 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a19[v47] );
    v33 = v47 + 1;
    v46 = a19 == 0LL;
  }
  if ( v46 )
    v45 = "NULL";
  v88 = v33;
  v87 = v45;
  v90 = &a20;
  v48 = a21;
  v89 = 0;
  v91 = 2LL;
  v49 = a21 == 0LL;
  if ( a21 )
  {
    do
      ++v29;
    while ( a21[v29] );
    v28 = 2 * v29 + 2;
    v49 = a21 == 0LL;
  }
  if ( v49 )
    v48 = L"NULL";
  v93 = v28;
  v92 = v48;
  v95 = &a22;
  v97 = a23;
  v98 = a22;
  v100 = &a24;
  v102 = a25;
  v103 = a24;
  v105 = &a26;
  v94 = 0;
  v96 = 2LL;
  v99 = 0;
  v101 = 2LL;
  v104 = 0;
  v106 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v48, a2, 0LL, 0x18u, &v51);
}
