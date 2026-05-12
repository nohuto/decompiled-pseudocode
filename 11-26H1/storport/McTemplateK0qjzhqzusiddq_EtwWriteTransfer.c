/*
 * XREFs of McTemplateK0qjzhqzusiddq_EtwWriteTransfer @ 0x1400D1CFC
 * Callers:
 *     NvmeAdapterCompleteInitialization @ 0x1400D3950 (NvmeAdapterCompleteInitialization.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzhqzusiddq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8,
        const wchar_t *a9,
        char a10,
        const char *a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  const wchar_t *v15; // rcx
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // edx
  const wchar_t *v20; // rcx
  bool v21; // zf
  __int64 v22; // rdx
  const char *v23; // rcx
  int v24; // eax
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-D0h] BYREF
  int *v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  const wchar_t *v31; // [rsp+60h] [rbp-A0h]
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  char *v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  char *v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  const wchar_t *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  char *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  const char *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  char *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  char *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  char *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  char *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  int v54; // [rsp+138h] [rbp+38h] BYREF

  v54 = a4;
  v15 = a6;
  v27 = &v54;
  v29 = a5;
  v16 = -1LL;
  v28 = 4LL;
  v30 = 16LL;
  v17 = 10;
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
  v32 = v19;
  v33 = 0;
  if ( !a6 )
    v15 = L"NULL";
  v35 = 2LL;
  v31 = v15;
  v34 = &a7;
  v36 = &a8;
  v20 = a9;
  v37 = 4LL;
  v21 = a9 == 0LL;
  if ( a9 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a9[v22] );
    v17 = 2 * v22 + 2;
    v21 = a9 == 0LL;
  }
  if ( v21 )
    v20 = L"NULL";
  v39 = v17;
  v38 = v20;
  v41 = &a10;
  v23 = a11;
  v40 = 0;
  v42 = 1LL;
  if ( a11 )
  {
    do
      ++v16;
    while ( a11[v16] );
    v24 = v16 + 1;
  }
  else
  {
    v24 = 5;
  }
  v44 = v24;
  v45 = 0;
  v46 = &a12;
  v47 = 8LL;
  v48 = &a13;
  if ( !a11 )
    v23 = "NULL";
  v43 = v23;
  v50 = &a14;
  v49 = 4LL;
  v52 = &a15;
  v51 = 4LL;
  v53 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v23, &EventNVMeAdapterCompleteInitialization, 0LL, 0xDu, &v26);
}
