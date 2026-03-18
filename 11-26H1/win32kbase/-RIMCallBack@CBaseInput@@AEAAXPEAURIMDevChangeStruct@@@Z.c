/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x14013DFAC
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x14013DF90 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x140014660 (IsThreadCrossSessionAttached.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1400CFCDC (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x14013E280 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14013E518 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14013E738 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _lambda_65e0d2d98340653a56fe7d74fa289e35_::_lambda_65e0d2d98340653a56fe7d74fa289e35_ @ 0x1402181F4 (_lambda_65e0d2d98340653a56fe7d74fa289e35_--_lambda_65e0d2d98340653a56fe7d74fa289e35_.c)
 *     _lambda_65e0d2d98340653a56fe7d74fa289e35_::operator() @ 0x14021823C (_lambda_65e0d2d98340653a56fe7d74fa289e35_--operator().c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  __int64 v3; // rbx
  bool v5; // si
  BOOL v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r14
  int v12; // r15d
  int v13; // eax
  int v14; // eax
  __int64 *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  int v19; // [rsp+30h] [rbp-10h]
  int v20; // [rsp+34h] [rbp-Ch]
  int v21; // [rsp+78h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v5 = *((_DWORD *)a2 + 1) != 3;
  v6 = IsThreadCrossSessionAttached();
  RIMHandleAnySignalledReadsOnDestroyed(a2);
  if ( !v6 && CBaseInput::ExecutingOnSensorHostingThread(this) )
    goto LABEL_3;
  v16 = *(unsigned int *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    *(_DWORD *)(v3 + 240) |= 0x20000000u;
LABEL_36:
    v5 = 0;
    goto LABEL_3;
  }
  if ( *(_DWORD *)a2 == 2 )
    KeBugCheck(0x164u);
  if ( (unsigned int)(v16 - 3) > 1 )
  {
    v21 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2250LL);
  }
  if ( !PtiCurrent(v16, v7) )
    goto LABEL_36;
LABEL_3:
  lambda_65e0d2d98340653a56fe7d74fa289e35_::_lambda_65e0d2d98340653a56fe7d74fa289e35_(&v21, this, v8, 0LL);
  v10 = *(unsigned int *)a2;
  v11 = v9;
  v12 = v9;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( v6 )
    {
      if ( (*(_DWORD *)(v3 + 240) & 0x2000) != 0 )
      {
        v21 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2334LL);
      }
    }
    else
    {
      v14 = lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(&v21, v3);
      v9 = 0LL;
      v12 = v14;
      if ( v14 )
      {
        v15 = (__int64 *)(v3 + 72);
        if ( !v3 )
          v15 = 0LL;
        v11 = *v15;
      }
    }
  }
  else if ( *(_DWORD *)a2 == 2 )
  {
    if ( *(_QWORD *)((v3 + 72) & -(__int64)(v3 != 0)) == v9 )
      lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(&v21, v3);
    v12 = lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(&v21, v3);
    v11 = *(_QWORD *)((v3 + 72) & -(__int64)(v3 != 0));
  }
  else if ( (*(_DWORD *)(v3 + 240) & 0x20000000) == 0 )
  {
    v11 = *(_QWORD *)(v3 + 72);
    v12 = lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(&v21, v3);
  }
  if ( *(_DWORD *)a2 == 4 || *(_DWORD *)a2 == 2 )
    CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(this, *((unsigned int *)a2 + 1), v10, v9);
  if ( v5 && v11 )
  {
    if ( *((_DWORD *)a2 + 1) == 3 )
    {
      v21 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2384LL);
    }
    v13 = *(_DWORD *)(v3 + 240);
    if ( (v13 & 0x20000000) != 0 )
    {
      *(_DWORD *)(v3 + 240) = v13 & 0xDFFFFFFF;
      if ( *(_DWORD *)a2 == 2 )
      {
        v18 = v11;
        v17 = v3 + 72;
        v19 = 0;
        v20 = 1;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)&v17);
      }
      else
      {
        v5 = 0;
      }
    }
    if ( v5 )
    {
      v18 = v11;
      v17 = v3 + 72;
      v20 = *(_DWORD *)a2;
      v19 = v12;
      CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)&v17);
    }
  }
}
