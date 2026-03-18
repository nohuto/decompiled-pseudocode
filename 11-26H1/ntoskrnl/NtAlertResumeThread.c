/*
 * XREFs of NtAlertResumeThread @ 0x1407FCE80
 * Callers:
 *     DifNtAlertResumeThreadWrapper @ 0x14066ADE0 (DifNtAlertResumeThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAlertResumeThread @ 0x1405EBF70 (KeAlertResumeThread.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtAlertResumeThread(ULONG_PTR BugCheckParameter1, unsigned int *a2)
{
  char PreviousMode; // bl
  int ULongFromUser; // eax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a2 )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
  }
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( PreviousMode && (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      return 3221225506LL;
    }
    else
    {
      v9 = KeAlertResumeThread((__int64)Object, v7, v8);
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      if ( a2 )
        *a2 = v9;
      return 0LL;
    }
  }
  return result;
}
