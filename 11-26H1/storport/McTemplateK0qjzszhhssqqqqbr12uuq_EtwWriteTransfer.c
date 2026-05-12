/*
 * XREFs of McTemplateK0qjzszhhssqqqqbr12uuq_EtwWriteTransfer @ 0x1400C903C
 * Callers:
 *     StorLogMFNDQueryChildPFList @ 0x1400CB828 (StorLogMFNDQueryChildPFList.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqqqqbr12uuq_EtwWriteTransfer(
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
        int a16,
        __int64 a17,
        char a18,
        char a19,
        char a20)
{
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // rdx
  unsigned int v24; // edx
  int v25; // r8d
  const char *v26; // rcx
  __int64 v27; // rdx
  int v28; // edx
  const wchar_t *v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  const char *v32; // rcx
  __int64 v33; // rdx
  int v34; // edx
  const char *v35; // rcx
  bool v36; // zf
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+38h] [rbp-D0h] BYREF
  int *v39; // [rsp+48h] [rbp-C0h]
  __int64 v40; // [rsp+50h] [rbp-B8h]
  __int64 v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  const wchar_t *v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  const char *v45; // [rsp+78h] [rbp-90h]
  int v46; // [rsp+80h] [rbp-88h]
  int v47; // [rsp+84h] [rbp-84h]
  const wchar_t *v48; // [rsp+88h] [rbp-80h]
  int v49; // [rsp+90h] [rbp-78h]
  int v50; // [rsp+94h] [rbp-74h]
  char *v51; // [rsp+98h] [rbp-70h]
  __int64 v52; // [rsp+A0h] [rbp-68h]
  char *v53; // [rsp+A8h] [rbp-60h]
  __int64 v54; // [rsp+B0h] [rbp-58h]
  const char *v55; // [rsp+B8h] [rbp-50h]
  int v56; // [rsp+C0h] [rbp-48h]
  int v57; // [rsp+C4h] [rbp-44h]
  const char *v58; // [rsp+C8h] [rbp-40h]
  int v59; // [rsp+D0h] [rbp-38h]
  int v60; // [rsp+D4h] [rbp-34h]
  char *v61; // [rsp+D8h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-28h]
  char *v63; // [rsp+E8h] [rbp-20h]
  __int64 v64; // [rsp+F0h] [rbp-18h]
  char *v65; // [rsp+F8h] [rbp-10h]
  __int64 v66; // [rsp+100h] [rbp-8h]
  int *v67; // [rsp+108h] [rbp+0h]
  __int64 v68; // [rsp+110h] [rbp+8h]
  __int64 v69; // [rsp+118h] [rbp+10h]
  int v70; // [rsp+120h] [rbp+18h]
  int v71; // [rsp+124h] [rbp+1Ch]
  char *v72; // [rsp+128h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+28h]
  char *v74; // [rsp+138h] [rbp+30h]
  __int64 v75; // [rsp+140h] [rbp+38h]
  char *v76; // [rsp+148h] [rbp+40h]
  __int64 v77; // [rsp+150h] [rbp+48h]
  int v78; // [rsp+190h] [rbp+88h] BYREF

  v78 = a4;
  v20 = a6;
  v39 = &v78;
  v41 = a5;
  v21 = -1LL;
  v40 = 4LL;
  v42 = 16LL;
  v22 = 10;
  if ( a6 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a6[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v44 = v24;
  if ( !a6 )
    v20 = L"NULL";
  v25 = 5;
  v43 = v20;
  v26 = a7;
  if ( a7 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a7[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v46 = v28;
  v47 = 0;
  if ( !a7 )
    v26 = "NULL";
  v45 = v26;
  v29 = a8;
  v30 = a8 == 0LL;
  if ( a8 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a8[v31] );
    v22 = 2 * v31 + 2;
    v30 = a8 == 0LL;
  }
  if ( v30 )
    v29 = L"NULL";
  v49 = v22;
  v48 = v29;
  v51 = &a9;
  v53 = &a10;
  v32 = a11;
  v50 = 0;
  v52 = 2LL;
  v54 = 2LL;
  if ( a11 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a11[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v56 = v34;
  v57 = 0;
  if ( !a11 )
    v32 = "NULL";
  v55 = v32;
  v35 = a12;
  v36 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v21;
    while ( a12[v21] );
    v25 = v21 + 1;
    v36 = a12 == 0LL;
  }
  if ( v36 )
    v35 = "NULL";
  v59 = v25;
  v58 = v35;
  v61 = &a13;
  v60 = 0;
  v63 = &a14;
  v62 = 4LL;
  v65 = &a15;
  v64 = 4LL;
  v67 = &a16;
  v69 = a17;
  v70 = a16;
  v72 = &a18;
  v74 = &a19;
  v76 = &a20;
  v66 = 4LL;
  v68 = 4LL;
  v71 = 0;
  v73 = 1LL;
  v75 = 1LL;
  v77 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v35, &EventMFNDQueryChildPFList, 0LL, 0x12u, &v38);
}
