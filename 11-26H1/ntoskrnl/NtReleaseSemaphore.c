/*
 * XREFs of NtReleaseSemaphore @ 0x140A81350
 * Callers:
 *     DifNtReleaseSemaphoreWrapper @ 0x14068C3F0 (DifNtReleaseSemaphoreWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v7; // ebx
  __int64 v8; // r9
  __int64 v9; // r8
  PVOID v10; // rdi
  int ULongFromUser; // eax
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)PreviousCount);
    RtlWriteULongToUser(PreviousCount, ULongFromUser);
  }
  if ( ReleaseCount <= 0 )
    return -1073741811;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(SemaphoreHandle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v14 = 0;
    v9 = (unsigned int)ReleaseCount;
    v10 = Object;
    v7 = KeReleaseSemaphoreEx((__int64)Object, 1LL, v9, v8, 0, &v14);
    LODWORD(Object) = v7;
    ObfDereferenceObject(v10);
    if ( v7 >= 0 )
    {
      if ( PreviousCount )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(PreviousCount, v14);
        else
          *PreviousCount = v14;
      }
    }
  }
  return v7;
}
