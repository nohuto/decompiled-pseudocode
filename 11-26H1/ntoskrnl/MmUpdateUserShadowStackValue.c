/*
 * XREFs of MmUpdateUserShadowStackValue @ 0x1404DA2DC
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x140A045EC (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmUpdateUserShadowStackValue(unsigned __int64 a1, signed __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rax
  volatile signed __int32 *v5; // rsi
  unsigned int v6; // edi
  struct _LIST_ENTRY **p_Blink; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 valid; // r13
  unsigned __int64 PteShadow; // r14
  __int64 v14; // r14
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rdx
  BOOL v17; // r14d
  unsigned __int64 v18; // rax
  struct _KEVENT *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+18h] BYREF
  int v25; // [rsp+84h] [rbp+1Ch]
  ULONG_PTR v26; // [rsp+88h] [rbp+20h] BYREF

  v25 = HIDWORD(a3);
  v24 = 0;
  v22 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v24);
  v5 = (volatile signed __int32 *)v4;
  v26 = v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 48) & 0x1080000) == 0x1080000 )
    {
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        RtlReadUCharFromUser(a1);
        LOBYTE(v24) = MiLockWorkingSetShared((__int64)p_Blink, v10, v11);
        valid = MiLockLowestValidPageTableEx((__int64)p_Blink, v9, (unsigned __int64 *)&v22, 0);
        PteShadow = *v22;
        if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow((unsigned __int64)v22, *v22);
        if ( valid == ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (PteShadow & 1) != 0 )
          break;
        MiUnlockPageTableInternal((__int64)p_Blink, valid);
        LOBYTE(v21) = v24;
        MiUnlockWorkingSetShared((__int64)p_Blink, v21);
      }
      v14 = (PteShadow >> 12) & 0xFFFFFFFFFFLL;
      v15 = 48 * v14 - 0x220000000000LL;
      LODWORD(v26) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      v16 = MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000) + (a1 & 0xFFF);
      v17 = a2 == _InterlockedCompareExchange64((volatile signed __int64 *)v16, 0LL, a2);
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v18 = MiCaptureDirtyBitToPfn(v15);
      if ( v18 )
        v19 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
      else
        v19 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v18 )
        MiReleasePageFileInfo(v19, v18, 1LL);
      MiUnlockPageTableInternal((__int64)p_Blink, valid);
      LOBYTE(v20) = v24;
      MiUnlockWorkingSetShared((__int64)p_Blink, v20);
      v6 = !v17 ? 0xC0000272 : 0;
    }
    else
    {
      v6 = -1073741800;
    }
  }
  else
  {
    v6 = v24;
  }
  if ( v5 )
    MiUnlockAndDereferenceVad(v5);
  return v6;
}
