/*
 * XREFs of McTemplateK0j_EtwWriteTransfer @ 0x1400D473C
 * Callers:
 *     ndisNsiClientParameterChangeHandler @ 0x140163420 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140009290 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0j_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  v6 = a4;
  v7 = 16LL;
  return McGenEventWrite_EtwWriteTransfer(
           NDIS_PROVIDER_ID_Context,
           &ChangeNotificationNetwork,
           (const GUID *)&NDIS_PROVIDER_ID,
           2u,
           &v5);
}
