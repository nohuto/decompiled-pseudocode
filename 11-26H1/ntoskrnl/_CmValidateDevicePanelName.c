/*
 * XREFs of _CmValidateDevicePanelName @ 0x1408A146C
 * Callers:
 *     _CmGetDevicePanelRegKeyPath @ 0x1408A0C74 (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpDispatchDevicePanel @ 0x1408A2B60 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x140B5FC88 (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmValidateDevicePanelName(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  GUID Guid; // [rsp+28h] [rbp-20h] BYREF

  Guid = 0LL;
  result = CmSplitDevicePanelId(a2, &Guid);
  if ( (int)result < 0 )
    return 3221225523LL;
  return result;
}
