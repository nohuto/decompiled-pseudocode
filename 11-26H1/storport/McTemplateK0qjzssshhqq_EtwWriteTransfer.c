/*
 * XREFs of McTemplateK0qjzssshhqq_EtwWriteTransfer @ 0x14005D718
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14006218C (RaidAdapterHwFirmwareActivateIoctl.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzssshhqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        char a10,
        char a11,
        char a12,
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
  bool v25; // zf
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-B1h] BYREF
  int *v28; // [rsp+40h] [rbp-A1h]
  __int64 v29; // [rsp+48h] [rbp-99h]
  __int64 v30; // [rsp+50h] [rbp-91h]
  __int64 v31; // [rsp+58h] [rbp-89h]
  const wchar_t *v32; // [rsp+60h] [rbp-81h]
  int v33; // [rsp+68h] [rbp-79h]
  int v34; // [rsp+6Ch] [rbp-75h]
  const char *v35; // [rsp+70h] [rbp-71h]
  int v36; // [rsp+78h] [rbp-69h]
  int v37; // [rsp+7Ch] [rbp-65h]
  const char *v38; // [rsp+80h] [rbp-61h]
  int v39; // [rsp+88h] [rbp-59h]
  int v40; // [rsp+8Ch] [rbp-55h]
  const char *v41; // [rsp+90h] [rbp-51h]
  int v42; // [rsp+98h] [rbp-49h]
  int v43; // [rsp+9Ch] [rbp-45h]
  char *v44; // [rsp+A0h] [rbp-41h]
  __int64 v45; // [rsp+A8h] [rbp-39h]
  char *v46; // [rsp+B0h] [rbp-31h]
  __int64 v47; // [rsp+B8h] [rbp-29h]
  char *v48; // [rsp+C0h] [rbp-21h]
  __int64 v49; // [rsp+C8h] [rbp-19h]
  char *v50; // [rsp+D0h] [rbp-11h]
  __int64 v51; // [rsp+D8h] [rbp-9h]
  int v52; // [rsp+118h] [rbp+37h] BYREF

  v52 = a4;
  v13 = a6;
  v28 = &v52;
  v30 = a5;
  v14 = -1LL;
  v29 = 4LL;
  v31 = 16LL;
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
  v33 = v16;
  v34 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v17 = 5;
  v32 = v13;
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
  v36 = v20;
  v37 = 0;
  if ( !a7 )
    v18 = "NULL";
  v35 = v18;
  v21 = a8;
  if ( a8 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a8[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v39 = v23;
  v40 = 0;
  if ( !a8 )
    v21 = "NULL";
  v38 = v21;
  v24 = a9;
  v25 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v14;
    while ( a9[v14] );
    v17 = v14 + 1;
    v25 = a9 == 0LL;
  }
  if ( v25 )
    v24 = "NULL";
  v42 = v17;
  v43 = 0;
  v44 = &a10;
  v41 = v24;
  v46 = &a11;
  v45 = 2LL;
  v48 = &a12;
  v47 = 2LL;
  v50 = &a13;
  v49 = 4LL;
  v51 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v24, &EventFirmwareActivate, 0LL, 0xBu, &v27);
}
