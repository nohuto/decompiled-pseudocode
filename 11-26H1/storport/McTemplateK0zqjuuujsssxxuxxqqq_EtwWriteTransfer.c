/*
 * XREFs of McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer @ 0x1400B6CD4
 * Callers:
 *     StorpTelemetrySendUnitQos @ 0x1400C308C (StorpTelemetrySendUnitQos.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21)
{
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  int v24; // r8d
  const char *v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  const char *v28; // rax
  __int64 v29; // rdx
  int v30; // edx
  const char *v31; // rax
  bool v32; // zf
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v35; // [rsp+40h] [rbp-C0h]
  int v36; // [rsp+48h] [rbp-B8h]
  int v37; // [rsp+4Ch] [rbp-B4h]
  char *v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  char *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  char *v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  char *v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  const char *v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  const char *v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  const char *v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  char *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  char *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  char *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  char *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  char *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  char *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  char *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]

  v21 = -1LL;
  if ( a4 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a4[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v36 = v23;
  v37 = 0;
  v38 = &a5;
  v24 = 5;
  v40 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v35 = a4;
  v42 = &a7;
  v44 = &a8;
  v46 = &a9;
  v48 = a10;
  v25 = a11;
  v39 = 4LL;
  v41 = 16LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 16LL;
  if ( a11 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a11[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v51 = v27;
  v52 = 0;
  if ( !a11 )
    v25 = "NULL";
  v50 = v25;
  v28 = a12;
  if ( a12 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a12[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v54 = v30;
  v55 = 0;
  if ( !a12 )
    v28 = "NULL";
  v53 = v28;
  v31 = a13;
  v32 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v21;
    while ( a13[v21] );
    v24 = v21 + 1;
    v32 = a13 == 0LL;
  }
  if ( v32 )
    v31 = "NULL";
  v57 = v24;
  v56 = v31;
  v58 = 0;
  v59 = &a14;
  v60 = 8LL;
  v61 = &a15;
  v62 = 8LL;
  v63 = &a16;
  v65 = &a17;
  v67 = &a18;
  v69 = &a19;
  v71 = &a20;
  v73 = &a21;
  v64 = 1LL;
  v66 = 8LL;
  v68 = 8LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v21, &EventUnitQosData, 0LL, 0x13u, &v34);
}
