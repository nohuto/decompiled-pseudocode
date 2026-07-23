/*
 * XREFs of HvlUpdatePerformanceStateCountersForLp @ 0x14032DD60
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402547B0 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     EtwTraceTimedEvent @ 0x14032D7A0 (EtwTraceTimedEvent.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     HvcallpNoHypervisorPresent @ 0x1404DF730 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlUpdatePerformanceStateCountersForLp(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int16 v6; // bx
  int v8; // ebx
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h]

  v11[1] = 65774LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (BYTE4(xmmword_140FC0C10) & 0x10) == 0 )
  {
    v3 = 0;
    goto LABEL_10;
  }
  v5 = qword_140FC9C80;
  v3 = 1;
  LODWORD(v11[0]) = 0;
  v8 = 0;
  if ( qword_140FC9C80 )
  {
    a3 = *(unsigned int *)(qword_140FC9C80 + 4520);
    while ( _BitScanForward((unsigned int *)&a1, a3) )
    {
      a3 = ((_DWORD)a3 - 1) & (unsigned int)a3;
      v10 = qword_140FC9C80 + 32LL * (unsigned int)a1 + 4556;
      if ( v10 && (*(_DWORD *)(v10 + 20) & 0x10) != 0 )
        v8 |= 1 << *(_BYTE *)(qword_140FC9C80 + 2 * a1 + 4505);
    }
    if ( (v8 & 2) == 0 )
      goto LABEL_4;
  }
  else
  {
    LOBYTE(v8) = 30;
  }
  *(_QWORD *)&v12 = EtwpGetPerfCounter(a1, qword_140FC9C80, a3);
LABEL_4:
  if ( (v8 & 4) != 0 )
    *((LARGE_INTEGER *)&v12 + 1) = RtlGetSystemTimePrecise();
  else
    *((_QWORD *)&v12 + 1) = 0LL;
  if ( (v8 & 8) != 0 )
  {
    v4 = __rdtsc();
    v5 = (unsigned __int64)HIDWORD(v4) << 32;
    *(_QWORD *)&v13 = v4;
  }
  else
  {
    *(_QWORD *)&v13 = 0LL;
  }
  if ( (v8 & 0x10) != 0 )
    *((_QWORD *)&v13 + 1) = EtwpGetHostPerfCounter(a1, v5, a3);
  else
    *((_QWORD *)&v13 + 1) = 0LL;
LABEL_10:
  v6 = HvcallCodeVa();
  if ( v3 )
  {
    v11[0] = 0x1000000EELL;
    EtwTraceTimedEvent(3954, 0xA0000010, (__int64)v11, 8, 5246466, (__int64)&v12);
  }
  if ( v6 )
    return HvlpHvToNtStatus(v6);
  else
    return 0LL;
}
