/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1802DAB39
 * Callers:
 *     IsOleInitializePresent @ 0x1802D78C4 (IsOleInitializePresent.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x1802D7B68 (IsPolicyManager_GetPolicyPresent.c)
 *     IsUMgrQueryUserTokenPresent @ 0x1802D8C30 (IsUMgrQueryUserTokenPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x1802D8C98 (IsPicRetrieveFileInfoPresent.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1802D8D8C (IsQueryWin32SubsystemHostPresent.c)
 *     IsGetThreadDesktopPresent @ 0x1802DB624 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x1802DB830 (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
