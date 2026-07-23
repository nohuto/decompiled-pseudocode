/*
 * XREFs of ViDeadlockUpdateChildrenCount @ 0x140C3E4C0
 * Callers:
 *     ViDeadlockMergeNodes @ 0x140C3DB54 (ViDeadlockMergeNodes.c)
 *     ViDeadlockRemoveNode @ 0x140C3DED8 (ViDeadlockRemoveNode.c)
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
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
