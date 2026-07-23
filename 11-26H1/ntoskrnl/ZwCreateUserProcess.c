/*
 * XREFs of ZwCreateUserProcess @ 0x1407299E0
 * Callers:
 *     DifZwCreateUserProcessWrapper @ 0x1406A6DA0 (DifZwCreateUserProcessWrapper.c)
 *     RtlpCreateUserProcess @ 0x140CE012C (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
