/*
 * XREFs of McTemplateK0zjquuujsss_EtwWriteTransfer @ 0x14007E8D0
 * Callers:
 *     RaidUnitMaintenanceTime @ 0x1400809B4 (RaidUnitMaintenanceTime.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zjquuujsss_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13)
{
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // r8d
  const char *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  const char *v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  const char *v23; // rax
  bool v24; // zf
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-B1h] BYREF
  const wchar_t *v27; // [rsp+40h] [rbp-A1h]
  int v28; // [rsp+48h] [rbp-99h]
  int v29; // [rsp+4Ch] [rbp-95h]
  __int64 v30; // [rsp+50h] [rbp-91h]
  __int64 v31; // [rsp+58h] [rbp-89h]
  char *v32; // [rsp+60h] [rbp-81h]
  __int64 v33; // [rsp+68h] [rbp-79h]
  char *v34; // [rsp+70h] [rbp-71h]
  __int64 v35; // [rsp+78h] [rbp-69h]
  char *v36; // [rsp+80h] [rbp-61h]
  __int64 v37; // [rsp+88h] [rbp-59h]
  char *v38; // [rsp+90h] [rbp-51h]
  __int64 v39; // [rsp+98h] [rbp-49h]
  __int64 v40; // [rsp+A0h] [rbp-41h]
  __int64 v41; // [rsp+A8h] [rbp-39h]
  const char *v42; // [rsp+B0h] [rbp-31h]
  int v43; // [rsp+B8h] [rbp-29h]
  int v44; // [rsp+BCh] [rbp-25h]
  const char *v45; // [rsp+C0h] [rbp-21h]
  int v46; // [rsp+C8h] [rbp-19h]
  int v47; // [rsp+CCh] [rbp-15h]
  const char *v48; // [rsp+D0h] [rbp-11h]
  int v49; // [rsp+D8h] [rbp-9h]
  int v50; // [rsp+DCh] [rbp-5h]

  v13 = -1LL;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v28 = v15;
  v30 = a5;
  v16 = 5;
  if ( !a4 )
    a4 = L"NULL";
  v29 = 0;
  v17 = a11;
  v32 = &a6;
  v34 = &a7;
  v36 = &a8;
  v38 = &a9;
  v40 = a10;
  v27 = a4;
  v31 = 16LL;
  v33 = 4LL;
  v35 = 1LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 16LL;
  if ( a11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a11[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5;
  }
  v43 = v19;
  v20 = a12;
  if ( !a11 )
    v17 = "NULL";
  v44 = 0;
  v42 = v17;
  if ( a12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a12[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v46 = v22;
  v47 = 0;
  if ( !a12 )
    v20 = "NULL";
  v45 = v20;
  v23 = a13;
  v24 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v13;
    while ( a13[v13] );
    v16 = v13 + 1;
    v24 = a13 == 0LL;
  }
  if ( v24 )
    v23 = "NULL";
  v49 = v16;
  v48 = v23;
  v50 = 0;
  return McGenEventWrite_EtwWriteTransfer(v13, &EventUnitMaintenanceStartOperational, 0LL, 0xBu, &v26);
}
