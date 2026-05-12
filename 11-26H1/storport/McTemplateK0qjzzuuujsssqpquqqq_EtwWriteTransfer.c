/*
 * XREFs of McTemplateK0qjzzuuujsssqpquqqq_EtwWriteTransfer @ 0x14005EBC0
 * Callers:
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzuuujsssqpquqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        __int64 a11,
        const char *a12,
        const char *a13,
        const char *a14,
        char a15,
        char a16,
        char a17,
        __int64 a18,
        __int64 a19,
        char a20,
        char a21)
{
  __int64 v21; // rcx
  int v22; // r8d
  const wchar_t *v23; // rax
  __int64 v24; // rdx
  int v25; // edx
  const wchar_t *v26; // rdx
  bool v27; // zf
  __int64 v28; // rax
  int v29; // r8d
  const char *v30; // rax
  __int64 v31; // rdx
  int v32; // edx
  const char *v33; // rax
  __int64 v34; // rdx
  int v35; // edx
  const char *v36; // rax
  bool v37; // zf
  char v39; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+40h] [rbp-C0h] BYREF
  int *v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  const wchar_t *v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v49; // [rsp+80h] [rbp-80h]
  int v50; // [rsp+88h] [rbp-78h]
  int v51; // [rsp+8Ch] [rbp-74h]
  char *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  char *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  char *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  __int64 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  const char *v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+D8h] [rbp-28h]
  int v62; // [rsp+DCh] [rbp-24h]
  const char *v63; // [rsp+E0h] [rbp-20h]
  int v64; // [rsp+E8h] [rbp-18h]
  int v65; // [rsp+ECh] [rbp-14h]
  const char *v66; // [rsp+F0h] [rbp-10h]
  int v67; // [rsp+F8h] [rbp-8h]
  int v68; // [rsp+FCh] [rbp-4h]
  char *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  char *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  char *v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  char *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  int *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  char *v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  char *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  int v83; // [rsp+1A8h] [rbp+A8h] BYREF

  v83 = a4;
  v43 = 4LL;
  v40 = 0;
  v42 = &v83;
  v21 = -1LL;
  v44 = a5;
  v22 = 10;
  v23 = a6;
  v39 = 0;
  v45 = 16LL;
  if ( a6 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a6[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v47 = v25;
  v26 = a7;
  if ( !a6 )
    v23 = L"NULL";
  v48 = 0;
  v46 = v23;
  v27 = a7 == 0LL;
  if ( a7 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a7[v28] );
    v22 = 2 * v28 + 2;
    v27 = a7 == 0LL;
  }
  v50 = v22;
  v52 = &a8;
  if ( v27 )
    v26 = L"NULL";
  v49 = v26;
  v54 = &a9;
  v29 = 5;
  v51 = 0;
  v56 = &a10;
  v58 = a11;
  v30 = a12;
  v53 = 1LL;
  v55 = 1LL;
  v57 = 1LL;
  v59 = 16LL;
  if ( a12 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a12[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v61 = v32;
  v62 = 0;
  if ( !a12 )
    v30 = "NULL";
  v60 = v30;
  v33 = a13;
  if ( a13 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a13[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v64 = v35;
  v65 = 0;
  if ( !a13 )
    v33 = "NULL";
  v63 = v33;
  v36 = a14;
  v37 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v21;
    while ( a14[v21] );
    v29 = v21 + 1;
    v37 = a14 == 0LL;
  }
  if ( v37 )
    v36 = "NULL";
  v67 = v29;
  v66 = v36;
  v68 = 0;
  v69 = &a15;
  v70 = 4LL;
  v71 = &a16;
  v72 = 8LL;
  v73 = &a17;
  v75 = &v39;
  v77 = &v40;
  v79 = &a20;
  v81 = &a21;
  v74 = 4LL;
  v76 = 1LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v21, &EventPnPRequestFailed, 0LL, 0x13u, &v41);
}
