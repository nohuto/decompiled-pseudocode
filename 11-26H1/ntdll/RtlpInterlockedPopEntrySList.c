/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x180162CD0
 * Callers:
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18001B870 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     RtlInitializeResource @ 0x180079E50 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18007AED0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpStdGetSpaceForTrace @ 0x18007C79C (RtlpStdGetSpaceForTrace.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18016E010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  struct _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0
  signed __int32 v6; // [rsp+10h] [rbp+8h] BYREF

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (struct _SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr(&v6, 0);
  return v1;
}
