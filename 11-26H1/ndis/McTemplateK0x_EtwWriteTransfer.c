/*
 * XREFs of McTemplateK0x_EtwWriteTransfer @ 0x1400710B0
 * Callers:
 *     ndisWnfPdcCallback @ 0x140066C10 (ndisWnfPdcCallback.c)
 *     ndisNsiClientParameterChangeHandler @ 0x140163420 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140009290 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0x_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  v6 = 8LL;
  va_copy(v5, va);
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 2u, &v4);
}
