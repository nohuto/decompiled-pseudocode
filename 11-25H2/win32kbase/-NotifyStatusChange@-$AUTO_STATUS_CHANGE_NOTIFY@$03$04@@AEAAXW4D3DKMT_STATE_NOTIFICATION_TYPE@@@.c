/*
 * XREFs of ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$03$04@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x140143FE0
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AUTO_STATUS_CHANGE_NOTIFY<4,5>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 DxgkWin32kInterface; // rax
  __int64 result; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+30h] [rbp-28h]

  v4[0] = a2;
  v4[1] = 0;
  v5 = *a1;
  v6 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  result = (*(__int64 (__fastcall **)(_DWORD *))(DxgkWin32kInterface + 416))(v4);
  if ( (int)result < 0 )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 273;
  }
  return result;
}
