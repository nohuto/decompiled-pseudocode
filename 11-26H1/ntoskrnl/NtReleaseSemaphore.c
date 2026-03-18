/*
 * XREFs of NtReleaseSemaphore @ 0x140A788B0
 * Callers:
 *     DifNtReleaseSemaphoreWrapper @ 0x140688810 (DifNtReleaseSemaphoreWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeReleaseSemaphoreEx @ 0x1404396D0 (KeReleaseSemaphoreEx.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtReleaseSemaphore(HANDLE Handle, int a2, unsigned int *a3)
{
  KPROCESSOR_MODE PreviousMode; // si
  int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // r8
  PVOID v10; // rdi
  int ULongFromUser; // eax
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a3 && PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a3);
    RtlWriteULongToUser(a3, ULongFromUser);
  }
  if ( a2 <= 0 )
    return 3221225485LL;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v14 = 0;
    v9 = (unsigned int)a2;
    v10 = Object;
    v7 = KeReleaseSemaphoreEx((__int64)Object, 1LL, v9, v8, 0, &v14);
    LODWORD(Object) = v7;
    ObfDereferenceObject(v10);
    if ( v7 >= 0 )
    {
      if ( a3 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(a3, v14);
        else
          *a3 = v14;
      }
    }
  }
  return (unsigned int)v7;
}
