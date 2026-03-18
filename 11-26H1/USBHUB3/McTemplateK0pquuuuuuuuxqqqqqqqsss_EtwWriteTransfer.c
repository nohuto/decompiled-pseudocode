/*
 * XREFs of McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer @ 0x140002138
 * Callers:
 *     HUBDRIVER_EtwRundownHub @ 0x140079248 (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B960 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A20 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        const char *a22,
        const char *a23,
        const char *a24)
{
  const char *v25; // rdx
  __int64 v26; // rcx
  int v28; // r8d
  __int64 v29; // rax
  int v30; // eax
  const char *v31; // rax
  __int64 v32; // rdx
  int v33; // edx
  const char *v34; // rax
  bool v35; // zf
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h]
  char *v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  char *v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  char *v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  char *v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  char *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  char *v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  char *v52; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  char *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  char *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  char *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  char *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  char *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  char *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  char *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  char *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  char *v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]
  char *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  const char *v74; // [rsp+160h] [rbp+60h]
  int v75; // [rsp+168h] [rbp+68h]
  int v76; // [rsp+16Ch] [rbp+6Ch]
  const char *v77; // [rsp+170h] [rbp+70h]
  int v78; // [rsp+178h] [rbp+78h]
  int v79; // [rsp+17Ch] [rbp+7Ch]
  const char *v80; // [rsp+180h] [rbp+80h]
  int v81; // [rsp+188h] [rbp+88h]
  int v82; // [rsp+18Ch] [rbp+8Ch]
  __int64 v83; // [rsp+1C8h] [rbp+C8h] BYREF

  v83 = a4;
  v39 = 8LL;
  v38 = &v83;
  v41 = 4LL;
  v40 = &a5;
  v25 = a22;
  v42 = &a6;
  v26 = -1LL;
  v43 = 1LL;
  v44 = &a7;
  v46 = &a8;
  v48 = &a9;
  v50 = &a10;
  v52 = &a11;
  v54 = &a12;
  v56 = &a13;
  v58 = &a14;
  v60 = &a15;
  v62 = &a16;
  v64 = &a17;
  v66 = &a18;
  v68 = &a19;
  v70 = &a20;
  v72 = &a21;
  v45 = 1LL;
  v28 = 5;
  v47 = 1LL;
  v49 = 1LL;
  v51 = 1LL;
  v53 = 1LL;
  v55 = 1LL;
  v57 = 1LL;
  v59 = 8LL;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 4LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  if ( a22 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a22[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v75 = v30;
  v31 = a23;
  if ( !a22 )
    v25 = "NULL";
  v76 = 0;
  v74 = v25;
  if ( a23 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a23[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v78 = v33;
  v79 = 0;
  if ( !a23 )
    v31 = "NULL";
  v77 = v31;
  v34 = a24;
  v35 = a24 == 0LL;
  if ( a24 )
  {
    do
      ++v26;
    while ( a24[v26] );
    v28 = v26 + 1;
    v35 = a24 == 0LL;
  }
  if ( v35 )
    v34 = "NULL";
  v81 = v28;
  v80 = v34;
  v82 = 0;
  return McGenEventWrite_EtwWriteTransfer(v26, a2, a3, 0x16u, &v37);
}
