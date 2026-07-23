/*
 * XREFs of NtExtendSection @ 0x140A65CF0
 * Callers:
 *     DifNtExtendSectionWrapper @ 0x14067B030 (DifNtExtendSectionWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 */

NTSTATUS __cdecl NtExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  char PreviousMode; // di
  __int64 ULong64FromUser; // rax
  NTSTATUS result; // eax
  NTSTATUS v7; // esi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  LARGE_INTEGER v9[2]; // [rsp+48h] [rbp-10h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(NewSectionSize, 8uLL, 4u);
    ULong64FromUser = RtlReadULong64FromUser(NewSectionSize);
  }
  else
  {
    ULong64FromUser = NewSectionSize->QuadPart;
  }
  v9[0].QuadPart = ULong64FromUser;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)SectionHandle,
             16,
             (__int64)MmSectionObjectType,
             PreviousMode,
             0x63536D4Du,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v7 = MmExtendSection((__int64)Object, v9, 0);
    ObfDereferenceObjectWithTag(Object, 0x63536D4Du);
    if ( PreviousMode )
      RtlWriteULong64ToUser(NewSectionSize, v9[0].QuadPart);
    else
      *NewSectionSize = v9[0];
    return v7;
  }
  return result;
}
