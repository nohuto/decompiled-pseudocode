/*
 * XREFs of MiLockPageAndSetDirty @ 0x14031A7E4
 * Callers:
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiLockVirtualMemoryVa @ 0x140318C10 (MiLockVirtualMemoryVa.c)
 *     MiMakeCombineCandidateClean @ 0x1403193BC (MiMakeCombineCandidateClean.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MiValidWriteFaultProcess @ 0x1403A76E0 (MiValidWriteFaultProcess.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 */

char __fastcall MiLockPageAndSetDirty(ULONG_PTR BugCheckParameter2, int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned __int64 v4; // rax
  unsigned __int8 v5; // di
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    v5 = 17;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
  }
  else
  {
    LOBYTE(v4) = MiSafeLockPage(
                   (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48,
                   (__int64)((unsigned __int128)((__int64)(BugCheckParameter2 + 0x220000000000LL)
                                               * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3);
    v5 = v4;
    if ( (_BYTE)v4 == 17 )
      return v4;
  }
  v4 = MiCaptureDirtyBitToPfn(BugCheckParameter2);
  if ( v4 )
    v2 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v4 )
    LOBYTE(v4) = MiReleasePageFileInfo(v2, v4, 1);
  if ( v5 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    LOBYTE(v4) = v5;
    __writecr8(v5);
  }
  return v4;
}
