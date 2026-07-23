/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x14032F2E0
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x14030E430 (KiInvokeInterruptServiceRoutine.c)
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x1403B42B8 (KiFinalizeTimer2Disablement.c)
 *     KiProcessExpiredTimerList @ 0x1403B58FC (KiProcessExpiredTimerList.c)
 *     KeFlushIoBuffers @ 0x140439C90 (KeFlushIoBuffers.c)
 *     IopTimerDispatch @ 0x1404CD7F0 (IopTimerDispatch.c)
 *     KiScanInterruptObjectList @ 0x14072E930 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14072EA70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14072EB20 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x140733260 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140733310 (KiVmbusInterruptSubDispatch.c)
 *     CmpReplicateKeyToVirtual @ 0x140860234 (CmpReplicateKeyToVirtual.c)
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 *     CmpSecurityMethod @ 0x1408F39C0 (CmpSecurityMethod.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14093F350 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     CmpCloseKeyObject @ 0x140A66980 (CmpCloseKeyObject.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
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
  LARGE_INTEGER SystemTimePrecise; // rax
  __int64 result; // rax

  v3 = (unsigned int)a2;
  v4 = (__int64 *)a1;
  v5 = 0;
  if ( qword_140FC9C80 )
  {
    v6 = *(_DWORD *)(qword_140FC9C80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&a3, v6); !i; i = !_BitScanForward((unsigned int *)&a3, v6) )
    {
      v6 &= v6 - 1;
      a1 = (unsigned int)a3;
      v8 = qword_140FC9C80 + 32 * a3 + 4556;
      if ( v8 )
      {
        a2 = v3 >> 29;
        if ( ((unsigned int)v3 & *(_DWORD *)(v8 + 4 * (v3 >> 29)) & 0x1FFFFFFF) != 0 )
        {
          a1 = *(unsigned __int8 *)(qword_140FC9C80 + 2 * a1 + 4505);
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
    SystemTimePrecise.QuadPart = 0LL;
  v4[1] = SystemTimePrecise.QuadPart;
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
