/*
 * XREFs of McTemplateK0qqsz_EtwWriteTransfer @ 0x140062B60
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402FB050 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqsz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const char *a6,
        const wchar_t *a7)
{
  __int64 v7; // rcx
  const char *v8; // rax
  __int64 v9; // rdx
  int v10; // edx
  const wchar_t *v11; // rax
  int v12; // ecx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-21h] BYREF
  int *v15; // [rsp+40h] [rbp-11h]
  __int64 v16; // [rsp+48h] [rbp-9h]
  char *v17; // [rsp+50h] [rbp-1h]
  __int64 v18; // [rsp+58h] [rbp+7h]
  const char *v19; // [rsp+60h] [rbp+Fh]
  int v20; // [rsp+68h] [rbp+17h]
  int v21; // [rsp+6Ch] [rbp+1Bh]
  const wchar_t *v22; // [rsp+70h] [rbp+1Fh]
  int v23; // [rsp+78h] [rbp+27h]
  int v24; // [rsp+7Ch] [rbp+2Bh]
  int v25; // [rsp+B8h] [rbp+67h] BYREF

  v25 = a4;
  v16 = 4LL;
  v15 = &v25;
  v18 = 4LL;
  v17 = &a5;
  v7 = -1LL;
  v8 = a6;
  if ( a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a6[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5;
  }
  v20 = v10;
  v21 = 0;
  if ( !a6 )
    v8 = "NULL";
  v19 = v8;
  v11 = a7;
  if ( a7 )
  {
    do
      ++v7;
    while ( a7[v7] );
    v12 = 2 * v7 + 2;
  }
  else
  {
    v12 = 10;
  }
  v23 = v12;
  v24 = 0;
  if ( !a7 )
    v11 = L"NULL";
  v22 = v11;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &DripsBlockerTracking_AddProcessEntry,
           (__int64)"NULL",
           5u,
           &v14);
}
