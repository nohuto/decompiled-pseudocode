/*
 * XREFs of McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer @ 0x140050414
 * Callers:
 *     Etw_ReportFatalError @ 0x14003D584 (Etw_ReportFatalError.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000EF70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const wchar_t *a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        const char *a15,
        const char *a16,
        const char *a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23)
{
  const wchar_t *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // ecx
  const char *v27; // rdx
  int v28; // r8d
  __int64 v29; // rcx
  int v30; // ecx
  const char *v31; // rcx
  __int64 v32; // rdx
  int v33; // edx
  const char *v34; // rcx
  bool v35; // zf
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h]
  const wchar_t *v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  char *v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  char *v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  char *v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  char *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  char *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  char *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  char *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  char *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  char *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  const char *v61; // [rsp+F0h] [rbp-10h]
  int v62; // [rsp+F8h] [rbp-8h]
  int v63; // [rsp+FCh] [rbp-4h]
  const char *v64; // [rsp+100h] [rbp+0h]
  int v65; // [rsp+108h] [rbp+8h]
  int v66; // [rsp+10Ch] [rbp+Ch]
  const char *v67; // [rsp+110h] [rbp+10h]
  int v68; // [rsp+118h] [rbp+18h]
  int v69; // [rsp+11Ch] [rbp+1Ch]
  char *v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  char *v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  char *v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  char *v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  char *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  char *v80; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  __int64 v82; // [rsp+1B8h] [rbp+B8h] BYREF

  v82 = a4;
  v23 = a5;
  v38 = &v82;
  v24 = -1LL;
  v39 = 8LL;
  if ( a5 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a5[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v41 = v26;
  v42 = 0;
  v44 = 4LL;
  v43 = &a6;
  if ( !a5 )
    v23 = L"NULL";
  v40 = v23;
  v27 = a15;
  v28 = 5;
  v45 = &a7;
  v47 = &a8;
  v49 = &a9;
  v51 = &a10;
  v53 = &a11;
  v55 = &a12;
  v57 = &a13;
  v59 = &a14;
  v46 = 1LL;
  v48 = 1LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  if ( a15 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a15[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v62 = v30;
  v31 = a16;
  if ( !a15 )
    v27 = "NULL";
  v63 = 0;
  v61 = v27;
  if ( a16 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a16[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v65 = v33;
  v66 = 0;
  if ( !a16 )
    v31 = "NULL";
  v64 = v31;
  v34 = a17;
  v35 = a17 == 0LL;
  if ( a17 )
  {
    do
      ++v24;
    while ( a17[v24] );
    v28 = v24 + 1;
    v35 = a17 == 0LL;
  }
  if ( v35 )
    v34 = "NULL";
  v68 = v28;
  v69 = 0;
  v70 = &a18;
  v67 = v34;
  v72 = &a19;
  v71 = 8LL;
  v74 = &a20;
  v73 = 4LL;
  v76 = &a21;
  v78 = &a22;
  v80 = &a23;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 8LL;
  v81 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v34, &USBXHCI_ETW_EVENT_CONTROLLER_FATAL_ERROR, 0LL, 0x15u, &v37);
}
