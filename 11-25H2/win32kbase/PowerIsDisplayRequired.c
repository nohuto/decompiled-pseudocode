/*
 * XREFs of PowerIsDisplayRequired @ 0x1400EDB30
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayIdleExpired @ 0x1400ED980 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     ?GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z @ 0x1400EDBA0 (-GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z.c)
 */

__int64 __fastcall PowerIsDisplayRequired(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = W32GetUserSessionState(v5, v4);
  CInputGlobals::GetGlobalTickCountWithSequence(*(_QWORD *)(v6 + 3056), 0LL, &v8);
  if ( v8 > *(_QWORD *)(UserSessionState + 2848) )
    LOBYTE(v2) = *(_DWORD *)(UserSessionState + 2880) > 0;
  return v2;
}
