/*
 * XREFs of McTemplateK0qjzszhhssq_EtwWriteTransfer @ 0x14005D8B0
 * Callers:
 *     StorLogRegisterMFNDInterface @ 0x14006F134 (StorLogRegisterMFNDInterface.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssq_EtwWriteTransfer(
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
        char a13)
{
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rdx
  int v17; // edx
  int v18; // r8d
  const char *v19; // rcx
  __int64 v20; // rdx
  int v21; // edx
  const wchar_t *v22; // rdx
  bool v23; // zf
  __int64 v24; // rcx
  const char *v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  const char *v28; // rcx
  bool v29; // zf
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+30h] [rbp-B1h] BYREF
  int *v32; // [rsp+40h] [rbp-A1h]
  __int64 v33; // [rsp+48h] [rbp-99h]
  __int64 v34; // [rsp+50h] [rbp-91h]
  __int64 v35; // [rsp+58h] [rbp-89h]
  const wchar_t *v36; // [rsp+60h] [rbp-81h]
  int v37; // [rsp+68h] [rbp-79h]
  int v38; // [rsp+6Ch] [rbp-75h]
  const char *v39; // [rsp+70h] [rbp-71h]
  int v40; // [rsp+78h] [rbp-69h]
  int v41; // [rsp+7Ch] [rbp-65h]
  const wchar_t *v42; // [rsp+80h] [rbp-61h]
  int v43; // [rsp+88h] [rbp-59h]
  int v44; // [rsp+8Ch] [rbp-55h]
  char *v45; // [rsp+90h] [rbp-51h]
  __int64 v46; // [rsp+98h] [rbp-49h]
  char *v47; // [rsp+A0h] [rbp-41h]
  __int64 v48; // [rsp+A8h] [rbp-39h]
  const char *v49; // [rsp+B0h] [rbp-31h]
  int v50; // [rsp+B8h] [rbp-29h]
  int v51; // [rsp+BCh] [rbp-25h]
  const char *v52; // [rsp+C0h] [rbp-21h]
  int v53; // [rsp+C8h] [rbp-19h]
  int v54; // [rsp+CCh] [rbp-15h]
  char *v55; // [rsp+D0h] [rbp-11h]
  __int64 v56; // [rsp+D8h] [rbp-9h]
  int v57; // [rsp+118h] [rbp+37h] BYREF

  v57 = a4;
  v13 = a6;
  v32 = &v57;
  v34 = a5;
  v14 = -1LL;
  v33 = 4LL;
  v35 = 16LL;
  v15 = 10;
  if ( a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a6[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v37 = v17;
  v38 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v18 = 5;
  v36 = v13;
  v19 = a7;
  if ( a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v40 = v21;
  v22 = a8;
  if ( !a7 )
    v19 = "NULL";
  v41 = 0;
  v39 = v19;
  v23 = a8 == 0LL;
  if ( a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a8[v24] );
    v15 = 2 * v24 + 2;
    v23 = a8 == 0LL;
  }
  if ( v23 )
    v22 = L"NULL";
  v43 = v15;
  v42 = v22;
  v25 = a11;
  v45 = &a9;
  v44 = 0;
  v46 = 2LL;
  v47 = &a10;
  v48 = 2LL;
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
  v50 = v27;
  v28 = a12;
  if ( !a11 )
    v25 = "NULL";
  v51 = 0;
  v49 = v25;
  v29 = a12 == 0LL;
  if ( a12 )
  {
    do
      ++v14;
    while ( a12[v14] );
    v18 = v14 + 1;
    v29 = a12 == 0LL;
  }
  if ( v29 )
    v28 = "NULL";
  v53 = v18;
  v52 = v28;
  v55 = &a13;
  v54 = 0;
  v56 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v28, &EventRegisterMFNDInterface, 0LL, 0xBu, &v31);
}
