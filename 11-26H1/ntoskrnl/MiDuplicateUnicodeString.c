/*
 * XREFs of MiDuplicateUnicodeString @ 0x14086DC40
 * Callers:
 *     MiValidatePageFileCreationParameters @ 0x140872C3C (MiValidatePageFileCreationParameters.c)
 *     MiGetAllRegisteredPatches @ 0x14087607C (MiGetAllRegisteredPatches.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140AC2084 (MiFindHotPatchRecord.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     RtlValidateUnicodeString @ 0x140475B10 (RtlValidateUnicodeString.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiDuplicateUnicodeString(UNICODE_STRING *a1, const UNICODE_STRING *a2, char a3)
{
  NTSTATUS result; // eax
  unsigned int Length; // ebx
  int CurrentProcessorColor; // eax
  wchar_t *PoolMm; // rax
  wchar_t *v10; // rbx
  size_t v11; // r8
  wchar_t *Buffer; // rdx

  RtlInitUnicodeString(a1, 0LL);
  result = RtlValidateUnicodeString(0, a2);
  if ( result >= 0 )
  {
    Length = a2->Length;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (wchar_t *)ExAllocatePoolMm(256LL, Length, 1934977357, CurrentProcessorColor | 0x80000000);
    v10 = PoolMm;
    if ( PoolMm )
    {
      v11 = a2->Length;
      Buffer = a2->Buffer;
      if ( a3 )
        RtlCopyFromUser(PoolMm, Buffer, v11);
      else
        RtlCopyVolatileMemory(PoolMm, Buffer, v11);
      a1->Length = a2->Length;
      a1->MaximumLength = a2->MaximumLength;
      a1->Buffer = v10;
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
