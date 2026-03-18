/*
 * XREFs of ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x140055890
 * Callers:
 *     DxgkGetPathsModality @ 0x14031B1E0 (DxgkGetPathsModality.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+58h] [rbp-30h]
  __int128 v5; // [rsp+60h] [rbp-28h]

  v3[0] = a2;
  v3[1] = 0;
  v4 = *a1;
  v5 = 0LL;
  result = DxgkStatusChangeNotify(v3);
  if ( (int)result < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1559;
    return DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 1559LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
