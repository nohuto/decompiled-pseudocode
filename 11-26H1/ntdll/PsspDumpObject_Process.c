/*
 * XREFs of PsspDumpObject_Process @ 0x18010D5A0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 */

NTSTATUS __fastcall PsspDumpObject_Process(void *a1, _QWORD *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 < 0x40 )
    return -1073741789;
  *a2 = 64LL;
  return NtQueryInformationProcess(a1, ProcessBasicInformation, a2, 0x40u, ReturnLength);
}
