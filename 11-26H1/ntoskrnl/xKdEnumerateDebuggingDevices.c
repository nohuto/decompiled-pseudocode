/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x140532BC0
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
