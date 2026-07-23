/*
 * XREFs of VfFaultsInitPhase0 @ 0x140C3A594
 * Callers:
 *     VfRlrsEntry @ 0x14064BDB0 (VfRlrsEntry.c)
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     VfFaultsAddAllApps @ 0x140C3A42C (VfFaultsAddAllApps.c)
 *     VfFaultsAddAllTags @ 0x140C3A4E0 (VfFaultsAddAllTags.c)
 */

void VfFaultsInitPhase0()
{
  __int64 v0; // rax
  KIRQL v1; // al
  KIRQL v2; // al

  v0 = (unsigned int)ViFaultTracesLength;
  ViRequiredTimeSinceBootInMsecs = 60000LL * (unsigned int)VfFaultInjectionBootMinutes;
  ViFaultInjectionLock = 0LL;
  if ( (unsigned int)ViFaultTracesLength > 0x101000 )
  {
    v0 = 1052672LL;
    ViFaultTracesLength = 1052672;
  }
  ViFaultTraces = (PVOID)ExAllocatePool3(
                           64LL,
                           (struct _KLOCK_ENTRIES *)(72 * v0),
                           0x74746C46u,
                           (__int64)&VfExtendedParameters,
                           1u);
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViHaveFaultTags = 0;
  qword_140F08B18 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v1);
  if ( VerifierFaultTagsBufferSize != -1 && (unsigned int)(VerifierFaultTagsBufferSize - 2) <= 0xFE )
    VfFaultsAddAllTags(VerifierFaultTagsBuffer, ((unsigned __int64)(unsigned int)VerifierFaultTagsBufferSize - 2) >> 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  qword_140F08C28 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v2);
  if ( VerifierFaultApplicationsBufferSize != -1 && (unsigned int)(VerifierFaultApplicationsBufferSize - 2) <= 0xFE )
    VfFaultsAddAllApps(
      VerifierFaultApplicationsBuffer,
      ((unsigned __int64)(unsigned int)VerifierFaultApplicationsBufferSize - 2) >> 1);
  ViFaultsInitialized = 1;
}
