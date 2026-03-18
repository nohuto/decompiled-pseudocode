/*
 * XREFs of RtlCopyVolatileMemory @ 0x14024BC90
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     NtUserToUnicodeEx @ 0x140193C60 (NtUserToUnicodeEx.c)
 *     NtUserSetManipulationInputTarget @ 0x140195D40 (NtUserSetManipulationInputTarget.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x140198040 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMInjectInput @ 0x14019AE50 (RIMInjectInput.c)
 *     NtRIMDeviceIoControl @ 0x1401AE6F0 (NtRIMDeviceIoControl.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     NtConfigureInputSpace @ 0x1401E04B0 (NtConfigureInputSpace.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetRawPointerDeviceData @ 0x1401E4D40 (NtUserGetRawPointerDeviceData.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401E5550 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectPointerInput @ 0x1401E6D30 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401E7BB0 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlCopyToUserFromUser @ 0x1402D20B8 (RtlCopyToUserFromUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlCopyVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
