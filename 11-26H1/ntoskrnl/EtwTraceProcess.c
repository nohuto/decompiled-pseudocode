/*
 * XREFs of EtwTraceProcess @ 0x14096E118
 * Callers:
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 *     PspExitProcess @ 0x140A43620 (PspExitProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140491610 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpInitStateChangeInfo @ 0x140954454 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409546CC (EtwpWriteAppStateChangeSummary.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140955400 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x14095549C (EtwpWriteAppStateChange.c)
 *     EtwpWriteProcessEvent @ 0x14096E304 (EtwpWriteProcessEvent.c)
 *     EtwpEnumerateAddressSpace @ 0x1409FD0D0 (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteProcessStarted @ 0x140AB66AC (EtwpWriteProcessStarted.c)
 *     EtwpLogProcessPerfCtrs @ 0x140B3B318 (EtwpLogProcessPerfCtrs.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(struct _KPROCESS *a1, __int16 a2)
{
  PVOID v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v9[112]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[672]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0LL;
  memset_0(v10, 0, sizeof(v10));
  v6 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask[0] & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(a1);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask[0] & 8) != 0 )
      EtwpLogProcessPerfCtrs(a1);
  }
  EtwpWriteProcessEvent((int)a1, (__int64)P, (__int64)&v7);
  v4 = v7;
  if ( a2 == 769
    && dword_140E08F80
    && (qword_140E08F90 & 0x600000000003LL) != 0
    && (qword_140E08F98 & 0x600000000003LL) == qword_140E08F98 )
  {
    memset_0(v9, 0, 0x62uLL);
    EtwpWriteProcessStarted((_DWORD)a1, (unsigned int)&v6, (unsigned int)v10, (unsigned int)P, (__int64)v4);
    EtwpInitStateChangeInfo((__int64)a1, (__int64)v9);
    *(_WORD *)v9 = 0;
    EtwpWriteAppStateChange((__int64)v9);
    if ( !EtwpAppStateChangeSummaryShouldLogCommandLine((__int64)a1) )
      LOWORD(P[0]) = 0;
    EtwpWriteAppStateChangeSummary((__int64)a1, v9, 0LL, (__int64)v10, &v6, (unsigned __int16 *)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
