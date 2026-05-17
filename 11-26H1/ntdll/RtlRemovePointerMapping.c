/*
 * XREFs of RtlRemovePointerMapping @ 0x180145DE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&RtlpPtrTreeLock, (__int64)a2);
  v4 = RtlpPtrTree;
  if ( (qword_1801C60A8 & 1) != 0 && RtlpPtrTree )
    v4 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  while ( v4 )
  {
    if ( a1 - *(_QWORD *)(v4 + 24) < 0 )
    {
      v5 = *(_QWORD *)v4;
    }
    else
    {
      if ( a1 - *(_QWORD *)(v4 + 24) <= 0 )
        break;
      v5 = *(_QWORD *)(v4 + 8);
    }
    if ( (qword_1801C60A8 & 1) != 0 && v5 )
      v4 ^= v5;
    else
      v4 = v5;
  }
  if ( v4 )
    RtlRbRemoveNode((__int64)&RtlpPtrTree, v4);
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( !v4 )
    return 3221226021LL;
  *a2 = *(_QWORD *)(v4 + 32);
  RtlFreeHeap_0();
  return 0LL;
}
