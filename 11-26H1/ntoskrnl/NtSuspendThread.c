/*
 * XREFs of NtSuspendThread @ 0x140AD4F10
 * Callers:
 *     DifNtSuspendThreadWrapper @ 0x14068F340 (DifNtSuspendThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspSuspendThread @ 0x140AD5030 (PspSuspendThread.c)
 */

__int64 __fastcall NtSuspendThread(ULONG_PTR BugCheckParameter1, unsigned int *a2)
{
  char PreviousMode; // di
  int ULongFromUser; // eax
  __int64 result; // rax
  unsigned int v7; // esi
  __int64 Tag; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  PVOID Object[2]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  Object[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a2 )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             2LL,
             PsThreadType,
             PreviousMode,
             0x75537350u,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v7 = PspSuspendThread(Object[0], 0LL, 0LL, &v11, Tag, v9);
    ObfDereferenceObjectWithTag(Object[0], 0x75537350u);
    if ( a2 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(a2, v11);
      else
        *a2 = v11;
    }
    return v7;
  }
  return result;
}
