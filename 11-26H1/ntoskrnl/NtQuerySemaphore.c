/*
 * XREFs of NtQuerySemaphore @ 0x140B49860
 * Callers:
 *     DifNtQuerySemaphoreWrapper @ 0x140689440 (DifNtQuerySemaphoreWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQuerySemaphore(
        HANDLE SemaphoreHandle,
        SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass,
        PVOID SemaphoreInformation,
        ULONG SemaphoreInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  PULONG v10; // rbx
  int ULongFromUser; // eax
  int v13; // esi
  int v14; // r15d
  int v15; // r12d
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(SemaphoreInformation, 8uLL, 4u);
    v10 = ReturnLength;
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
  }
  else
  {
    v10 = ReturnLength;
  }
  if ( SemaphoreInformationClass )
    return -1073741821;
  if ( SemaphoreInformationLength != 8 )
    return -1073741820;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(SemaphoreHandle, 1u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v14 = *((_DWORD *)Object + 1);
    v15 = *((_DWORD *)Object + 6);
    ObfDereferenceObject(Object);
    if ( PreviousMode )
      RtlWriteULongToUser(SemaphoreInformation, v14);
    else
      *(_DWORD *)SemaphoreInformation = v14;
    if ( PreviousMode )
      RtlWriteULongToUser((_DWORD *)SemaphoreInformation + 1, v15);
    else
      *((_DWORD *)SemaphoreInformation + 1) = v15;
    if ( v10 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(v10, 8);
      else
        *v10 = 8;
    }
  }
  return v13;
}
