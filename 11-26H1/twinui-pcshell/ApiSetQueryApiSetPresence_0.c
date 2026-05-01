/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1802D32A9
 * Callers:
 *     IsOleInitializePresent @ 0x1802D003C (IsOleInitializePresent.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x1802D02E0 (IsPolicyManager_GetPolicyPresent.c)
 *     IsUMgrQueryUserTokenPresent @ 0x1802D13A8 (IsUMgrQueryUserTokenPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x1802D1410 (IsPicRetrieveFileInfoPresent.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1802D1504 (IsQueryWin32SubsystemHostPresent.c)
 *     IsGetThreadDesktopPresent @ 0x1802D3D24 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x1802D3F30 (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
