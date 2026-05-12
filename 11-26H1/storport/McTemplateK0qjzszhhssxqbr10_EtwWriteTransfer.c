/*
 * XREFs of McTemplateK0qjzszhhssxqbr10_EtwWriteTransfer @ 0x14008E584
 * Callers:
 *     StorLogNVMeErrorRecoveryInfo @ 0x140097B30 (StorLogNVMeErrorRecoveryInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssxqbr10_EtwWriteTransfer(
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
        int a14,
        __int64 a15)
{
  const wchar_t *v15; // rcx
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // edx
  int v20; // r8d
  const char *v21; // rcx
  __int64 v22; // rdx
  int v23; // edx
  const wchar_t *v24; // rdx
  bool v25; // zf
  __int64 v26; // rcx
  const char *v27; // rcx
  __int64 v28; // rdx
  int v29; // edx
  const char *v30; // rcx
  bool v31; // zf
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+40h] [rbp-C0h] BYREF
  int *v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  const wchar_t *v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+7Ch] [rbp-84h]
  const char *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  const wchar_t *v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+9Ch] [rbp-64h]
  char *v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  char *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  const char *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  const char *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  char *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  int *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  __int64 v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  int v64; // [rsp+148h] [rbp+48h] BYREF

  v64 = a4;
  v15 = a6;
  v35 = &v64;
  v37 = a5;
  v16 = -1LL;
  v33 = 512;
  v36 = 4LL;
  v17 = 10;
  v38 = 16LL;
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a6[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v40 = v19;
  v41 = 0;
  if ( !a6 )
    v15 = L"NULL";
  v20 = 5;
  v39 = v15;
  v21 = a7;
  if ( a7 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a7[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v43 = v23;
  v24 = a8;
  if ( !a7 )
    v21 = "NULL";
  v44 = 0;
  v42 = v21;
  v25 = a8 == 0LL;
  if ( a8 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a8[v26] );
    v17 = 2 * v26 + 2;
    v25 = a8 == 0LL;
  }
  v46 = v17;
  v48 = &a9;
  if ( v25 )
    v24 = L"NULL";
  v45 = v24;
  v50 = &a10;
  v27 = a11;
  v47 = 0;
  v49 = 2LL;
  v51 = 2LL;
  if ( a11 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a11[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v53 = v29;
  v54 = 0;
  if ( !a11 )
    v27 = "NULL";
  v52 = v27;
  v30 = a12;
  v31 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v16;
    while ( a12[v16] );
    v20 = v16 + 1;
    v31 = a12 == 0LL;
  }
  if ( v31 )
    v30 = "NULL";
  v56 = v20;
  v55 = v30;
  v58 = &a13;
  v57 = 0;
  v60 = &v33;
  v62 = a15;
  v59 = 8LL;
  v61 = 4LL;
  v63 = 512LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v30, &EventNVMeErrorRecoveryLog, 0LL, 0xDu, &v34);
}
