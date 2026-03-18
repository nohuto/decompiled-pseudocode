/*
 * XREFs of MxRemoveFreeZeroMemoryDescriptor @ 0x140CF82D0
 * Callers:
 *     MxCreateFreePageNode @ 0x140CF5A8C (MxCreateFreePageNode.c)
 *     MxGetFreePageDescriptor @ 0x140CF6CA0 (MxGetFreePageDescriptor.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     MxUpdateBootNodeFreePageCount @ 0x140CF85D8 (MxUpdateBootNodeFreePageCount.c)
 */

__int64 __fastcall MxRemoveFreeZeroMemoryDescriptor(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax

  v4 = a2[5];
  if ( v4 < 0x40000 )
  {
    v5 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v6 = (_QWORD *)a2[1], (_QWORD *)*v6 != a2) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v7 = v4 < 0x200 ? 0x20 : 0;
    --*(_QWORD *)(v7 + a1 + 40);
    *(_QWORD *)(v7 + a1 + 32) -= a2[5];
  }
  else
  {
    RtlRbRemoveNode(a1, (__int64)a2);
  }
  return MxUpdateBootNodeFreePageCount(a1, a2[5], 0LL);
}
