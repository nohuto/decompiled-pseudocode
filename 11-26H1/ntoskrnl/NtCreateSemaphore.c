/*
 * XREFs of NtCreateSemaphore @ 0x140A9F7D0
 * Callers:
 *     DifNtCreateSemaphoreWrapper @ 0x140677530 (DifNtCreateSemaphoreWrapper.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x1404AF2D0 (KeInitializeSemaphore.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  char PreviousMode; // si
  NTSTATUS inserted; // ebx
  __int64 ULong64FromUser; // rax
  __int64 v13; // [rsp+20h] [rbp-58h]
  PRKSEMAPHORE Semaphore; // [rsp+58h] [rbp-20h] BYREF
  void *v15; // [rsp+60h] [rbp-18h] BYREF

  v15 = 0LL;
  Semaphore = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(SemaphoreHandle);
    RtlWriteULong64ToUser(SemaphoreHandle, ULong64FromUser);
  }
  if ( MaximumCount <= 0 || InitialCount < 0 || InitialCount > MaximumCount )
    return -1073741811;
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExSemaphoreObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v13,
               32,
               0,
               0,
               &Semaphore,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeSemaphore(Semaphore, InitialCount, MaximumCount);
    inserted = ObInsertObjectEx((char *)Semaphore, 0LL, DesiredAccess, 0, 0, 0LL, &v15);
    LODWORD(Semaphore) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(SemaphoreHandle, (__int64)v15);
      else
        *SemaphoreHandle = v15;
    }
  }
  return inserted;
}
