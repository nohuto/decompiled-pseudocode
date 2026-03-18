/*
 * XREFs of SmSetStoreInformation @ 0x140B2E9E0
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404D6C0C (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     SmProcessConfigRequest @ 0x1408195C0 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1408198D4 (SmProcessDeleteRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SmProcessCreateRequest @ 0x140967230 (SmProcessCreateRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140B2EB04 (SmProcessSystemStoreTrimRequest.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B522A4 (SmProcessStoreMemoryPriorityRequest.c)
 */

__int64 __fastcall SmSetStoreInformation(__int64 a1, void *a2, unsigned int a3, KPROCESSOR_MODE a4)
{
  struct _SM_PARTITION *ProcessPartition; // rax
  void *Src[2]; // [rsp+28h] [rbp-20h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-10h]

  if ( a3 < 0x18 )
    return 3221225990LL;
  *(_OWORD *)Src = 0LL;
  Length = 0LL;
  if ( a4 )
    RtlCopyFromUser(Src, a2, 0x18uLL);
  else
    RtlCopyVolatileMemory(Src, a2, 0x18uLL);
  if ( LODWORD(Src[0]) != 1 )
    return 3221225561LL;
  if ( a3 != 24 )
    return 3221225476LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return 3221225506LL;
  if ( SHIDWORD(Src[0]) <= 17 )
  {
    if ( HIDWORD(Src[0]) != 17 )
    {
      if ( HIDWORD(Src[0]) == 3 )
      {
        ProcessPartition = (struct _SM_PARTITION *)SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
        return SmProcessCreateRequest(ProcessPartition, Src[1], Length, a4);
      }
      if ( HIDWORD(Src[0]) == 4 )
        return SmProcessDeleteRequest(Src[1], Length, a4);
      if ( HIDWORD(Src[0]) != 9 && (unsigned int)(HIDWORD(Src[0]) - 10) >= 2 )
        return 3221225475LL;
    }
    return 3221225659LL;
  }
  if ( HIDWORD(Src[0]) == 18 )
    return 3221225659LL;
  if ( HIDWORD(Src[0]) == 19 )
    return SmProcessConfigRequest(Src[1], Length, a4);
  if ( HIDWORD(Src[0]) != 20 )
  {
    if ( HIDWORD(Src[0]) == 21 )
      return SmProcessSystemStoreTrimRequest(Src[1], (unsigned int)Length);
    return 3221225475LL;
  }
  return SmProcessStoreMemoryPriorityRequest(Src[1]);
}
