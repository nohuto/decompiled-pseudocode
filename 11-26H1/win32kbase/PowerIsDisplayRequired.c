/*
 * XREFs of PowerIsDisplayRequired @ 0x1401357B0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayIdleExpired @ 0x140135530 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     ?GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z @ 0x140135820 (-GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z.c)
 */

__int64 __fastcall PowerIsDisplayRequired(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 UserSessionState; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v10 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v8 = W32GetUserSessionState(v6, v5, v7);
  CInputGlobals::GetGlobalTickCountWithSequence(*(_QWORD *)(v8 + 3056), 0LL, &v10);
  if ( v10 > *(_QWORD *)(UserSessionState + 2848) )
    LOBYTE(v3) = *(_DWORD *)(UserSessionState + 2880) > 0;
  return v3;
}
