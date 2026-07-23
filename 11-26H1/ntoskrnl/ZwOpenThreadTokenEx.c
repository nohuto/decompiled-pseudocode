/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1407285A0
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x1406B1680 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x14080A3BC (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x1409A2F70 (BiOpenEffectiveToken.c)
 *     RtlpOpenThreadToken @ 0x1409A33B4 (RtlpOpenThreadToken.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A3EE08 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
