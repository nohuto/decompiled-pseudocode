/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x14032D2B0
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x1402C3770 (KiInvokeInterruptServiceRoutine.c)
 *     KiExpireTimer2 @ 0x140336F08 (KiExpireTimer2.c)
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x1403AA6A8 (KiFinalizeTimer2Disablement.c)
 *     KiProcessExpiredTimerList @ 0x1403ABBEC (KiProcessExpiredTimerList.c)
 *     KeFlushIoBuffers @ 0x140441180 (KeFlushIoBuffers.c)
 *     IopTimerDispatch @ 0x1404D3F80 (IopTimerDispatch.c)
 *     KiScanInterruptObjectList @ 0x140729D60 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140729EA0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140729F50 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x14072E690 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x14072E740 (KiVmbusInterruptSubDispatch.c)
 *     CmpReplicateKeyToVirtual @ 0x140859F40 (CmpReplicateKeyToVirtual.c)
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     CmpSecurityMethod @ 0x1408ED400 (CmpSecurityMethod.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     CmCreateKey @ 0x1409748F0 (CmCreateKey.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14097D340 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     CmpCloseKeyObject @ 0x140A59A10 (CmpCloseKeyObject.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021C830 (RtlGetSystemTimePrecise.c)
 *     EtwpGetPerfCounter @ 0x14032D3B0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x14046F124 (EtwpGetHostPerfCounter.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  __int64 *v4; // rdi
  char v5; // bl
  unsigned int v6; // eax
  bool i; // zf
  __int64 v8; // r8
  __int64 PerfCounter; // rax
  __int64 SystemTimePrecise; // rax
  __int64 result; // rax

  v3 = (unsigned int)a2;
  v4 = (__int64 *)a1;
  v5 = 0;
  if ( qword_140FC8C80 )
  {
    v6 = *(_DWORD *)(qword_140FC8C80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&a3, v6); !i; i = !_BitScanForward((unsigned int *)&a3, v6) )
    {
      v6 &= v6 - 1;
      a1 = (unsigned int)a3;
      v8 = qword_140FC8C80 + 32 * a3 + 4556;
      if ( v8 )
      {
        a2 = v3 >> 29;
        if ( ((unsigned int)v3 & *(_DWORD *)(v8 + 4 * (v3 >> 29)) & 0x1FFFFFFF) != 0 )
        {
          a1 = *(unsigned __int8 *)(qword_140FC8C80 + 2 * a1 + 4505);
          a2 = (unsigned int)(1 << a1);
          v5 |= a2;
        }
      }
    }
    if ( (v5 & 2) == 0 )
    {
      PerfCounter = 0LL;
      goto LABEL_7;
    }
  }
  else
  {
    v5 = 30;
  }
  PerfCounter = EtwpGetPerfCounter(a1, a2, a3);
LABEL_7:
  *v4 = PerfCounter;
  if ( (v5 & 4) != 0 )
    SystemTimePrecise = RtlGetSystemTimePrecise();
  else
    SystemTimePrecise = 0LL;
  v4[1] = SystemTimePrecise;
  if ( (v5 & 8) != 0 )
  {
    result = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(result) << 32;
  }
  else
  {
    result = 0LL;
  }
  v4[2] = result;
  if ( (v5 & 0x10) != 0 )
  {
    result = EtwpGetHostPerfCounter(a1, a2, a3);
    v4[3] = result;
  }
  else
  {
    v4[3] = 0LL;
  }
  return result;
}
