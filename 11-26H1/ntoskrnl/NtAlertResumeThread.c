/*
 * XREFs of NtAlertResumeThread @ 0x1408028B0
 * Callers:
 *     DifNtAlertResumeThreadWrapper @ 0x14066E9C0 (DifNtAlertResumeThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAlertResumeThread @ 0x1405EE8E0 (KeAlertResumeThread.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtAlertResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  char PreviousMode; // bl
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  ULONG v9; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PreviousSuspendCount )
  {
    ULongFromUser = RtlReadULongFromUser(PreviousSuspendCount);
    RtlWriteULongToUser(PreviousSuspendCount, ULongFromUser);
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    if ( PreviousMode && (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      return -1073741790;
    }
    else
    {
      v9 = KeAlertResumeThread((__int64)Object, v7, v8);
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      if ( PreviousSuspendCount )
        *PreviousSuspendCount = v9;
      return 0;
    }
  }
  return result;
}
