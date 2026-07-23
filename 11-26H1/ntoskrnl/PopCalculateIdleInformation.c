/*
 * XREFs of PopCalculateIdleInformation @ 0x140423CE4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateCsSummary @ 0x140422F4C (PopCalculateCsSummary.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1407E2720 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1409F80B0 (PopDripsWatchdogStartWatchdog.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140B49BC4 (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 *     PpmQueryPlatformStateResidency @ 0x14042493C (PpmQueryPlatformStateResidency.c)
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140529210 (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PopCalculateIdleInformation(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // r12d
  __int64 v3; // rbx
  unsigned int v4; // ebp
  ULONGLONG v5; // r13
  __int64 v6; // r15
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  ULONGLONG v16; // [rsp+20h] [rbp-58h]
  unsigned int v18; // [rsp+88h] [rbp+10h]
  int v19; // [rsp+90h] [rbp+18h]

  v1 = PpmPlatformStates;
  v2 = 0;
  v3 = a1;
  if ( PpmPlatformStates )
  {
    v1 = *(_QWORD *)(PpmPlatformStates + 48);
    v4 = *(_DWORD *)(v1 + 4);
    v19 = *(_DWORD *)(v1 + 8);
  }
  else
  {
    v4 = 0;
    v19 = 0;
  }
  v5 = 0LL;
  v16 = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v7 = PpmQueryPlatformStateResidency((unsigned int)dword_140E27240);
  v8 = v7;
  if ( (_QWORD)v7 != -1LL )
  {
    v7 = (unsigned __int64)v7 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    v8 /= 0xAuLL;
  }
  v9 = 0LL;
  v10 = 0;
  v18 = 0;
  if ( v4 )
  {
    v11 = v1 + 72;
    v12 = dword_140E27240;
    do
    {
      if ( !(unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(
                            v9,
                            *((_QWORD *)&v7 + 1))
        || *(_BYTE *)(PpmPlatformStates + v5 + 121) )
      {
        v6 += PpmConvertTimeTo(*(_QWORD *)v11, 0xF4240uLL);
      }
      if ( v12 != -1 && v10 == v12 )
      {
        v16 = PpmConvertTimeTo(*(_QWORD *)v11, 0xF4240uLL);
        v18 = *(_DWORD *)(v11 - 24);
        if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v14, v13) )
          v2 = *(_DWORD *)(v11 + 8);
      }
      ++v10;
      v11 += 1032LL;
      v5 += 448LL;
    }
    while ( v10 < v4 );
    v3 = a1;
    v9 = v18;
    v5 = v16;
  }
  *(_DWORD *)(v3 + 28) = v19;
  *(_QWORD *)v3 = v6;
  *(_QWORD *)(v3 + 8) = v5;
  *(_QWORD *)(v3 + 16) = v8;
  *(_DWORD *)(v3 + 24) = v9;
  result = Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v9, *((_QWORD *)&v7 + 1));
  if ( (_DWORD)result )
    *(_DWORD *)(v3 + 32) = v2;
  return result;
}
