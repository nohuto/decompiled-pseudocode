/*
 * XREFs of McTemplateK0qjzshsssst_EtwWriteTransfer @ 0x1400D24C8
 * Callers:
 *     NvmeAdapterAddSubsystemPortMiniport @ 0x1400D2D7C (NvmeAdapterAddSubsystemPortMiniport.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400D41C0 (NvmeAdapterCreateAddSubsystemPort.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshsssst_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        const char *a9,
        const char *a10,
        const char *a11,
        const char *a12,
        char a13)
{
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r8d
  const char *v18; // rcx
  __int64 v19; // rdx
  int v20; // edx
  const char *v21; // rcx
  __int64 v22; // rdx
  int v23; // edx
  const char *v24; // rcx
  __int64 v25; // rdx
  int v26; // edx
  const char *v27; // rcx
  __int64 v28; // rdx
  int v29; // edx
  const char *v30; // rcx
  bool v31; // zf
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-B1h] BYREF
  int *v34; // [rsp+40h] [rbp-A1h]
  __int64 v35; // [rsp+48h] [rbp-99h]
  __int64 v36; // [rsp+50h] [rbp-91h]
  __int64 v37; // [rsp+58h] [rbp-89h]
  const wchar_t *v38; // [rsp+60h] [rbp-81h]
  int v39; // [rsp+68h] [rbp-79h]
  int v40; // [rsp+6Ch] [rbp-75h]
  const char *v41; // [rsp+70h] [rbp-71h]
  int v42; // [rsp+78h] [rbp-69h]
  int v43; // [rsp+7Ch] [rbp-65h]
  char *v44; // [rsp+80h] [rbp-61h]
  __int64 v45; // [rsp+88h] [rbp-59h]
  const char *v46; // [rsp+90h] [rbp-51h]
  int v47; // [rsp+98h] [rbp-49h]
  int v48; // [rsp+9Ch] [rbp-45h]
  const char *v49; // [rsp+A0h] [rbp-41h]
  int v50; // [rsp+A8h] [rbp-39h]
  int v51; // [rsp+ACh] [rbp-35h]
  const char *v52; // [rsp+B0h] [rbp-31h]
  int v53; // [rsp+B8h] [rbp-29h]
  int v54; // [rsp+BCh] [rbp-25h]
  const char *v55; // [rsp+C0h] [rbp-21h]
  int v56; // [rsp+C8h] [rbp-19h]
  int v57; // [rsp+CCh] [rbp-15h]
  char *v58; // [rsp+D0h] [rbp-11h]
  __int64 v59; // [rsp+D8h] [rbp-9h]
  int v60; // [rsp+118h] [rbp+37h] BYREF

  v60 = a4;
  v13 = a6;
  v34 = &v60;
  v36 = a5;
  v14 = -1LL;
  v35 = 4LL;
  v37 = 16LL;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a6[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v39 = v16;
  v40 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v17 = 5;
  v38 = v13;
  v18 = a7;
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5;
  }
  v42 = v20;
  v43 = 0;
  if ( !a7 )
    v18 = "NULL";
  v45 = 2LL;
  v41 = v18;
  v44 = &a8;
  v21 = a9;
  if ( a9 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a9[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v47 = v23;
  v48 = 0;
  if ( !a9 )
    v21 = "NULL";
  v46 = v21;
  v24 = a10;
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
  v50 = v26;
  v51 = 0;
  if ( !a10 )
    v24 = "NULL";
  v49 = v24;
  v27 = a11;
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
      ++v14;
    while ( a12[v14] );
    v17 = v14 + 1;
    v31 = a12 == 0LL;
  }
  if ( v31 )
    v30 = "NULL";
  v56 = v17;
  v57 = 0;
  v58 = &a13;
  v55 = v30;
  v59 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v30, &EventNVMeoFSubsystemPortAdded, 0LL, 0xBu, &v33);
}
