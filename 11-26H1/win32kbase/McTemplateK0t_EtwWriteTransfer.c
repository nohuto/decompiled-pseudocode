/*
 * XREFs of McTemplateK0t_EtwWriteTransfer @ 0x14013D5B4
 * Callers:
 *     EtwTraceTouchPadCurtainState @ 0x14013D590 (EtwTraceTouchPadCurtainState.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0t_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = 4LL;
  v6 = &v8;
  return McGenEventWrite_EtwWriteTransfer(a1, &TouchPadCurtainState, &W32kControlGuid, 2u, &v5);
}
