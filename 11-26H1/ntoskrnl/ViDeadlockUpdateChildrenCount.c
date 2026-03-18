/*
 * XREFs of ViDeadlockUpdateChildrenCount @ 0x140C384B0
 * Callers:
 *     ViDeadlockMergeNodes @ 0x140C37B44 (ViDeadlockMergeNodes.c)
 *     ViDeadlockRemoveNode @ 0x140C37EC8 (ViDeadlockRemoveNode.c)
 *     VfDeadlockAcquireResource @ 0x140C47314 (VfDeadlockAcquireResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViDeadlockUpdateChildrenCount(__int64 **a1, int a2)
{
  __int64 *i; // r8
  __int64 result; // rax

  *((_DWORD *)a1 + 19) += a2;
  for ( i = *a1; i; i = (__int64 *)*i )
  {
    *((_DWORD *)i + 19) += a2;
    a1 = (__int64 **)i;
  }
  result = *((unsigned int *)a1 + 19);
  if ( (int)result > *((_DWORD *)ViDeadlockGlobals + 8282) )
    *((_DWORD *)ViDeadlockGlobals + 8282) = result;
  return result;
}
