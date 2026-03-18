/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x14003380C
 * Callers:
 *     Controller_D0ExitSaveState @ 0x14002D350 (Controller_D0ExitSaveState.c)
 *     Controller_D0EntryRestoreState @ 0x140039BB0 (Controller_D0EntryRestoreState.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000EF70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0p_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  v6 = 8LL;
  va_copy(v5, va);
  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 2u, &v4);
}
