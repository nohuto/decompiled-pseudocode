/*
 * XREFs of ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x1801F14A0
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18008E6C8 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1802F2D7C (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x1801F1530 (-CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCapabilityFromWindow(
        CallerIdentity *this,
        HWND a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  char *v6; // r9
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF

  *(_BYTE *)a3 = 0;
  dwProcessId = 0;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x14,
             (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window_capability.cpp",
             v6);
  v8 = CallerIdentity::CheckProcessCapability(dwProcessId, a2, a3, (bool *)v6);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16,
    (int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window_capability.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
