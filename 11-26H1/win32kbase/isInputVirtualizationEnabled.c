/*
 * XREFs of isInputVirtualizationEnabled @ 0x140117990
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x140117750 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     IVStartupWorkerThread @ 0x1401177AC (IVStartupWorkerThread.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x140117830 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     InputUnInitialize @ 0x140117884 (InputUnInitialize.c)
 *     CleanupLogonProcess @ 0x1401D96E0 (CleanupLogonProcess.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140219890 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1402198D0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140219CA0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x14021A330 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

bool __fastcall isInputVirtualizationEnabled(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v7; // ebx
  __int64 v8; // rcx

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 19480) )
    return 0;
  v7 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 19484);
  return (unsigned int)W32GetCurrentWin32kSessionId(v8) == v7;
}
