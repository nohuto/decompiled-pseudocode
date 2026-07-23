/*
 * XREFs of NtQueryIoCompletion @ 0x140799A40
 * Callers:
 *     DifNtQueryIoCompletionWrapper @ 0x140687BA0 (DifNtQueryIoCompletionWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  PULONG v9; // rbx
  int ULongFromUser; // eax
  int v11; // esi
  int v12; // r14d
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF

  if ( IoCompletionInformationClass )
    return -1073741821;
  if ( IoCompletionInformationLength != 4 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(IoCompletionInformation, 4uLL, 4u);
    v9 = ReturnLength;
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
  }
  else
  {
    v9 = ReturnLength;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(IoCompletionHandle, 1u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = *((_DWORD *)Object + 1);
    ObfDereferenceObject(Object);
    if ( PreviousMode )
      RtlWriteULongToUser(IoCompletionInformation, v12);
    else
      *(_DWORD *)IoCompletionInformation = v12;
    if ( v9 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(v9, 4);
      else
        *v9 = 4;
    }
  }
  return v11;
}
