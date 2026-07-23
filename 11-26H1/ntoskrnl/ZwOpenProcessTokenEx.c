/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1407285C0
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x1406B08B0 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x14080A3BC (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x1409A2F70 (BiOpenEffectiveToken.c)
 *     RtlAcquirePrivilege @ 0x1409A2FF0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1409A3280 (RtlImpersonateSelfEx.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A3EE08 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
