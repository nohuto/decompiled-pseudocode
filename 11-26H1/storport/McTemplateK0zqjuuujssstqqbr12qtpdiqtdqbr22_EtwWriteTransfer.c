/*
 * XREFs of McTemplateK0zqjuuujssstqqbr12qtpdiqtdqbr22_EtwWriteTransfer @ 0x1400B055C
 * Callers:
 *     StorEtwHwTimeoutDetectedEvent @ 0x14004F8BC (StorEtwHwTimeoutDetectedEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujssstqqbr12qtpdiqtdqbr22_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15,
        int a16,
        __int64 a17,
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
  __int64 v27; // rcx
  __int64 v29; // rax
  int v30; // eax
  int v31; // r8d
  const char *v32; // rax
  __int64 v33; // rdx
  int v34; // edx
  const char *v35; // rax
  __int64 v36; // rdx
  int v37; // edx
  const char *v38; // rax
  bool v39; // zf
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+48h] [rbp-B8h]
  int v44; // [rsp+4Ch] [rbp-B4h]
  char *v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  char *v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  char *v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  char *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  const char *v57; // [rsp+B0h] [rbp-50h]
  int v58; // [rsp+B8h] [rbp-48h]
  int v59; // [rsp+BCh] [rbp-44h]
  const char *v60; // [rsp+C0h] [rbp-40h]
  int v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+CCh] [rbp-34h]
  const char *v63; // [rsp+D0h] [rbp-30h]
  int v64; // [rsp+D8h] [rbp-28h]
  int v65; // [rsp+DCh] [rbp-24h]
  char *v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  char *v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  int *v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  __int64 v72; // [rsp+110h] [rbp+10h]
  int v73; // [rsp+118h] [rbp+18h]
  int v74; // [rsp+11Ch] [rbp+1Ch]
  char *v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  char *v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  char *v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  char *v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  char *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  char *v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  char *v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  char *v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  int *v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  __int64 v93; // [rsp+1B0h] [rbp+B0h]
  int v94; // [rsp+1B8h] [rbp+B8h]
  int v95; // [rsp+1BCh] [rbp+BCh]

  v27 = -1LL;
  if ( a4 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a4[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = 10;
  }
  v43 = v30;
  v44 = 0;
  v45 = &a5;
  v31 = 5;
  v47 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v42 = a4;
  v49 = &a7;
  v51 = &a8;
  v53 = &a9;
  v55 = a10;
  v32 = a11;
  v46 = 4LL;
  v48 = 16LL;
  v50 = 1LL;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 16LL;
  if ( a11 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a11[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v58 = v34;
  v59 = 0;
  if ( !a11 )
    v32 = "NULL";
  v57 = v32;
  v35 = a12;
  if ( a12 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a12[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v61 = v37;
  v62 = 0;
  if ( !a12 )
    v35 = "NULL";
  v60 = v35;
  v38 = a13;
  v39 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v27;
    while ( a13[v27] );
    v31 = v27 + 1;
    v39 = a13 == 0LL;
  }
  if ( v39 )
    v38 = "NULL";
  v64 = v31;
  v63 = v38;
  v65 = 0;
  v66 = &a14;
  v67 = 4LL;
  v68 = &a15;
  v69 = 4LL;
  v70 = &a16;
  v72 = a17;
  v73 = a16;
  v75 = &a18;
  v77 = &a19;
  v79 = &a20;
  v81 = &a21;
  v83 = &a22;
  v85 = &a23;
  v87 = &a24;
  v89 = &a25;
  v91 = &a26;
  v93 = a27;
  v94 = a26;
  v71 = 4LL;
  v74 = 0;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 8LL;
  v82 = 4LL;
  v84 = 8LL;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v95 = 0;
  return McGenEventWrite_EtwWriteTransfer(v27, &EventUnitHwTimeout, a3, 0x19u, &v41);
}
