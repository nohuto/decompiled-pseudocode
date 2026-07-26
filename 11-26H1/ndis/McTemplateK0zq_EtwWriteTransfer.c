/*
 * XREFs of McTemplateK0zq_EtwWriteTransfer @ 0x14008C780
 * Callers:
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x140078BD0 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140009290 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        char a5)
{
  __int64 v5; // rax
  int v7; // eax
  _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+4Ch] [rbp-2Ch]
  char *v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    while ( a4[++v5] != 0 )
      ;
    v7 = 2 * v5 + 2;
  }
  else
  {
    v7 = 10;
  }
  v11 = v7;
  v14 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v13 = &a5;
  v12 = 0;
  v10 = a4;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, (const GUID *)&NDIS_PROVIDER_ID, 3u, &v9);
}
