/*
 * XREFs of MiDuplicateUnicodeString @ 0x140867860
 * Callers:
 *     MiValidatePageFileCreationParameters @ 0x14086C85C (MiValidatePageFileCreationParameters.c)
 *     MiGetAllRegisteredPatches @ 0x14086FD1C (MiGetAllRegisteredPatches.c)
 *     NtManageHotPatch @ 0x140A993D0 (NtManageHotPatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A99998 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140ABFFE4 (MiFindHotPatchRecord.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     RtlValidateUnicodeString @ 0x14047C1A0 (RtlValidateUnicodeString.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
