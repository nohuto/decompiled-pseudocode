/*
 * XREFs of PopSmartSuspendMakePredictions @ 0x140B6E7E8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D9840 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopPowerAggregatorNotifyAcDcStateChange @ 0x1407D9D50 (PopPowerAggregatorNotifyAcDcStateChange.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     Feature_SmartSuspend_Action__private_IsEnabledDeviceUsageNoInline @ 0x14060FBAC (Feature_SmartSuspend_Action__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDiagTraceSmartSuspendPrediction @ 0x1407D7EDC (PopDiagTraceSmartSuspendPrediction.c)
 *     PopUmpoQuerySmartSuspendPrediction @ 0x1407DF544 (PopUmpoQuerySmartSuspendPrediction.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x140B30718 (PopIsDozeSupported.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

unsigned __int8 __fastcall PopSmartSuspendMakePredictions(int a1)
{
  int v1; // esi
  __int64 v2; // r14
  __int64 v3; // r13
  unsigned __int64 v4; // r15
  int SmartSuspendPrediction; // r12d
  unsigned __int8 result; // al
  __int64 v7; // rdi
  _BYTE *v8; // rdi
  int v9; // eax
  char IsDozeSupported; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // bl
  int IsEnabledDeviceUsageNoInline; // eax
  char v19; // cl
  __int64 v20; // [rsp+28h] [rbp-A9h]
  int v21; // [rsp+28h] [rbp-A9h]
  int v22; // [rsp+2Ch] [rbp-A5h]
  _BYTE v23[80]; // [rsp+38h] [rbp-99h] BYREF
  _BYTE v24[2]; // [rsp+88h] [rbp-49h] BYREF
  char v25; // [rsp+8Ah] [rbp-47h]
  int v26; // [rsp+90h] [rbp-41h]
  int v27; // [rsp+94h] [rbp-3Dh]
  __int64 v28; // [rsp+A8h] [rbp-29h]
  __int64 v29; // [rsp+B0h] [rbp-21h]
  __int64 v30; // [rsp+B8h] [rbp-19h]
  __int64 v31; // [rsp+C0h] [rbp-11h]

  HIDWORD(v20) = a1;
  memset_0(v23, 0, 0x4CuLL);
  v1 = 0;
  memset_0(v24, 0, 0x68uLL);
  v2 = 0LL;
  v3 = -1LL;
  v29 = -1LL;
  v30 = 0LL;
  v4 = -1LL;
  v31 = -1LL;
  SmartSuspendPrediction = -1073741637;
  result = SSHSupportIsPlatformAoAc();
  if ( result && HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == 1 )
  {
    v7 = 104LL * (((_BYTE)dword_140F0CA48 + 1) & 0xF);
    dword_140F0CA48 = ((_BYTE)dword_140F0CA48 + 1) & 0xF;
    v8 = (char *)&unk_140F0CA60 + v7;
    *(_QWORD *)&PopPdcDeviceListLock.Spare36 = v8;
    memset_0(v8, 0, 0x68uLL);
    v9 = PopSmartSuspendPredictionId + 1;
    *((_QWORD *)v8 + 5) = -1LL;
    LODWORD(v20) = v9;
    PopSmartSuspendPredictionId = v9;
    *((_QWORD *)v8 + 7) = -1LL;
    PopFilterCapabilities((__int64)&PpmIdlePolicyLock.Padding[1], (__int64)v23);
    IsDozeSupported = PopIsDozeSupported((__int64)v23);
    PopReleasePolicyLock(v12, v11, v13, v14, v20);
    if ( IsDozeSupported )
    {
      SmartSuspendPrediction = PopUmpoQuerySmartSuspendPrediction();
      if ( SmartSuspendPrediction < 0 )
      {
        v1 = 2;
        PopAcquirePolicyLock(v16, v15);
        goto LABEL_19;
      }
      v4 = v31;
      v2 = v30;
      v3 = v29;
    }
    else
    {
      v1 = 4;
    }
    PopAcquirePolicyLock(v16, v15);
    if ( v21 == PopSmartSuspendPredictionId )
    {
      v17 = v25;
      if ( v25 )
      {
        if ( v2 + 600000000 > v4 )
        {
          v1 |= 0x20u;
          goto LABEL_19;
        }
        if ( !v2 )
        {
          v4 = -1LL;
          v1 |= 0x80u;
        }
      }
      IsEnabledDeviceUsageNoInline = Feature_SmartSuspend_Action__private_IsEnabledDeviceUsageNoInline();
      v19 = v24[0];
      if ( IsEnabledDeviceUsageNoInline )
      {
        *v8 = v24[0];
        v8[2] = v17;
      }
      else
      {
        v1 |= 0x800u;
      }
      *((_QWORD *)v8 + 4) = v28;
      v8[1] = v19;
      v8[3] = v17;
      *((_QWORD *)v8 + 5) = v3;
      *((_QWORD *)v8 + 6) = v2;
      *((_QWORD *)v8 + 7) = v4;
      goto LABEL_19;
    }
    v1 |= 0x80000000;
LABEL_19:
    *((_QWORD *)v8 + 3) = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)v8 + 18) = v21;
    *((_DWORD *)v8 + 2) = v26;
    *((_DWORD *)v8 + 3) = v27;
    *((_DWORD *)v8 + 17) = v22;
    *((_DWORD *)v8 + 1) = v1;
    *((_DWORD *)v8 + 24) = SmartSuspendPrediction;
    return PopDiagTraceSmartSuspendPrediction();
  }
  return result;
}
