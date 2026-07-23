/*
 * XREFs of NtSuspendThread @ 0x140949500
 * Callers:
 *     DifNtSuspendThreadWrapper @ 0x140692F20 (DifNtSuspendThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 */

NTSTATUS __cdecl NtSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  char PreviousMode; // di
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  NTSTATUS v7; // esi
  __int64 Tag; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  PVOID Object[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  Object[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PreviousSuspendCount )
  {
    ULongFromUser = RtlReadULongFromUser(PreviousSuspendCount);
    RtlWriteULongToUser(PreviousSuspendCount, ULongFromUser);
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             2,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v7 = PspSuspendThread(Object[0], 0LL, 0LL, &v13, Tag, v9, v10, v11);
    ObfDereferenceObjectWithTag(Object[0], 0x75537350u);
    if ( PreviousSuspendCount )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(PreviousSuspendCount, v13);
      else
        *PreviousSuspendCount = v13;
    }
    return v7;
  }
  return result;
}
