/*
 * XREFs of ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z @ 0x1801D2098
 * Callers:
 *     ?AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ @ 0x1802E9CA0 (-AllowSetForegroundWindow@CTrustedComponentForegroundControl@@EEAAJXZ.c)
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1801D2138 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessType(CallerIdentity *this, enum PROCESS_UICONTEXT *a2)
{
  int CallingProcessHandle; // eax
  unsigned int v4; // ebx
  HANDLE CurrentProcess; // rax
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, 0LL, &hObject);
  v4 = CallingProcessHandle;
  if ( CallingProcessHandle >= 0 )
  {
    CurrentProcess = hObject;
  }
  else
  {
    if ( CallingProcessHandle != -2147417833 )
      return v4;
    CurrentProcess = GetCurrentProcess();
    hObject = CurrentProcess;
  }
  v8 = 0LL;
  if ( (unsigned int)GetProcessUIContextInformation(CurrentProcess, &v8) )
  {
    v4 = 0;
    *(_DWORD *)this = v8;
  }
  else
  {
    v4 = -2147024890;
  }
  CloseHandle(hObject);
  return v4;
}
