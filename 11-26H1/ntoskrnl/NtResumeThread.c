/*
 * XREFs of NtResumeThread @ 0x140AB9500
 * Callers:
 *     DifNtResumeThreadWrapper @ 0x140689EE0 (DifNtResumeThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeThread @ 0x1404FE168 (PsMultiResumeThread.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtResumeThread(ULONG_PTR BugCheckParameter1, unsigned int *a2)
{
  char PreviousMode; // di
  int ULongFromUser; // eax
  __int64 result; // rax
  PVOID Object[2]; // [rsp+48h] [rbp-10h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  Object[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a2 )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             4096LL,
             PsThreadType,
             PreviousMode,
             0x75537350u,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    PsMultiResumeThread((__int64)Object[0], (unsigned int *)&v8, 1LL);
    ObfDereferenceObjectWithTag(Object[0], 0x75537350u);
    if ( a2 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(a2, v8);
      else
        *a2 = v8;
    }
    return 0LL;
  }
  return result;
}
