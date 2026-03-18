/*
 * XREFs of NtQuerySection @ 0x1408E55F0
 * Callers:
 *     DifNtQuerySectionWrapper @ 0x1406851A0 (DifNtQuerySectionWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     MmGetSectionInformation @ 0x1408E5780 (MmGetSectionInformation.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtQuerySection(
        ULONG_PTR BugCheckParameter1,
        unsigned int a2,
        volatile void *a3,
        SIZE_T a4,
        unsigned __int64 *a5)
{
  char PreviousMode; // r15
  unsigned __int64 *v10; // rdi
  __int64 ULong64FromUser; // rax
  unsigned __int64 v12; // rbx
  int SectionInformation; // esi
  PVOID Object; // [rsp+48h] [rbp-20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    v10 = a5;
    if ( a5 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a5);
      RtlWriteULong64ToUser(a5, ULong64FromUser);
    }
  }
  else
  {
    v10 = a5;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v12 = 64LL;
    }
    else
    {
      if ( a2 != 2 && a2 != 3 )
        return 3221225475LL;
      v12 = 8LL;
    }
  }
  else
  {
    v12 = 24LL;
  }
  if ( a4 < v12 )
    return 3221225476LL;
  SectionInformation = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6D566D4Du, (__int64)&Object, 0LL, 0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(Object, a2, a3);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    if ( SectionInformation >= 0 )
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
  return (unsigned int)SectionInformation;
}
