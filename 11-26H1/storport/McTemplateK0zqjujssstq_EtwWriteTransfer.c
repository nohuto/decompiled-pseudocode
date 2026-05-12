/*
 * XREFs of McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1400980E4
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x140034050 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitRequestTimeout @ 0x1400346C8 (RaidUnitRequestTimeout.c)
 *     RaUnitResetBusSrb @ 0x14009F0B0 (RaUnitResetBusSrb.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1400A13C0 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1400A6A10 (RaidUnitAbortHierarchicalResetWorkItem.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjujssstq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        __int64 a8,
        const char *a9,
        const char *a10,
        const char *a11,
        char a12,
        char a13)
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
  char *v30; // [rsp+50h] [rbp-91h]
  __int64 v31; // [rsp+58h] [rbp-89h]
  __int64 v32; // [rsp+60h] [rbp-81h]
  __int64 v33; // [rsp+68h] [rbp-79h]
  char *v34; // [rsp+70h] [rbp-71h]
  __int64 v35; // [rsp+78h] [rbp-69h]
  __int64 v36; // [rsp+80h] [rbp-61h]
  __int64 v37; // [rsp+88h] [rbp-59h]
  const char *v38; // [rsp+90h] [rbp-51h]
  int v39; // [rsp+98h] [rbp-49h]
  int v40; // [rsp+9Ch] [rbp-45h]
  const char *v41; // [rsp+A0h] [rbp-41h]
  int v42; // [rsp+A8h] [rbp-39h]
  int v43; // [rsp+ACh] [rbp-35h]
  const char *v44; // [rsp+B0h] [rbp-31h]
  int v45; // [rsp+B8h] [rbp-29h]
  int v46; // [rsp+BCh] [rbp-25h]
  char *v47; // [rsp+C0h] [rbp-21h]
  __int64 v48; // [rsp+C8h] [rbp-19h]
  char *v49; // [rsp+D0h] [rbp-11h]
  __int64 v50; // [rsp+D8h] [rbp-9h]

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
  v29 = 0;
  v30 = &a5;
  v16 = 5;
  if ( !a4 )
    a4 = L"NULL";
  v32 = a6;
  v17 = a9;
  v34 = &a7;
  v36 = a8;
  v27 = a4;
  v31 = 4LL;
  v33 = 16LL;
  v35 = 1LL;
  v37 = 16LL;
  if ( a9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a9[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5;
  }
  v39 = v19;
  v20 = a10;
  if ( !a9 )
    v17 = "NULL";
  v40 = 0;
  v38 = v17;
  if ( a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a10[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v42 = v22;
  v43 = 0;
  if ( !a10 )
    v20 = "NULL";
  v41 = v20;
  v23 = a11;
  v24 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v13;
    while ( a11[v13] );
    v16 = v13 + 1;
    v24 = a11 == 0LL;
  }
  if ( v24 )
    v23 = "NULL";
  v45 = v16;
  v44 = v23;
  v46 = 0;
  v47 = &a12;
  v48 = 4LL;
  v49 = &a13;
  v50 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v13, &EventBusReset, 0LL, 0xBu, &v26);
}
