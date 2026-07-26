/*
 * XREFs of McTemplateK0qxqqq_EtwWriteTransfer @ 0x14006E5C0
 * Callers:
 *     ndisNsiClientParameterChangeHandler @ 0x140163420 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140009290 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qxqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-78h] BYREF
  int *v10; // [rsp+40h] [rbp-68h]
  __int64 v11; // [rsp+48h] [rbp-60h]
  __int64 *v12; // [rsp+50h] [rbp-58h]
  __int64 v13; // [rsp+58h] [rbp-50h]
  __int64 *v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  __int64 *v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp-30h]
  __int64 *v18; // [rsp+80h] [rbp-28h]
  __int64 v19; // [rsp+88h] [rbp-20h]
  int v20; // [rsp+C8h] [rbp+20h] BYREF

  v20 = a4;
  v11 = 4LL;
  v10 = &v20;
  v13 = 8LL;
  v12 = &a5;
  v15 = 4LL;
  v14 = &a6;
  v17 = 4LL;
  v16 = &a7;
  v19 = 4LL;
  v18 = &a8;
  return McGenEventWrite_EtwWriteTransfer(
           NDIS_PROVIDER_ID_Context,
           &ChangeNotificationInterfaceInfo,
           (const GUID *)&NDIS_PROVIDER_ID,
           6u,
           &v9);
}
