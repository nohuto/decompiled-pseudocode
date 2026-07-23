/*
 * XREFs of EtwTraceProcess @ 0x1409D02D8
 * Callers:
 *     PspExitProcess @ 0x1409FE380 (PspExitProcess.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14048B160 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpEnumerateAddressSpace @ 0x140921CD0 (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteProcessEvent @ 0x1409D04C4 (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409D0688 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpInitStateChangeInfo @ 0x1409D0CD8 (EtwpInitStateChangeInfo.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1409D0D94 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteProcessStarted @ 0x1409D0E30 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChange @ 0x1409D1170 (EtwpWriteAppStateChange.c)
 *     EtwpLogProcessPerfCtrs @ 0x140B3D598 (EtwpLogProcessPerfCtrs.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(struct _KPROCESS *a1, __int16 a2)
{
  PVOID v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[56]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[672]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0LL;
  memset_0(v10, 0, sizeof(v10));
  v6 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(a1, 0LL, (int *)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask & 8) != 0 )
      EtwpLogProcessPerfCtrs(a1);
  }
  EtwpWriteProcessEvent((int)a1, (__int64)P, (__int64)&v7);
  v4 = v7;
  if ( a2 == 769
    && dword_140E08F40
    && (qword_140E08F50 & 0x600000000003LL) != 0
    && (qword_140E08F58 & 0x600000000003LL) == qword_140E08F58 )
  {
    memset_0(v9, 0, 0x62uLL);
    EtwpWriteProcessStarted((_DWORD)a1, (unsigned int)&v6, (unsigned int)v10, (unsigned int)P, (__int64)v4);
    EtwpInitStateChangeInfo(a1, v9);
    v9[0] = 0;
    EtwpWriteAppStateChange(v9);
    if ( !(unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(a1) )
      LOWORD(P[0]) = 0;
    EtwpWriteAppStateChangeSummary((_DWORD)a1, (unsigned int)v9, 0, (unsigned int)v10, (__int64)&v6, (__int64)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
