/*
 * XREFs of McTemplateK0qjzshhssqtqtxqqq_EtwWriteTransfer @ 0x14012D94C
 * Callers:
 *     StorLogDLRMSetLinkToDesiredSpeed @ 0x14012E8D4 (StorLogDLRMSetLinkToDesiredSpeed.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhssqtqtxqqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        char a12,
        int a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19)
{
  const wchar_t *v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // edx
  int v24; // r8d
  const char *v25; // rcx
  __int64 v26; // rdx
  int v27; // edx
  const char *v28; // rcx
  __int64 v29; // rdx
  int v30; // edx
  const char *v31; // rcx
  bool v32; // zf
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+40h] [rbp-C0h] BYREF
  int *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  const wchar_t *v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+7Ch] [rbp-84h]
  const char *v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+8Ch] [rbp-74h]
  char *v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  char *v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  const char *v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  const char *v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  char *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  int *v58; // [rsp+E0h] [rbp-20h]
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
  int v72; // [rsp+188h] [rbp+88h] BYREF

  v72 = a4;
  v19 = a6;
  v36 = &v72;
  v38 = a5;
  v21 = -1LL;
  v34 = 1;
  v37 = 4LL;
  v39 = 16LL;
  if ( a6 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a6[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v41 = v23;
  v42 = 0;
  if ( !a6 )
    v19 = L"NULL";
  v24 = 5;
  v40 = v19;
  v25 = a7;
  if ( a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a7[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v44 = v27;
  v45 = 0;
  if ( !a7 )
    v25 = "NULL";
  v47 = 2LL;
  v43 = v25;
  v46 = &a8;
  v48 = &a9;
  v28 = a10;
  v49 = 2LL;
  if ( a10 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a10[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v51 = v30;
  v52 = 0;
  if ( !a10 )
    v28 = "NULL";
  v50 = v28;
  v31 = a11;
  v32 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v21;
    while ( a11[v21] );
    v24 = v21 + 1;
    v32 = a11 == 0LL;
  }
  if ( v32 )
    v31 = "NULL";
  v54 = v24;
  v55 = 0;
  v56 = &a12;
  v53 = v31;
  v58 = &v34;
  v57 = 4LL;
  v60 = &a14;
  v59 = 4LL;
  v62 = &a15;
  v64 = &a16;
  v66 = &a17;
  v68 = &a18;
  v70 = &a19;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 8LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v31, a2, 0LL, 0x11u, &v35);
}
