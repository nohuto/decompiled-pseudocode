/*
 * XREFs of RtlCreateUserSecurityObject @ 0x180139EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x1800C5F30 (RtlCreateAndSetSD.c)
 */

NTSTATUS __cdecl RtlCreateUserSecurityObject(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  void *ProcessHeap; // rdi
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  PVOID BaseAddress; // [rsp+50h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(AceData, AceCount, OwnerSid, GroupSid, &BaseAddress);
  if ( result >= 0 )
  {
    v9 = RtlpNewSecurityObject(
           0LL,
           BaseAddress,
           NewSecurityDescriptor,
           0LL,
           0,
           IsDirectoryObject,
           0,
           (void *)0xFFFFFFFFFFFFFFFCLL,
           GenericMapping);
    RtlFreeHeap_0(ProcessHeap, 0, BaseAddress);
    return v9;
  }
  return result;
}
