/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14069B720
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x140636B80 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x1407728AC (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x140A26910 (BiOpenEffectiveToken.c)
 *     RtlpOpenThreadToken @ 0x140A28468 (RtlpOpenThreadToken.c)
 *     _SysCtxOpenEffectiveToken @ 0x140AB1DE8 (_SysCtxOpenEffectiveToken.c)
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
