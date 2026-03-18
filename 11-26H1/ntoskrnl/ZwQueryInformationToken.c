/*
 * XREFs of ZwQueryInformationToken @ 0x140723810
 * Callers:
 *     RtlCheckTokenCapability @ 0x1404CFDA0 (RtlCheckTokenCapability.c)
 *     DifZwQueryInformationTokenWrapper @ 0x1406B1C20 (DifZwQueryInformationTokenWrapper.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1406D3AF8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140925F40 (RtlFormatCurrentUserKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2AEE0 (_SysCtxRegOpenCurrentUserKey.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B46CC8 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle, *(_QWORD *)&TokenInformationClass);
}
