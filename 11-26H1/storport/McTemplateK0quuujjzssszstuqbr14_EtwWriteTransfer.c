/*
 * XREFs of McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer @ 0x1400B6798
 * Callers:
 *     StorpTelemetrySendUnitNvmeLogPage @ 0x1400C2F00 (StorpTelemetrySendUnitNvmeLogPage.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
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
        int a18,
        __int64 a19)
{
  const wchar_t *v19; // rdx
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ecx
  const char *v24; // rcx
  int v25; // r8d
  __int64 v26; // rdx
  int v27; // edx
  const char *v28; // rcx
  __int64 v29; // rdx
  int v30; // edx
  const char *v31; // rcx
  __int64 v32; // rdx
  int v33; // edx
  const wchar_t *v34; // rcx
  bool v35; // zf
  __int64 v36; // rdx
  const char *v37; // rcx
  bool v38; // zf
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+30h] [rbp-D0h] BYREF
  int *v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  char *v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h]
  char *v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h]
  char *v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  const wchar_t *v53; // [rsp+A0h] [rbp-60h]
  int v54; // [rsp+A8h] [rbp-58h]
  int v55; // [rsp+ACh] [rbp-54h]
  const char *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  const char *v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  const char *v62; // [rsp+D0h] [rbp-30h]
  int v63; // [rsp+D8h] [rbp-28h]
  int v64; // [rsp+DCh] [rbp-24h]
  const wchar_t *v65; // [rsp+E0h] [rbp-20h]
  int v66; // [rsp+E8h] [rbp-18h]
  int v67; // [rsp+ECh] [rbp-14h]
  const char *v68; // [rsp+F0h] [rbp-10h]
  int v69; // [rsp+F8h] [rbp-8h]
  int v70; // [rsp+FCh] [rbp-4h]
  char *v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  char *v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]
  int *v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  __int64 v77; // [rsp+130h] [rbp+30h]
  int v78; // [rsp+138h] [rbp+38h]
  int v79; // [rsp+13Ch] [rbp+3Ch]
  int v80; // [rsp+178h] [rbp+78h] BYREF

  v80 = a4;
  v19 = a10;
  v41 = &v80;
  v42 = 4LL;
  v43 = &a5;
  v45 = &a6;
  v47 = &a7;
  v20 = 10;
  v49 = a8;
  v51 = a9;
  v21 = -1LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 1LL;
  v50 = 16LL;
  v52 = 16LL;
  if ( a10 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a10[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v54 = v23;
  v24 = a11;
  if ( !a10 )
    v19 = L"NULL";
  v55 = 0;
  v53 = v19;
  v25 = 5;
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
  v57 = v27;
  v58 = 0;
  if ( !a11 )
    v24 = "NULL";
  v56 = v24;
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
  v60 = v30;
  v61 = 0;
  if ( !a12 )
    v28 = "NULL";
  v59 = v28;
  v31 = a13;
  if ( a13 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a13[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v63 = v33;
  v64 = 0;
  if ( !a13 )
    v31 = "NULL";
  v62 = v31;
  v34 = a14;
  v35 = a14 == 0LL;
  if ( a14 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a14[v36] );
    v20 = 2 * v36 + 2;
    v35 = a14 == 0LL;
  }
  if ( v35 )
    v34 = L"NULL";
  v66 = v20;
  v65 = v34;
  v37 = a15;
  v67 = 0;
  v38 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v21;
    while ( a15[v21] );
    v25 = v21 + 1;
    v38 = a15 == 0LL;
  }
  if ( v38 )
    v37 = "NULL";
  v69 = v25;
  v68 = v37;
  v71 = &a16;
  v70 = 0;
  v73 = &a17;
  v72 = 4LL;
  v75 = &a18;
  v77 = a19;
  v78 = a18;
  v74 = 1LL;
  v76 = 4LL;
  v79 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v37, &DeviceLogPage, 0LL, 0x11u, &v40);
}
