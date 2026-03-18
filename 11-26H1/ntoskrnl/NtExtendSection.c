/*
 * XREFs of NtExtendSection @ 0x140A58770
 * Callers:
 *     DifNtExtendSectionWrapper @ 0x140677450 (DifNtExtendSectionWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     MmExtendSection @ 0x140A58080 (MmExtendSection.c)
 */

__int64 __fastcall NtExtendSection(ULONG_PTR BugCheckParameter1, __int64 *Address)
{
  char PreviousMode; // di
  __int64 ULong64FromUser; // rax
  __int64 result; // rax
  unsigned int v7; // esi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  LARGE_INTEGER v9[2]; // [rsp+48h] [rbp-10h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, 8uLL, 4u);
    ULong64FromUser = RtlReadULong64FromUser(Address);
  }
  else
  {
    ULong64FromUser = *Address;
  }
  v9[0].QuadPart = ULong64FromUser;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             16LL,
             (POBJECT_TYPE *)MmSectionObjectType,
             PreviousMode,
             0x63536D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v7 = MmExtendSection((__int64)Object, v9, 0);
    ObfDereferenceObjectWithTag(Object, 0x63536D4Du);
    if ( PreviousMode )
      RtlWriteULong64ToUser(Address, v9[0].QuadPart);
    else
      *Address = v9[0].QuadPart;
    return v7;
  }
  return result;
}
