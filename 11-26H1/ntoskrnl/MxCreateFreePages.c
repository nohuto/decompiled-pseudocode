/*
 * XREFs of MxCreateFreePages @ 0x140CFC028
 * Callers:
 *     MxAddSmallFreeDescriptorsToFreeList @ 0x140CFB240 (MxAddSmallFreeDescriptorsToFreeList.c)
 *     MxCreateNodeFreeZeroList @ 0x140CFC0E0 (MxCreateNodeFreeZeroList.c)
 * Callees:
 *     MxCreateFreePageNode @ 0x140CFBE0C (MxCreateFreePageNode.c)
 *     MxMapFreePageNode @ 0x140CFE074 (MxMapFreePageNode.c)
 */

unsigned __int64 __fastcall MxCreateFreePages(_RTL_RB_TREE *a1, _RTL_BALANCED_NODE *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r8
  unsigned __int64 FreePageNode; // rbx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( qword_14101FC08 < (unsigned __int64)qword_14101FC10 )
    v5 = 0LL;
  else
    v5 = qword_14101FC08 - qword_14101FC10;
  if ( qword_14101FBF0 <= v5 )
  {
    a3 = 0LL;
  }
  else
  {
    if ( a3 <= qword_14101FBF0 - v5 )
      goto LABEL_10;
    a3 = qword_14101FBF0 - v5;
    if ( qword_14101FBF0 != v5 )
    {
      stru_140E2ED08.ApcStateIndex |= 0x20u;
      goto LABEL_10;
    }
  }
  stru_140E2ED08.ApcStateIndex |= 0x40u;
LABEL_10:
  if ( !a3 )
    return 0LL;
  v8[1] = v8;
  v8[0] = v8;
  FreePageNode = MxCreateFreePageNode(a1, a2, a3, (__int64)v8);
  if ( !FreePageNode )
  {
    stru_140E2ED08.ApcStateIndex |= 8u;
    return 0LL;
  }
  MxMapFreePageNode(a1, v8);
  return FreePageNode;
}
