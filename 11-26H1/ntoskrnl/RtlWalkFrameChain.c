/*
 * XREFs of RtlWalkFrameChain @ 0x1402622E0
 * Callers:
 *     SepGetStackTraceHash @ 0x140260450 (SepGetStackTraceHash.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x140260610 (EtwpExpandStackAndWalkFrameChain.c)
 *     EtwpExpandedStackWalk @ 0x140260E60 (EtwpExpandedStackWalk.c)
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     CmpGetSharedLockHandle @ 0x140260F30 (CmpGetSharedLockHandle.c)
 *     CmpTestRegistryLockExclusive @ 0x1402611A0 (CmpTestRegistryLockExclusive.c)
 *     CmpTestRegistryLock @ 0x140261420 (CmpTestRegistryLock.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x1402616A0 (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpRecordRegistryLockRelease @ 0x140261910 (CmpRecordRegistryLockRelease.c)
 *     CmpRecordRegistryLockSharedAcquire @ 0x140261B80 (CmpRecordRegistryLockSharedAcquire.c)
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     CmpGetThreadInfo @ 0x140262070 (CmpGetThreadInfo.c)
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     KiDpcWatchdogCaptureStack @ 0x140473C20 (KiDpcWatchdogCaptureStack.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140473EA4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1406CC658 (EtwpCovSampCaptureKernelStack.c)
 *     PspCriticalProcessDeathUserModulesCollect @ 0x14080091C (PspCriticalProcessDeathUserModulesCollect.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140831560 (EtwTimLogRedirectionTrustPolicy.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ExpUpdateDebugInfo @ 0x140908210 (ExpUpdateDebugInfo.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     EtwpCovSampCaptureUserStack @ 0x140A36CA0 (EtwpCovSampCaptureUserStack.c)
 *     PoDiagCaptureUsermodeStack @ 0x140A73E14 (PoDiagCaptureUsermodeStack.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402623C0 (MmCanThreadFault.c)
 *     RtlpWalkFrameChain @ 0x140262420 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  int v3; // r14d
  ULONG v4; // edi
  BOOL v5; // ebx
  ULONG v6; // esi
  ULONG v7; // ebp
  unsigned int v8; // ecx
  ULONG result; // eax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = (int)Callers;
  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE )
    return 0;
  if ( Count == -1 )
    return 0;
  v5 = (Flags & 2) == 0;
  v6 = v5 + (Flags >> 8);
  v7 = v5 + Count;
  if ( !(unsigned int)MmCanThreadFault(Callers, Count, Flags) && (v4 & 1) != 0 )
    return 0;
  v10[0] = 0LL;
  v11 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v11, v10) || (unsigned __int64)(KeGetCurrentStackPointer() - v11) < 0xE30 )
    return 0;
  v8 = RtlpWalkFrameChain(v3, v7, v4, v6, 0LL);
  result = (__PAIR64__(v8, v4 & 2) - 1) >> 32;
  if ( !v8 )
    return 0;
  return result;
}
