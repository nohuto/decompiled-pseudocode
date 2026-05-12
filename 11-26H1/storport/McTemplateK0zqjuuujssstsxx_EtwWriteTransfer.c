/*
 * XREFs of McTemplateK0zqjuuujssstsxx_EtwWriteTransfer @ 0x14002648C
 * Callers:
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0zqjuuujssstsxx_EtwWriteTransfer(
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
        const char *a15,
        __int64 a16,
        char a17)
{
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  const char *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  const char *v24; // rax
  __int64 v25; // rdx
  int v26; // edx
  const char *v27; // rax
  __int64 v28; // rdx
  int v29; // edx
  const char *v30; // rax
  bool v31; // zf
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v34[16]; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v35; // [rsp+50h] [rbp-B0h]
  int v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+5Ch] [rbp-A4h]
  char *v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  char *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  char *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  char *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  const char *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  const char *v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  const char *v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E8h] [rbp-18h]
  int v58; // [rsp+ECh] [rbp-14h]
  char *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  const char *v61; // [rsp+100h] [rbp+0h]
  int v62; // [rsp+108h] [rbp+8h]
  int v63; // [rsp+10Ch] [rbp+Ch]
  __int64 *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  char *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]

  v17 = -1LL;
  v33 = DeviceQueueIoWaitThreshold;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a4[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v36 = v19;
  v37 = 0;
  v38 = &a5;
  v20 = 5;
  v40 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v21 = a11;
  v42 = &a7;
  v44 = &a8;
  v46 = &a9;
  v48 = a10;
  v35 = a4;
  v39 = 4LL;
  v41 = 16LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 16LL;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a11[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v51 = v23;
  v24 = a12;
  if ( !a11 )
    v21 = "NULL";
  v52 = 0;
  v50 = v21;
  if ( a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a12[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v54 = v26;
  v55 = 0;
  if ( !a12 )
    v24 = "NULL";
  v53 = v24;
  v27 = a13;
  if ( a13 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a13[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v57 = v29;
  v58 = 0;
  if ( !a13 )
    v27 = "NULL";
  v60 = 4LL;
  v56 = v27;
  v59 = &a14;
  v30 = a15;
  v31 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v17;
    while ( a15[v17] );
    v20 = v17 + 1;
    v31 = a15 == 0LL;
  }
  if ( v31 )
    v30 = "NULL";
  v62 = v20;
  v61 = v30;
  v63 = 0;
  v64 = &v33;
  v65 = 8LL;
  v66 = &a17;
  v67 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v17, &EventQueuedIoExceededThreshold, 0LL, 15LL, v34);
}
