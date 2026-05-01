/*
 * XREFs of ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1802BFCB0
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801C967C (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18022E25C (-_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?VerifyCallingProcessIsTrustedHandlerForUriScheme@ProtocolLauncher@Utils@@QEAAXXZ @ 0x1805D5BC0 (-VerifyCallingProcessIsTrustedHandlerForUriScheme@ProtocolLauncher@Utils@@QEAAXXZ.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180653C0C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800B733C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B6B38 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1801DF1C8 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetCallingProcessAppId(CallerIdentity *this, unsigned __int16 **a2)
{
  int CallingProcessHandle; // ebx
  unsigned __int16 **v4; // r8
  char *v5; // rcx
  int ProcessAppId; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle((__int64)this, 1, &hObject);
  if ( CallingProcessHandle >= 0 )
  {
    ProcessAppId = CallerIdentity::GetProcessAppId(hObject, this, v4);
    CallingProcessHandle = ProcessAppId;
    if ( ProcessAppId == -2147023728 || ProcessAppId == -2147024891 )
    {
      CAutoHandle<void *>::~CAutoHandle<void *>(&hObject);
    }
    else
    {
      if ( ProcessAppId >= 0 )
      {
        CAutoHandle<void *>::~CAutoHandle<void *>(&hObject);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE8,
        (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)(unsigned int)ProcessAppId);
      CAutoHandle<void *>::~CAutoHandle<void *>(&hObject);
    }
  }
  else
  {
    v5 = (char *)hObject;
    hObject = 0LL;
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v5);
  }
  return (unsigned int)CallingProcessHandle;
}
