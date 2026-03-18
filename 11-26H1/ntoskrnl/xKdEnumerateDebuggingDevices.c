/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1405306C0
 * Callers:
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     HaliQuerySystemInformation @ 0x140BED8E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
