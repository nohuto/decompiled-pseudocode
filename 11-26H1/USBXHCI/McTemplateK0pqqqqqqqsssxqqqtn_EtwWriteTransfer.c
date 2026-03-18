/*
 * XREFs of McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer @ 0x140050164
 * Callers:
 *     Etw_ControllerCreate @ 0x14004F2F8 (Etw_ControllerCreate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000EF70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        _DWORD a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        const char *a12,
        const char *a13,
        const char *a14,
        char a15,
        char a16,
        char a17,
        char a18,
        ...)
{
  __int64 v18; // rcx
  int v19; // r8d
  const char *v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  const char *v23; // rax
  __int64 v24; // rdx
  int v25; // edx
  const char *v26; // rax
  bool v27; // zf
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v30; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  char *v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  char *v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  char *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  char *v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  char *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  char *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  char *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  const char *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  const char *v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+DCh] [rbp-24h]
  const char *v52; // [rsp+E0h] [rbp-20h]
  int v53; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+ECh] [rbp-14h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  char *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  va_list v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  __int64 v67; // [rsp+188h] [rbp+88h] BYREF
  __int64 v68; // [rsp+200h] [rbp+100h] BYREF
  va_list va; // [rsp+200h] [rbp+100h]
  __int64 v70; // [rsp+208h] [rbp+108h]
  __int64 v71; // [rsp+210h] [rbp+110h]
  va_list va1; // [rsp+218h] [rbp+118h] BYREF

  va_start(va1, a18);
  va_start(va, a18);
  v68 = va_arg(va1, _QWORD);
  v70 = va_arg(va1, _QWORD);
  v71 = va_arg(va1, _QWORD);
  v67 = a4;
  v31 = 8LL;
  v30 = &v67;
  v33 = 4LL;
  v32 = &a5;
  v18 = -1LL;
  v35 = 4LL;
  v34 = &a6;
  v19 = 5;
  v37 = 4LL;
  v36 = &a7;
  v38 = &a8;
  v40 = &a9;
  v42 = &a10;
  v44 = &a11;
  v20 = a12;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 4LL;
  v45 = 4LL;
  if ( a12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a12[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v47 = v22;
  v48 = 0;
  if ( !a12 )
    v20 = "NULL";
  v46 = v20;
  v23 = a13;
  if ( a13 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a13[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v50 = v25;
  v51 = 0;
  if ( !a13 )
    v23 = "NULL";
  v49 = v23;
  v26 = a14;
  v27 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v18;
    while ( a14[v18] );
    v19 = v18 + 1;
    v27 = a14 == 0LL;
  }
  if ( v27 )
    v26 = "NULL";
  v53 = v19;
  v52 = v26;
  v54 = 0;
  v55 = &a15;
  v56 = 8LL;
  v57 = &a16;
  v58 = 4LL;
  v59 = &a17;
  v61 = &a18;
  va_copy(v63, va);
  v65 = v71;
  v60 = 4LL;
  v62 = 4LL;
  v64 = 4LL;
  v66 = 64LL;
  return McGenEventWrite_EtwWriteTransfer(v18, &USBXHCI_ETW_EVENT_CONTROLLER_CREATE_V1, 0LL, 0x12u, &v29);
}
