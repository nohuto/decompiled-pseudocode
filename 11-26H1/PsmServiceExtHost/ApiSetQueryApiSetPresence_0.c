/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180070134
 * Callers:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x18006FA28 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsQueryUserTokenPresent @ 0x18006FB1C (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18006FBFC (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x18006FCDC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18006FDF4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsGetPackageTypeForPsmKeyPresent @ 0x18006FE48 (IsGetPackageTypeForPsmKeyPresent.c)
 *     IsRmRpsInitializePresent @ 0x1800705BC (IsRmRpsInitializePresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x1800709BC (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x180070A9C (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x180070B7C (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
