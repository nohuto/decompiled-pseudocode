/*
 * XREFs of NtCreateSemaphore @ 0x140A9F4A0
 * Callers:
 *     DifNtCreateSemaphoreWrapper @ 0x140673950 (DifNtCreateSemaphoreWrapper.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x1404B5E80 (KeInitializeSemaphore.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateSemaphore(_QWORD *a1, unsigned int a2, __int64 a3, LONG a4, int Limit)
{
  char PreviousMode; // si
  int inserted; // ebx
  __int64 ULong64FromUser; // rax
  __int64 v13; // [rsp+20h] [rbp-58h]
  PRKSEMAPHORE Semaphore; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF

  v15 = 0LL;
  Semaphore = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  if ( Limit <= 0 || a4 < 0 || a4 > Limit )
    return 3221225485LL;
  inserted = ObCreateObjectEx(PreviousMode, ExSemaphoreObjectType, a3, PreviousMode, v13, 32, 0, 0, &Semaphore, 0LL);
  if ( inserted >= 0 )
  {
    KeInitializeSemaphore(Semaphore, a4, Limit);
    inserted = ObInsertObjectEx((char *)Semaphore, 0LL, a2, 0, 0, 0LL, &v15);
    LODWORD(Semaphore) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, v15);
      else
        *a1 = v15;
    }
  }
  return (unsigned int)inserted;
}
