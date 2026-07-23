/*
 * XREFs of ZwCreateThreadEx @ 0x1407298E0
 * Callers:
 *     DifZwCreateThreadExWrapper @ 0x1406A5C50 (DifZwCreateThreadExWrapper.c)
 *     DbgkUserReportWorkRoutine @ 0x14078D760 (DbgkUserReportWorkRoutine.c)
 *     PsForceCrashForInvalidAccess @ 0x140802B70 (PsForceCrashForInvalidAccess.c)
 *     MiInjectThreadForHotPatch @ 0x140876A14 (MiInjectThreadForHotPatch.c)
 *     RtlpCreateUserThreadEx @ 0x140A94C5C (RtlpCreateUserThreadEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
