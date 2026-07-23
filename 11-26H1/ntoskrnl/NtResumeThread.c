/*
 * XREFs of NtResumeThread @ 0x140ABA920
 * Callers:
 *     DifNtResumeThreadWrapper @ 0x14068DAC0 (DifNtResumeThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeThread @ 0x1404F76A8 (PsMultiResumeThread.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  char PreviousMode; // di
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  PVOID Object[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  Object[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PreviousSuspendCount )
  {
    ULongFromUser = RtlReadULongFromUser(PreviousSuspendCount);
    RtlWriteULongToUser(PreviousSuspendCount, ULongFromUser);
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             4096,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    PsMultiResumeThread((__int64)Object[0], &v8, 1LL);
    ObfDereferenceObjectWithTag(Object[0], 0x75537350u);
    if ( PreviousSuspendCount )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(PreviousSuspendCount, v8);
      else
        *PreviousSuspendCount = v8;
    }
    return 0;
  }
  return result;
}
