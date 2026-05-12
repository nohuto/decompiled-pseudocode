/*
 * XREFs of McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer @ 0x14008C6E4
 * Callers:
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     TcglibEalLogInfo @ 0x14008D804 (TcglibEalLogInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const wchar_t *a14,
        const char *a15,
        char a16,
        char a17,
        char a18,
        char a19)
{
  const wchar_t *v20; // rdx
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // ecx
  const char *v25; // rcx
  int v26; // r8d
  __int64 v27; // rdx
  int v28; // edx
  const char *v29; // rcx
  __int64 v30; // rdx
  int v31; // edx
  const char *v32; // rcx
  __int64 v33; // rdx
  int v34; // edx
  const wchar_t *v35; // rcx
  bool v36; // zf
  __int64 v37; // rdx
  const char *v38; // rcx
  bool v39; // zf
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+38h] [rbp-D0h] BYREF
  int *v42; // [rsp+48h] [rbp-C0h]
  __int64 v43; // [rsp+50h] [rbp-B8h]
  char *v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  char *v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  char *v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h]
  const wchar_t *v54; // [rsp+A8h] [rbp-60h]
  int v55; // [rsp+B0h] [rbp-58h]
  int v56; // [rsp+B4h] [rbp-54h]
  const char *v57; // [rsp+B8h] [rbp-50h]
  int v58; // [rsp+C0h] [rbp-48h]
  int v59; // [rsp+C4h] [rbp-44h]
  const char *v60; // [rsp+C8h] [rbp-40h]
  int v61; // [rsp+D0h] [rbp-38h]
  int v62; // [rsp+D4h] [rbp-34h]
  const char *v63; // [rsp+D8h] [rbp-30h]
  int v64; // [rsp+E0h] [rbp-28h]
  int v65; // [rsp+E4h] [rbp-24h]
  const wchar_t *v66; // [rsp+E8h] [rbp-20h]
  int v67; // [rsp+F0h] [rbp-18h]
  int v68; // [rsp+F4h] [rbp-14h]
  const char *v69; // [rsp+F8h] [rbp-10h]
  int v70; // [rsp+100h] [rbp-8h]
  int v71; // [rsp+104h] [rbp-4h]
  char *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  char *v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+18h]
  char *v76; // [rsp+128h] [rbp+20h]
  __int64 v77; // [rsp+130h] [rbp+28h]
  char *v78; // [rsp+138h] [rbp+30h]
  __int64 v79; // [rsp+140h] [rbp+38h]
  int v80; // [rsp+180h] [rbp+78h] BYREF

  v80 = a4;
  v43 = 4LL;
  v42 = &v80;
  v45 = 1LL;
  v44 = &a5;
  v20 = a10;
  v46 = &a6;
  v21 = 10;
  v47 = 1LL;
  v48 = &a7;
  v50 = a8;
  v52 = a9;
  v22 = -1LL;
  v49 = 1LL;
  v51 = 16LL;
  v53 = 16LL;
  if ( a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a10[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v55 = v24;
  v25 = a11;
  if ( !a10 )
    v20 = L"NULL";
  v56 = 0;
  v54 = v20;
  v26 = 5;
  if ( a11 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a11[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v58 = v28;
  v59 = 0;
  if ( !a11 )
    v25 = "NULL";
  v57 = v25;
  v29 = a12;
  if ( a12 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a12[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v61 = v31;
  v62 = 0;
  if ( !a12 )
    v29 = "NULL";
  v60 = v29;
  v32 = a13;
  if ( a13 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a13[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v64 = v34;
  v65 = 0;
  if ( !a13 )
    v32 = "NULL";
  v63 = v32;
  v35 = a14;
  v36 = a14 == 0LL;
  if ( a14 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a14[v37] );
    v21 = 2 * v37 + 2;
    v36 = a14 == 0LL;
  }
  if ( v36 )
    v35 = L"NULL";
  v67 = v21;
  v66 = v35;
  v38 = a15;
  v68 = 0;
  v39 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v22;
    while ( a15[v22] );
    v26 = v22 + 1;
    v39 = a15 == 0LL;
  }
  if ( v39 )
    v38 = "NULL";
  v70 = v26;
  v69 = v38;
  v72 = &a16;
  v71 = 0;
  v74 = &a17;
  v73 = 8LL;
  v76 = &a18;
  v75 = 8LL;
  v78 = &a19;
  v77 = 8LL;
  v79 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v38, a2, 0LL, 0x11u, &v41);
}
