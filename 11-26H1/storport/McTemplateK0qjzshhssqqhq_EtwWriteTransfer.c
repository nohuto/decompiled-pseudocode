/*
 * XREFs of McTemplateK0qjzshhssqqhq_EtwWriteTransfer @ 0x14012D584
 * Callers:
 *     StorLogDLRMUpdateLinkInfo @ 0x14012EAF0 (StorLogDLRMUpdateLinkInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhssqqhq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  const wchar_t *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // edx
  int v20; // r8d
  const char *v21; // rcx
  __int64 v22; // rdx
  int v23; // edx
  const char *v24; // rcx
  __int64 v25; // rdx
  int v26; // edx
  const char *v27; // rcx
  bool v28; // zf
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-D0h] BYREF
  int *v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  const wchar_t *v35; // [rsp+60h] [rbp-A0h]
  int v36; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+6Ch] [rbp-94h]
  const char *v38; // [rsp+70h] [rbp-90h]
  int v39; // [rsp+78h] [rbp-88h]
  int v40; // [rsp+7Ch] [rbp-84h]
  char *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  char *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  const char *v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  const char *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  char *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  char *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  char *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  char *v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  int v59; // [rsp+138h] [rbp+38h] BYREF

  v59 = a4;
  v15 = a6;
  v31 = &v59;
  v33 = a5;
  v17 = -1LL;
  v32 = 4LL;
  v34 = 16LL;
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
  v36 = v19;
  v37 = 0;
  if ( !a6 )
    v15 = L"NULL";
  v20 = 5;
  v35 = v15;
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
  v39 = v23;
  v40 = 0;
  if ( !a7 )
    v21 = "NULL";
  v42 = 2LL;
  v38 = v21;
  v41 = &a8;
  v43 = &a9;
  v24 = a10;
  v44 = 2LL;
  if ( a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a10[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v46 = v26;
  v47 = 0;
  if ( !a10 )
    v24 = "NULL";
  v45 = v24;
  v27 = a11;
  v28 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v17;
    while ( a11[v17] );
    v20 = v17 + 1;
    v28 = a11 == 0LL;
  }
  if ( v28 )
    v27 = "NULL";
  v49 = v20;
  v50 = 0;
  v51 = &a12;
  v48 = v27;
  v53 = &a13;
  v52 = 4LL;
  v55 = &a14;
  v54 = 4LL;
  v57 = &a15;
  v56 = 2LL;
  v58 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v27, a2, 0LL, 0xDu, &v30);
}
