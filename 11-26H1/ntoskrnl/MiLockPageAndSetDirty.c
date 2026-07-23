/*
 * XREFs of MiLockPageAndSetDirty @ 0x14031C814
 * Callers:
 *     MiRevertValidPte @ 0x1402E69F4 (MiRevertValidPte.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiMakeCombineCandidateClean @ 0x14031B3EC (MiMakeCombineCandidateClean.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiValidWriteFaultProcess @ 0x1403A9440 (MiValidWriteFaultProcess.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 */

char __fastcall MiLockPageAndSetDirty(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  struct _KEVENT *v3; // rsi
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // di
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( a2 )
  {
    v6 = 17;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
  }
  else
  {
    LOBYTE(v5) = MiSafeLockPage(
                   (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48,
                   (__int64)((unsigned __int128)((__int64)(BugCheckParameter2 + 0x220000000000LL)
                                               * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
                   a3);
    v6 = v5;
    if ( (_BYTE)v5 == 17 )
      return v5;
  }
  v5 = MiCaptureDirtyBitToPfn(BugCheckParameter2);
  if ( v5 )
    v3 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 )
    LOBYTE(v5) = MiReleasePageFileInfo(v3, v5, 1LL);
  if ( v6 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    LOBYTE(v5) = v6;
    __writecr8(v6);
  }
  return v5;
}
