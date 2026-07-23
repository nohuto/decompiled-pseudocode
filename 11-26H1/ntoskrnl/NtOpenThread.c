/*
 * XREFs of NtOpenThread @ 0x140A0F6F0
 * Callers:
 *     DifNtOpenThreadWrapper @ 0x1406831B0 (DifNtOpenThreadWrapper.c)
 * Callees:
 *     PsOpenThread @ 0x140A0F720 (PsOpenThread.c)
 */

NTSTATUS __cdecl NtOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char v5; // [rsp+20h] [rbp-18h]
  char PreviousMode; // [rsp+28h] [rbp-10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = PreviousMode;
  return PsOpenThread(ThreadHandle, DesiredAccess, ObjectAttributes, ClientId, v5, PreviousMode);
}
