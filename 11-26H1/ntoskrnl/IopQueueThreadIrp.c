/*
 * XREFs of IopQueueThreadIrp @ 0x1403310C0
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopBuildDeviceIoControlRequest @ 0x14026A720 (IopBuildDeviceIoControlRequest.c)
 *     MiSynchronousPageWrite @ 0x14026AA34 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x1404E9F20 (IoQueueThreadIrp.c)
 *     IoEnqueueIrp @ 0x140798F30 (IoEnqueueIrp.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     IopGetFileInformation @ 0x1409212D0 (IopGetFileInformation.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x1409337C0 (IoCancelFileOpen.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA0E80 (IopFilterResourceRequirementsCall.c)
 *     IopBuildSynchronousFsdRequest @ 0x140AD1480 (IopBuildSynchronousFsdRequest.c)
 *     IoBuildSynchronousFsdRequest @ 0x140AD2BD0 (IoBuildSynchronousFsdRequest.c)
 *     IopCreateArcName @ 0x140B1EBE8 (IopCreateArcName.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 *     IoVerifyVolume @ 0x140B49570 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x140B71E1C (IopFreeBandwidthContract.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v5, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
