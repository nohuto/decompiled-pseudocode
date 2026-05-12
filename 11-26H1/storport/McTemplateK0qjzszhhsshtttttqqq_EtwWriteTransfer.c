/*
 * XREFs of McTemplateK0qjzszhhsshtttttqqq_EtwWriteTransfer @ 0x14008E058
 * Callers:
 *     StorLogMFNDCCAsyncEvent @ 0x140097770 (StorLogMFNDCCAsyncEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhsshtttttqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
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
        char a21)
{
  const wchar_t *v21; // rcx
  __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // rdx
  unsigned int v25; // edx
  int v26; // r8d
  const char *v27; // rcx
  __int64 v28; // rdx
  int v29; // edx
  const wchar_t *v30; // rcx
  bool v31; // zf
  __int64 v32; // rdx
  const char *v33; // rcx
  __int64 v34; // rdx
  int v35; // edx
  const char *v36; // rcx
  bool v37; // zf
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+38h] [rbp-D0h] BYREF
  int *v40; // [rsp+48h] [rbp-C0h]
  __int64 v41; // [rsp+50h] [rbp-B8h]
  __int64 v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  const wchar_t *v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  const char *v46; // [rsp+78h] [rbp-90h]
  int v47; // [rsp+80h] [rbp-88h]
  int v48; // [rsp+84h] [rbp-84h]
  const wchar_t *v49; // [rsp+88h] [rbp-80h]
  int v50; // [rsp+90h] [rbp-78h]
  int v51; // [rsp+94h] [rbp-74h]
  char *v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h]
  char *v54; // [rsp+A8h] [rbp-60h]
  __int64 v55; // [rsp+B0h] [rbp-58h]
  const char *v56; // [rsp+B8h] [rbp-50h]
  int v57; // [rsp+C0h] [rbp-48h]
  int v58; // [rsp+C4h] [rbp-44h]
  const char *v59; // [rsp+C8h] [rbp-40h]
  int v60; // [rsp+D0h] [rbp-38h]
  int v61; // [rsp+D4h] [rbp-34h]
  char *v62; // [rsp+D8h] [rbp-30h]
  __int64 v63; // [rsp+E0h] [rbp-28h]
  char *v64; // [rsp+E8h] [rbp-20h]
  __int64 v65; // [rsp+F0h] [rbp-18h]
  char *v66; // [rsp+F8h] [rbp-10h]
  __int64 v67; // [rsp+100h] [rbp-8h]
  char *v68; // [rsp+108h] [rbp+0h]
  __int64 v69; // [rsp+110h] [rbp+8h]
  char *v70; // [rsp+118h] [rbp+10h]
  __int64 v71; // [rsp+120h] [rbp+18h]
  char *v72; // [rsp+128h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+28h]
  char *v74; // [rsp+138h] [rbp+30h]
  __int64 v75; // [rsp+140h] [rbp+38h]
  char *v76; // [rsp+148h] [rbp+40h]
  __int64 v77; // [rsp+150h] [rbp+48h]
  char *v78; // [rsp+158h] [rbp+50h]
  __int64 v79; // [rsp+160h] [rbp+58h]
  int v80; // [rsp+1A0h] [rbp+98h] BYREF

  v80 = a4;
  v21 = a6;
  v40 = &v80;
  v42 = a5;
  v22 = -1LL;
  v41 = 4LL;
  v43 = 16LL;
  v23 = 10;
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
  v45 = v25;
  if ( !a6 )
    v21 = L"NULL";
  v26 = 5;
  v44 = v21;
  v27 = a7;
  if ( a7 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a7[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v47 = v29;
  v48 = 0;
  if ( !a7 )
    v27 = "NULL";
  v46 = v27;
  v30 = a8;
  v31 = a8 == 0LL;
  if ( a8 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a8[v32] );
    v23 = 2 * v32 + 2;
    v31 = a8 == 0LL;
  }
  if ( v31 )
    v30 = L"NULL";
  v50 = v23;
  v49 = v30;
  v52 = &a9;
  v54 = &a10;
  v33 = a11;
  v51 = 0;
  v53 = 2LL;
  v55 = 2LL;
  if ( a11 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a11[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v57 = v35;
  v58 = 0;
  if ( !a11 )
    v33 = "NULL";
  v56 = v33;
  v36 = a12;
  v37 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v22;
    while ( a12[v22] );
    v26 = v22 + 1;
    v37 = a12 == 0LL;
  }
  if ( v37 )
    v36 = "NULL";
  v60 = v26;
  v59 = v36;
  v62 = &a13;
  v61 = 0;
  v64 = &a14;
  v63 = 2LL;
  v66 = &a15;
  v65 = 4LL;
  v68 = &a16;
  v70 = &a17;
  v72 = &a18;
  v74 = &a19;
  v76 = &a20;
  v78 = &a21;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v36, &EventMFNDCCAsyncEvent, 0LL, 0x13u, &v39);
}
