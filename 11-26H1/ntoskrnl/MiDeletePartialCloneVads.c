/*
 * XREFs of MiDeletePartialCloneVads @ 0x1409619E4
 * Callers:
 *     MiAllocateChildVads @ 0x140961AD0 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x140B2090C (MiInsertChildVads.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiCloneLargeFileOnlyVad @ 0x14086CE70 (MiCloneLargeFileOnlyVad.c)
 *     MiReleaseVadEventBlocks @ 0x14095C4CC (MiReleaseVadEventBlocks.c)
 *     MiVadHasSharedCommit @ 0x140961F50 (MiVadHasSharedCommit.c)
 *     MiCloneDiscardVadCommit @ 0x140962060 (MiCloneDiscardVadCommit.c)
 *     MiRemoveSharedCommitNode @ 0x1409C7C70 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x140A96D34 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartialCloneVads(_QWORD *P)
{
  _QWORD *v1; // rdi
  _QWORD **v2; // rbx
  _KPROCESS *i; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int SessionId; // eax

  v1 = P;
  v2 = (_QWORD **)P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v1; v2 = (_QWORD **)v1 )
  {
    v1 = (_QWORD *)*v1;
    v4 = MiReadVadFlags((__int64)v2) & 0x1C;
    if ( (_DWORD)v4 == 20 )
    {
      if ( *(_QWORD *)(*v2[10] + 64LL) )
        MiCloneLargeFileOnlyVad(v5, 0);
    }
    else if ( (_DWORD)v4 == 8 )
    {
      v6 = *v2[10];
      if ( (*(_DWORD *)(v6 + 56) & 8) != 0 && (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
      {
        SessionId = PsGetSessionIdEx((__int64)i);
        MiDereferencePerSessionProtos(v6, SessionId);
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit(v2) )
      MiRemoveSharedCommitNode(*v2[10], i, 0LL);
    MiReleaseVadEventBlocks((__int64)v2);
    MiCloneDiscardVadCommit(v2);
    ExFreePoolWithTag(v2, 0);
  }
}
