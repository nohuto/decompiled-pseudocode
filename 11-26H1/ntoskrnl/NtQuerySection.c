/*
 * XREFs of NtQuerySection @ 0x1408EBBB0
 * Callers:
 *     DifNtQuerySectionWrapper @ 0x140688D80 (DifNtQuerySectionWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MmGetSectionInformation @ 0x1408EBD40 (MmGetSectionInformation.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  char PreviousMode; // r15
  PSIZE_T v10; // rdi
  __int64 ULong64FromUser; // rax
  SIZE_T v12; // rbx
  NTSTATUS v13; // esi
  PVOID Object; // [rsp+48h] [rbp-20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(SectionInformation, SectionInformationLength, 4u);
    v10 = ReturnLength;
    if ( ReturnLength )
    {
      ULong64FromUser = RtlReadULong64FromUser(ReturnLength);
      RtlWriteULong64ToUser(ReturnLength, ULong64FromUser);
    }
  }
  else
  {
    v10 = ReturnLength;
  }
  if ( SectionInformationClass )
  {
    if ( SectionInformationClass == SectionImageInformation )
    {
      v12 = 64LL;
    }
    else
    {
      if ( SectionInformationClass != SectionRelocationInformation
        && SectionInformationClass != SectionOriginalBaseInformation )
      {
        return -1073741821;
      }
      v12 = 8LL;
    }
  }
  else
  {
    v12 = 24LL;
  }
  if ( SectionInformationLength < v12 )
    return -1073741820;
  v13 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)SectionHandle, 0x6D566D4Du, (__int64)&Object, 0LL, 0LL);
  if ( v13 >= 0 )
  {
    v13 = MmGetSectionInformation(Object, (unsigned int)SectionInformationClass, SectionInformation);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    if ( v13 >= 0 )
    {
      if ( v10 )
      {
        if ( PreviousMode )
          RtlWriteULong64ToUser(v10, v12);
        else
          *v10 = v12;
      }
    }
  }
  return v13;
}
