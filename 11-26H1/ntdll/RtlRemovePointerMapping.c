/*
 * XREFs of RtlRemovePointerMapping @ 0x180145C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlRbRemoveNode @ 0x18008BD00 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 Root; // rbx
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&RtlpPtrTreeLock);
  Root = (unsigned __int64)RtlpPtrTree.Root;
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && RtlpPtrTree.Root )
    Root = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree.Root;
  while ( Root )
  {
    if ( a1 - *(_QWORD *)(Root + 24) < 0 )
    {
      v5 = *(_QWORD *)Root;
    }
    else
    {
      if ( a1 - *(_QWORD *)(Root + 24) <= 0 )
        break;
      v5 = *(_QWORD *)(Root + 8);
    }
    if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && v5 )
      Root ^= v5;
    else
      Root = v5;
  }
  if ( Root )
    RtlRbRemoveNode(&RtlpPtrTree, (PRTL_BALANCED_NODE)Root);
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( !Root )
    return 3221226021LL;
  *a2 = *(_QWORD *)(Root + 32);
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)Root);
  return 0LL;
}
