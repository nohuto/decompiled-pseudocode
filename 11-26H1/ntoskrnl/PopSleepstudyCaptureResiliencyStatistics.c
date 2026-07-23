/*
 * XREFs of PopSleepstudyCaptureResiliencyStatistics @ 0x1407D94D8
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopDiagTraceCsResiliencyExit @ 0x1404235B0 (PopDiagTraceCsResiliencyExit.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x140516910 (PopDiagTraceCsResiliencyEnter.c)
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140529210 (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     PopCalculateTotalHwDripsResidencyV1 @ 0x140534DEC (PopCalculateTotalHwDripsResidencyV1.c)
 *     PopCalculateTotalHwDripsResidencyV0 @ 0x14053547C (PopCalculateTotalHwDripsResidencyV0.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopGetEnergyCounter @ 0x140B3D67C (PopGetEnergyCounter.c)
 *     PopDiagTraceCsResiliencyStats @ 0x140B58FD4 (PopDiagTraceCsResiliencyStats.c)
 */

void __fastcall PopSleepstudyCaptureResiliencyStatistics(_QWORD *a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v8; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v18[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v19; // [rsp+6Ch] [rbp-9Ch]
  __int64 v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A8h] [rbp-60h]
  _BYTE v24[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v25; // [rsp+BCh] [rbp-4Ch]

  DWORD2(v17) = 0;
  v25 = 0;
  *(_QWORD *)&v17 = 0LL;
  v19 = 0;
  memset_0(v18, 0, 0x44uLL);
  v16 = 0;
  PopGetEnergyCounter(&v17);
  if ( a4 )
  {
    PopDiagTraceCsResiliencyEnter(a2, a3, &v17);
  }
  else
  {
    v8 = (a1[14] - a1[2]) / 0xAuLL;
    IsEnabledDeviceUsageNoInline = Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline();
    v10 = a1[12];
    v11 = a1[10];
    if ( IsEnabledDeviceUsageNoInline )
      v12 = PopCalculateTotalHwDripsResidencyV1(v11, v10, v8, &v16);
    else
      v12 = PopCalculateTotalHwDripsResidencyV0(v11, v10, v8);
    v14 = 0LL;
    if ( v12 != -1 )
      v14 = v12;
    qword_140E27118 += v14;
    v15 = a1[13] - a1[11];
    qword_140E27120 += v15;
    if ( qword_140E67808 )
      guard_dispatch_icall_no_overrides((__int64)v18, v13);
    qword_140E271B8 = v20;
    dword_140E271C0 = v21;
    qword_140E271A8 = v22;
    dword_140E271B0 = v23;
    memset_0(v24, 0, 0xF0uLL);
    PopDiagTraceCsResiliencyExit((__int64)v24, a2, a3, (__int64)&v17, v8, v14, v15, (__int64)v18);
    PopDiagTraceCsResiliencyStats(v24);
  }
}
