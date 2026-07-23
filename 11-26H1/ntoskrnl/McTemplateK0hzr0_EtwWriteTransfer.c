/*
 * XREFs of McTemplateK0hzr0_EtwWriteTransfer @ 0x1405CE054
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140446FF4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140799330 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0hzr0_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int16 a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int16 *v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int16 v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  v8 = 2LL;
  v7 = (__int16 *)&v12;
  v9 = a5;
  v11 = 0;
  v10 = 2 * a4;
  return McGenEventWrite_EtwWriteTransfer(
           IoMgrProvider_Context,
           (const EVENT_DESCRIPTOR *)IoMgr_LegacyFsFilterBlockedByPolicy,
           a3,
           3u,
           &v6);
}
