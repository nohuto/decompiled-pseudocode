/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1407239D0
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x1406ADAA0 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpIsAppContainer @ 0x14080491C (RtlpIsAppContainer.c)
 *     BiOpenEffectiveToken @ 0x1409D1F90 (BiOpenEffectiveToken.c)
 *     RtlpOpenThreadToken @ 0x1409D23D4 (RtlpOpenThreadToken.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A2CBB4 (_SysCtxOpenEffectiveToken.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&DesiredAccess);
}
