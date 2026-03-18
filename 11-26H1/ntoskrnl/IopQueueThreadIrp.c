/*
 * XREFs of IopQueueThreadIrp @ 0x14032F090
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopBuildDeviceIoControlRequest @ 0x14026B1B0 (IopBuildDeviceIoControlRequest.c)
 *     MiSynchronousPageWrite @ 0x14026B4C4 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026B73C (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026B9F0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x14026E454 (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x1404F0940 (IoQueueThreadIrp.c)
 *     IoEnqueueIrp @ 0x140796400 (IoEnqueueIrp.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x140903830 (IoCancelFileOpen.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 *     IopSynchronousServiceTail @ 0x1409B2704 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1409FC6D0 (IopGetFileInformation.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA5C88 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x140AA8480 (PnpQueryInterface.c)
 *     IopBuildSynchronousFsdRequest @ 0x140AD4020 (IopBuildSynchronousFsdRequest.c)
 *     IoBuildSynchronousFsdRequest @ 0x140AD5C20 (IoBuildSynchronousFsdRequest.c)
 *     IopCreateArcName @ 0x140B1C9D8 (IopCreateArcName.c)
 *     IoSetInformation @ 0x140B326A0 (IoSetInformation.c)
 *     IoVerifyVolume @ 0x140B47540 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x140B6E8DC (IopFreeBandwidthContract.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  __int64 *v4; // r14
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 152);
  v3 = (_QWORD *)(a1 + 32);
  v4 = (__int64 *)(v2 + 1344);
  v5 = (volatile signed __int32 *)(v2 + 1560);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64(v5, 0LL) )
      KxWaitForSpinLockAndAcquire(v5);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v5);
  }
  v7 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    __fastfail(3u);
  *v3 = v7;
  v3[1] = v4;
  *(_QWORD *)(v7 + 8) = v3;
  *v4 = (__int64)v3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v5, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
