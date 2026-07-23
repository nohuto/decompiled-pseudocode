/*
 * XREFs of RtlQueryPointerMapping @ 0x180145B40
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 Root; // rbx
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockShared(&RtlpPtrTreeLock);
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
    *a2 = *(_QWORD *)(Root + 32);
  RtlReleaseSRWLockShared(&RtlpPtrTreeLock);
  return Root == 0 ? 0xC0000225 : 0;
}
