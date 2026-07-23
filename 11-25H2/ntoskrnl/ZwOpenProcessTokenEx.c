/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14069B740
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x140636230 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x1407728AC (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x140A26910 (BiOpenEffectiveToken.c)
 *     RtlAcquirePrivilege @ 0x140A280B4 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140A28334 (RtlImpersonateSelfEx.c)
 *     _SysCtxOpenEffectiveToken @ 0x140AB1DE8 (_SysCtxOpenEffectiveToken.c)
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
