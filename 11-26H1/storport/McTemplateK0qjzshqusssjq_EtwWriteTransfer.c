/*
 * XREFs of McTemplateK0qjzshqusssjq_EtwWriteTransfer @ 0x140100014
 * Callers:
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401AF2A0 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqusssjq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        const char *a13,
        __int64 a14,
        char a15)
{
  const wchar_t *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // edx
  const char *v19; // rdx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // ecx
  const char *v23; // rcx
  __int64 v24; // rdx
  int v25; // edx
  const char *v26; // rcx
  __int64 v27; // rdx
  int v28; // edx
  const char *v29; // rcx
  bool v30; // zf
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  int *v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  const wchar_t *v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+6Ch] [rbp-94h]
  const char *v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+7Ch] [rbp-84h]
  char *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  char *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  char *v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  const char *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  const char *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  const char *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  __int64 v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  char *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  int v62; // [rsp+138h] [rbp+38h] BYREF

  v62 = a4;
  v15 = a6;
  v33 = &v62;
  v35 = a5;
  v16 = -1LL;
  v34 = 4LL;
  v36 = 16LL;
  if ( a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a6[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v38 = v18;
  v19 = a7;
  if ( !a6 )
    v15 = L"NULL";
  v39 = 0;
  v37 = v15;
  v20 = 5;
  if ( a7 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a7[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v41 = v22;
  v42 = 0;
  v43 = &a8;
  v44 = 2LL;
  v45 = &a9;
  if ( !a7 )
    v19 = "NULL";
  v40 = v19;
  v47 = &a10;
  v23 = a11;
  v46 = 4LL;
  v48 = 1LL;
  if ( a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a11[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v50 = v25;
  v51 = 0;
  if ( !a11 )
    v23 = "NULL";
  v49 = v23;
  v26 = a12;
  if ( a12 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a12[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v53 = v28;
  v54 = 0;
  if ( !a12 )
    v26 = "NULL";
  v52 = v26;
  v29 = a13;
  v30 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v16;
    while ( a13[v16] );
    v20 = v16 + 1;
    v30 = a13 == 0LL;
  }
  v58 = a14;
  if ( v30 )
    v29 = "NULL";
  v56 = v20;
  v60 = &a15;
  v57 = 0;
  v55 = v29;
  v59 = 16LL;
  v61 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v29, &EventNVMeNamespaceSurpriseRemoved, 0LL, 0xDu, &v32);
}
