/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1407239F0
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x1406ACCD0 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x14080491C (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x1409D1F90 (BiOpenEffectiveToken.c)
 *     RtlAcquirePrivilege @ 0x1409D2010 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1409D22A0 (RtlImpersonateSelfEx.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A2CBB4 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess);
}
