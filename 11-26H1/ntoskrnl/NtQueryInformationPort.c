/*
 * XREFs of NtQueryInformationPort @ 0x1407C2D10
 * Callers:
 *     DifNtQueryInformationPortWrapper @ 0x140686B40 (DifNtQueryInformationPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQueryInformationPort(
        HANDLE PortHandle,
        PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  PULONG v7; // rbx
  int ULongFromUser; // eax
  int v9; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(PortInformation, Length, 4u);
    v7 = ReturnLength;
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
  }
  else
  {
    v7 = ReturnLength;
  }
  if ( !PortHandle )
    return -1073741821;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    if ( v7 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(v7, 0);
      else
        *v7 = 0;
    }
    ObfDereferenceObject(Object);
  }
  return v9;
}
