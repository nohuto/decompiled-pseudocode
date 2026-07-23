/*
 * XREFs of MiPruneCachedStackList @ 0x1402918B8
 * Callers:
 *     MiFindContiguousPagesNode @ 0x14028FA50 (MiFindContiguousPagesNode.c)
 *     MiAdjustCachedStacks @ 0x1402A7914 (MiAdjustCachedStacks.c)
 *     MiAdjustCachedStackList @ 0x1402A7A70 (MiAdjustCachedStackList.c)
 * Callees:
 *     MiDeleteCachedKernelStack @ 0x14028F3BC (MiDeleteCachedKernelStack.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1402A8BB0 (MiDeleteCachedKernelShadowStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiPruneCachedStackList(_SLIST_HEADER *a1, _SLIST_HEADER *a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *v10; // rbx

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
