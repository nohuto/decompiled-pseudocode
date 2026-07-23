/*
 * XREFs of ZwNotifyChangeSession @ 0x14072A480
 * Callers:
 *     DifZwNotifyChangeSessionWrapper @ 0x1406AEC00 (DifZwNotifyChangeSessionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwNotifyChangeSession(
        HANDLE SessionHandle,
        ULONG ChangeSequenceNumber,
        PLARGE_INTEGER ChangeTimeStamp,
        IO_SESSION_EVENT Event,
        IO_SESSION_STATE NewState,
        IO_SESSION_STATE PreviousState,
        PVOID Payload,
        ULONG PayloadSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SessionHandle);
}
