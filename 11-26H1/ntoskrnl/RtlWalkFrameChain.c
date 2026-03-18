/*
 * XREFs of RtlWalkFrameChain @ 0x140262D70
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     SepGetStackTraceHash @ 0x140260EE8 (SepGetStackTraceHash.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x1402610A0 (EtwpExpandStackAndWalkFrameChain.c)
 *     EtwpExpandedStackWalk @ 0x1402618F0 (EtwpExpandedStackWalk.c)
 *     RtlCaptureStackBackTrace @ 0x140261920 (RtlCaptureStackBackTrace.c)
 *     CmpGetSharedLockHandle @ 0x1402619C0 (CmpGetSharedLockHandle.c)
 *     CmpTestRegistryLockExclusive @ 0x140261C30 (CmpTestRegistryLockExclusive.c)
 *     CmpTestRegistryLock @ 0x140261EB0 (CmpTestRegistryLock.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x140262130 (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpRecordRegistryLockRelease @ 0x1402623A0 (CmpRecordRegistryLockRelease.c)
 *     CmpRecordRegistryLockSharedAcquire @ 0x140262610 (CmpRecordRegistryLockSharedAcquire.c)
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     CmpGetThreadInfo @ 0x140262B00 (CmpGetThreadInfo.c)
 *     KiDpcWatchdogCaptureStack @ 0x14047A2B0 (KiDpcWatchdogCaptureStack.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14047A534 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1406C8678 (EtwpCovSampCaptureKernelStack.c)
 *     PspCriticalProcessDeathUserModulesCollect @ 0x1407FAEEC (PspCriticalProcessDeathUserModulesCollect.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x14082B320 (EtwTimLogRedirectionTrustPolicy.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     EtwpCovSampCaptureUserStack @ 0x140A24190 (EtwpCovSampCaptureUserStack.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x140A66E44 (PoDiagCaptureUsermodeStack.c)
 * Callees:
 *     MmCanThreadFault @ 0x140262E50 (MmCanThreadFault.c)
 *     RtlpWalkFrameChain @ 0x140262EB0 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x140263CC0 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x140727390 (KeGetCurrentStackPointer.c)
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
  if ( !(unsigned int)MmCanThreadFault(Callers) && (v4 & 1) != 0 )
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
