/*
 * XREFs of MiPruneCachedStackList @ 0x140292358
 * Callers:
 *     MiFindContiguousPagesNode @ 0x1402904F0 (MiFindContiguousPagesNode.c)
 *     MiAdjustCachedStacks @ 0x1402A8504 (MiAdjustCachedStacks.c)
 *     MiAdjustCachedStackList @ 0x1402A8660 (MiAdjustCachedStackList.c)
 * Callees:
 *     MiDeleteCachedKernelStack @ 0x14028FE5C (MiDeleteCachedKernelStack.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1402A97A0 (MiDeleteCachedKernelShadowStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiPruneCachedStackList(union _SLIST_HEADER *a1, union _SLIST_HEADER *a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  PSLIST_ENTRY v9; // rax
  struct _SLIST_ENTRY *v10; // rbx

  for ( result = LOWORD(a2->Alignment); (unsigned int)result > a3; result = LOWORD(a2->Alignment) )
  {
    v9 = RtlpInterlockedPopEntrySList(a2);
    v10 = v9;
    if ( v9 )
    {
      if ( a4 )
      {
        MiDeleteCachedKernelShadowStack(a1);
        RtlpInterlockedPushEntrySList(a1 + 32, v10);
      }
      else
      {
        MiDeleteCachedKernelStack((__int64)a1, (__int64)v9);
      }
    }
  }
  return result;
}
