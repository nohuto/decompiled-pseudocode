/*
 * XREFs of NtQueryInformationPort @ 0x1407BFCB0
 * Callers:
 *     DifNtQueryInformationPortWrapper @ 0x140682F60 (DifNtQueryInformationPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtQueryInformationPort(
        HANDLE Handle,
        __int64 a2,
        volatile void *a3,
        unsigned int a4,
        unsigned int *a5)
{
  KPROCESSOR_MODE PreviousMode; // si
  unsigned int *v7; // rbx
  int ULongFromUser; // eax
  NTSTATUS v9; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    v7 = a5;
    if ( a5 )
    {
      ULongFromUser = RtlReadULongFromUser(a5);
      RtlWriteULongToUser(a5, ULongFromUser);
    }
  }
  else
  {
    v7 = a5;
  }
  if ( Handle )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
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
  }
  else
  {
    return (unsigned int)-1073741821;
  }
  return (unsigned int)v9;
}
