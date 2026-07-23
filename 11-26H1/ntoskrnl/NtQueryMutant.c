/*
 * XREFs of NtQueryMutant @ 0x140B1F520
 * Callers:
 *     DifNtQueryMutantWrapper @ 0x1406883D0 (DifNtQueryMutantWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeQueryOwnerMutant @ 0x1404CB048 (KeQueryOwnerMutant.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG MutantInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  PULONG v9; // rbx
  int ULongFromUser; // eax
  int v11; // r12d
  bool v12; // zf
  PVOID v13; // rdi
  int v15; // eax
  char v16; // r14
  char v17; // r13
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  CLIENT_ID ClientId; // [rsp+48h] [rbp-40h] BYREF

  ClientId = 0LL;
  if ( MutantInformationClass == MutantBasicInformation )
  {
    if ( MutantInformationLength == 8 )
      goto LABEL_3;
    return -1073741820;
  }
  if ( MutantInformationClass != MutantOwnerInformation )
    return -1073741821;
  if ( MutantInformationLength != 16 )
    return -1073741820;
LABEL_3:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(MutantInformation, MutantInformationLength, 4u);
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
  v11 = ObReferenceObjectByHandle(MutantHandle, 1u, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = MutantInformationClass == MutantBasicInformation;
    v13 = Object;
    if ( v12 )
    {
      v15 = *((_DWORD *)Object + 1);
      v16 = *((_BYTE *)Object + 48) & 1;
      v17 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( PreviousMode )
        RtlWriteULongToUser(MutantInformation, v15);
      else
        *(_DWORD *)MutantInformation = v15;
      if ( PreviousMode )
        RtlWriteUCharToUser((_BYTE *)MutantInformation + 4, v17);
      else
        *((_BYTE *)MutantInformation + 4) = v17;
      if ( PreviousMode )
        RtlWriteUCharToUser((_BYTE *)MutantInformation + 5, v16);
      else
        *((_BYTE *)MutantInformation + 5) = v16;
      if ( v9 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(v9, 8);
        else
          *v9 = 8;
      }
    }
    else
    {
      KeQueryOwnerMutant((PKMUTANT)Object, &ClientId);
      if ( PreviousMode )
        RtlCopyToUser(MutantInformation, &ClientId, 0x10uLL);
      else
        RtlCopyVolatileMemory(MutantInformation, &ClientId, 0x10uLL);
      if ( v9 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(v9, 16);
        else
          *v9 = 16;
      }
    }
    ObfDereferenceObject(v13);
  }
  return v11;
}
