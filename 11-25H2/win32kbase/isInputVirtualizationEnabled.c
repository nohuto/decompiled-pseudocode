/*
 * XREFs of isInputVirtualizationEnabled @ 0x1400CF034
 * Callers:
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1400CEC70 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1400CECC0 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     IVStartupWorkerThread @ 0x1400CED18 (IVStartupWorkerThread.c)
 *     InputUnInitialize @ 0x1400CED9C (InputUnInitialize.c)
 *     CleanupLogonProcess @ 0x14016BCA0 (CleanupLogonProcess.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x14018C0A0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x14018C0E0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140213C60 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1402146D0 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

bool __fastcall isInputVirtualizationEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v5; // ebx

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19448) )
    return 0;
  v5 = *(_DWORD *)(W32GetUserSessionState(v3, v2) + 19452);
  return (unsigned int)W32GetCurrentWin32kSessionId() == v5;
}
