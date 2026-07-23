/*
 * XREFs of NtQueueApcThreadEx @ 0x140A86640
 * Callers:
 *     DifNtQueueApcThreadExWrapper @ 0x14068ACB0 (DifNtQueueApcThreadExWrapper.c)
 * Callees:
 *     NtQueueApcThreadEx2 @ 0x140A86690 (NtQueueApcThreadEx2.c)
 */

NTSTATUS __cdecl NtQueueApcThreadEx(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  HANDLE v6; // r10
  ULONG v8; // r8d

  v6 = 0LL;
  v8 = 0;
  if ( ReserveHandle != (HANDLE)1 )
    v6 = ReserveHandle;
  LOBYTE(v8) = ReserveHandle == (HANDLE)1;
  return NtQueueApcThreadEx2(ThreadHandle, v6, v8, ApcRoutine, ApcArgument1, ApcArgument2, ApcArgument3);
}
