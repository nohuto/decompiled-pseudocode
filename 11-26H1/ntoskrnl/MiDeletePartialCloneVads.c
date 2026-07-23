/*
 * XREFs of MiDeletePartialCloneVads @ 0x140A076D8
 * Callers:
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x140B22D0C (MiInsertChildVads.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiCloneLargeFileOnlyVad @ 0x140873250 (MiCloneLargeFileOnlyVad.c)
 *     MiRemoveSharedCommitNode @ 0x140998C50 (MiRemoveSharedCommitNode.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     MiVadHasSharedCommit @ 0x140A07C44 (MiVadHasSharedCommit.c)
 *     MiCloneDiscardVadCommit @ 0x140A07D54 (MiCloneDiscardVadCommit.c)
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartialCloneVads(__int64 *P)
{
  __int64 *v1; // rdi
  __int64 **v2; // rbx
  _KPROCESS *i; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int SessionId; // eax
  struct _KLOCK_ENTRIES *v8; // r9

  v1 = P;
  v2 = (__int64 **)P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v1; v2 = (__int64 **)v1 )
  {
    v1 = (__int64 *)*v1;
    v4 = MiReadVadFlags((__int64)v2) & 0x1C;
    if ( (_DWORD)v4 == 20 )
    {
      if ( *(_QWORD *)(*v2[10] + 64) )
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
      MiRemoveSharedCommitNode(*v2[10], (unsigned __int64)i, 0, v8);
    MiReleaseVadEventBlocks((__int64)v2);
    MiCloneDiscardVadCommit(v2);
    ExFreePoolWithTag(v2, 0);
  }
}
