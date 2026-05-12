/*
 * XREFs of McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer @ 0x1400273A0
 * Callers:
 *     StorpTelemetrySendUnitUniqueErrorData @ 0x1400261C0 (StorpTelemetrySendUnitUniqueErrorData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        const wchar_t *a11,
        const char *a12,
        const char *a13,
        const char *a14,
        const wchar_t *a15,
        char a16,
        __int64 a17,
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
        char a28)
{
  const wchar_t *v28; // rcx
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // edx
  int v33; // r8d
  const char *v34; // rcx
  __int64 v35; // rdx
  int v36; // edx
  const char *v37; // rcx
  __int64 v38; // rdx
  int v39; // edx
  const char *v40; // rcx
  bool v41; // zf
  __int64 v42; // rdx
  const wchar_t *v43; // rcx
  bool v44; // zf
  char v46; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v47[16]; // [rsp+48h] [rbp-C0h] BYREF
  int *v48; // [rsp+58h] [rbp-B0h]
  __int64 v49; // [rsp+60h] [rbp-A8h]
  char *v50; // [rsp+68h] [rbp-A0h]
  __int64 v51; // [rsp+70h] [rbp-98h]
  char *v52; // [rsp+78h] [rbp-90h]
  __int64 v53; // [rsp+80h] [rbp-88h]
  char *v54; // [rsp+88h] [rbp-80h]
  __int64 v55; // [rsp+90h] [rbp-78h]
  __int64 v56; // [rsp+98h] [rbp-70h]
  __int64 v57; // [rsp+A0h] [rbp-68h]
  __int64 v58; // [rsp+A8h] [rbp-60h]
  __int64 v59; // [rsp+B0h] [rbp-58h]
  char *v60; // [rsp+B8h] [rbp-50h]
  __int64 v61; // [rsp+C0h] [rbp-48h]
  const wchar_t *v62; // [rsp+C8h] [rbp-40h]
  int v63; // [rsp+D0h] [rbp-38h]
  int v64; // [rsp+D4h] [rbp-34h]
  const char *v65; // [rsp+D8h] [rbp-30h]
  int v66; // [rsp+E0h] [rbp-28h]
  int v67; // [rsp+E4h] [rbp-24h]
  const char *v68; // [rsp+E8h] [rbp-20h]
  int v69; // [rsp+F0h] [rbp-18h]
  int v70; // [rsp+F4h] [rbp-14h]
  const char *v71; // [rsp+F8h] [rbp-10h]
  int v72; // [rsp+100h] [rbp-8h]
  int v73; // [rsp+104h] [rbp-4h]
  const wchar_t *v74; // [rsp+108h] [rbp+0h]
  int v75; // [rsp+110h] [rbp+8h]
  int v76; // [rsp+114h] [rbp+Ch]
  char *v77; // [rsp+118h] [rbp+10h]
  __int64 v78; // [rsp+120h] [rbp+18h]
  char *v79; // [rsp+128h] [rbp+20h]
  __int64 v80; // [rsp+130h] [rbp+28h]
  char *v81; // [rsp+138h] [rbp+30h]
  __int64 v82; // [rsp+140h] [rbp+38h]
  char *v83; // [rsp+148h] [rbp+40h]
  __int64 v84; // [rsp+150h] [rbp+48h]
  char *v85; // [rsp+158h] [rbp+50h]
  __int64 v86; // [rsp+160h] [rbp+58h]
  char *v87; // [rsp+168h] [rbp+60h]
  __int64 v88; // [rsp+170h] [rbp+68h]
  char *v89; // [rsp+178h] [rbp+70h]
  __int64 v90; // [rsp+180h] [rbp+78h]
  char *v91; // [rsp+188h] [rbp+80h]
  __int64 v92; // [rsp+190h] [rbp+88h]
  char *v93; // [rsp+198h] [rbp+90h]
  __int64 v94; // [rsp+1A0h] [rbp+98h]
  char *v95; // [rsp+1A8h] [rbp+A0h]
  __int64 v96; // [rsp+1B0h] [rbp+A8h]
  char *v97; // [rsp+1B8h] [rbp+B0h]
  __int64 v98; // [rsp+1C0h] [rbp+B8h]
  char *v99; // [rsp+1C8h] [rbp+C0h]
  __int64 v100; // [rsp+1D0h] [rbp+C8h]
  char *v101; // [rsp+1D8h] [rbp+D0h]
  __int64 v102; // [rsp+1E0h] [rbp+D8h]
  int v103; // [rsp+220h] [rbp+118h] BYREF

  v103 = a4;
  v28 = a11;
  v48 = &v103;
  v46 = 1;
  v50 = &a5;
  v49 = 4LL;
  v52 = &a6;
  v29 = 10;
  v51 = 1LL;
  v54 = &a7;
  v56 = a8;
  v58 = a9;
  v60 = &a10;
  v30 = -1LL;
  v53 = 1LL;
  v55 = 1LL;
  v57 = 16LL;
  v59 = 16LL;
  v61 = 4LL;
  if ( a11 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a11[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v32 = 10;
  }
  v63 = v32;
  v64 = 0;
  if ( !a11 )
    v28 = L"NULL";
  v33 = 5;
  v62 = v28;
  v34 = a12;
  if ( a12 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a12[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v66 = v36;
  v67 = 0;
  if ( !a12 )
    v34 = "NULL";
  v65 = v34;
  v37 = a13;
  if ( a13 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a13[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v39 = 5;
  }
  v69 = v39;
  v70 = 0;
  if ( !a13 )
    v37 = "NULL";
  v68 = v37;
  v40 = a14;
  v41 = a14 == 0LL;
  if ( a14 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a14[v42] );
    v33 = v42 + 1;
    v41 = a14 == 0LL;
  }
  if ( v41 )
    v40 = "NULL";
  v72 = v33;
  v71 = v40;
  v43 = a15;
  v73 = 0;
  v44 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v30;
    while ( a15[v30] );
    v29 = 2 * v30 + 2;
    v44 = a15 == 0LL;
  }
  v75 = v29;
  v77 = &a16;
  v76 = 0;
  v79 = &v46;
  if ( v44 )
    v43 = L"NULL";
  v74 = v43;
  v81 = &a18;
  v78 = 4LL;
  v83 = &a19;
  v80 = 1LL;
  v85 = &a20;
  v87 = &a21;
  v89 = &a22;
  v91 = &a23;
  v93 = &a24;
  v95 = &a25;
  v97 = &a26;
  v99 = &a27;
  v101 = &a28;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 1LL;
  v88 = 1LL;
  v90 = 1LL;
  v92 = 1LL;
  v94 = 1LL;
  v96 = 1LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v43, &EventUnitUniqueErrorData, 0LL, 26LL, v47);
}
