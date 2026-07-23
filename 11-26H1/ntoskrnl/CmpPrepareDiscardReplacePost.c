/*
 * XREFs of CmpPrepareDiscardReplacePost @ 0x140865150
 * Callers:
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408650A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     CmpCloneToUnbackedKcb @ 0x14085F524 (CmpCloneToUnbackedKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpPrepareDiscardReplacePost(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0LL;
  CmpReferenceKeyControlBlock(BugCheckParameter4);
  v6 = CmpCloneToUnbackedKcb(BugCheckParameter4, &v10);
  if ( v6 < 0 )
  {
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4);
  }
  else
  {
    v7 = *(_QWORD **)(a3 + 24);
    v8 = (_QWORD *)(v10 + 120);
    if ( *v7 != a3 + 16 )
      __fastfail(3u);
    *v8 = a3 + 16;
    v6 = 0;
    v8[1] = v7;
    *v7 = v8;
    *(_QWORD *)(a3 + 24) = v8;
  }
  *(_DWORD *)(a3 + 8) = v6;
  LOBYTE(v3) = v6 < 0;
  return v3;
}
