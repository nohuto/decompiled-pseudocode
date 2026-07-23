/*
 * XREFs of ZwAdjustTokenClaimsAndDeviceGroups @ 0x140728D60
 * Callers:
 *     DifZwAdjustTokenClaimsAndDeviceGroupsWrapper @ 0x14069CA80 (DifZwAdjustTokenClaimsAndDeviceGroupsWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustTokenClaimsAndDeviceGroups(
        HANDLE TokenHandle,
        BOOLEAN UserResetToDefault,
        BOOLEAN DeviceResetToDefault,
        BOOLEAN DeviceGroupsResetToDefault,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION NewUserState,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION NewDeviceState,
        PTOKEN_GROUPS NewDeviceGroupsState,
        ULONG UserBufferLength,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION PreviousUserState,
        ULONG DeviceBufferLength,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION PreviousDeviceState,
        ULONG DeviceGroupsBufferLength,
        PTOKEN_GROUPS PreviousDeviceGroups,
        PULONG UserReturnLength,
        PULONG DeviceReturnLength,
        PULONG DeviceGroupsReturnBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
