/*
 * XREFs of MiRemoveNonIdealCachedStacks @ 0x1406FF438
 * Callers:
 *     MiAdjustCachedStackList @ 0x1402A8660 (MiAdjustCachedStackList.c)
 * Callees:
 *     MiDeleteCachedKernelShadowStack @ 0x1402A97A0 (MiDeleteCachedKernelShadowStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140416D20 (MiKernelShadowStackIdealForCaching.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall MiRemoveNonIdealCachedStacks(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *i; // rdi
  struct _SLIST_ENTRY *v4; // rbx
  struct _SLIST_ENTRY *v5; // rbp
  _QWORD *v6; // rcx
  union _SLIST_HEADER *v7; // rcx
  unsigned __int64 Next; // rdx
  __int64 v9; // rbx
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0;
  result = RtlpInterlockedFlushSList(a1);
  for ( i = result; i; result = RtlpInterlockedPushEntrySList(v7, v5) )
  {
    v4 = i;
    v5 = i;
    i = i->Next;
    v6 = (_QWORD *)((((unsigned __int64)v4[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (unsigned int)MiKernelShadowStackIdealForCaching(v6, (ULONG_PTR)(v6 + 1), &v11, &v10) )
    {
      Next = (unsigned __int64)v4[1].Next;
      v9 = v11;
      MiDeleteCachedKernelShadowStack(v11, Next);
      v7 = (union _SLIST_HEADER *)(v9 + 512);
    }
    else
    {
      v7 = a1;
    }
  }
  return result;
}
