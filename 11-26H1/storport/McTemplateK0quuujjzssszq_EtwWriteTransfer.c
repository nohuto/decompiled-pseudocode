/*
 * XREFs of McTemplateK0quuujjzssszq_EtwWriteTransfer @ 0x14008C4F0
 * Callers:
 *     TcglibEalLogCommandStatus @ 0x14008D4A4 (TcglibEalLogCommandStatus.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszq_EtwWriteTransfer(
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
        char a15)
{
  const wchar_t *v15; // rdx
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  const char *v20; // rcx
  int v21; // r8d
  __int64 v22; // rdx
  int v23; // edx
  const char *v24; // rcx
  __int64 v25; // rdx
  int v26; // edx
  const char *v27; // rcx
  bool v28; // zf
  __int64 v29; // rdx
  const wchar_t *v30; // rcx
  bool v31; // zf
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-D0h] BYREF
  int *v34; // [rsp+40h] [rbp-C0h]
  __int64 v35; // [rsp+48h] [rbp-B8h]
  char *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  char *v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  char *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  const wchar_t *v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+ACh] [rbp-54h]
  const char *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  const char *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  const char *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  const wchar_t *v58; // [rsp+E0h] [rbp-20h]
  int v59; // [rsp+E8h] [rbp-18h]
  int v60; // [rsp+ECh] [rbp-14h]
  char *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  int v63; // [rsp+138h] [rbp+38h] BYREF

  v63 = a4;
  v15 = a10;
  v34 = &v63;
  v35 = 4LL;
  v36 = &a5;
  v38 = &a6;
  v40 = &a7;
  v16 = 10;
  v42 = a8;
  v44 = a9;
  v17 = -1LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 16LL;
  v45 = 16LL;
  if ( a10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a10[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v47 = v19;
  v20 = a11;
  if ( !a10 )
    v15 = L"NULL";
  v48 = 0;
  v46 = v15;
  v21 = 5;
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
  v50 = v23;
  v51 = 0;
  if ( !a11 )
    v20 = "NULL";
  v49 = v20;
  v24 = a12;
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
  v53 = v26;
  v54 = 0;
  if ( !a12 )
    v24 = "NULL";
  v52 = v24;
  v27 = a13;
  v28 = a13 == 0LL;
  if ( a13 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a13[v29] );
    v21 = v29 + 1;
    v28 = a13 == 0LL;
  }
  if ( v28 )
    v27 = "NULL";
  v56 = v21;
  v55 = v27;
  v30 = a14;
  v57 = 0;
  v31 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v17;
    while ( a14[v17] );
    v16 = 2 * v17 + 2;
    v31 = a14 == 0LL;
  }
  if ( v31 )
    v30 = L"NULL";
  v59 = v16;
  v58 = v30;
  v61 = &a15;
  v60 = 0;
  v62 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v30, &EventTcgCommandStatus, 0LL, 0xDu, &v33);
}
