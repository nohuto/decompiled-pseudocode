/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401166DC
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1401166C0 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1400AE580 (IsThreadCrossSessionAttached.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1400FFF28 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x140106ACC (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x14018A4C0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _lambda_e9d9692466b90d39df94103fce77647b_::operator() @ 0x14020ED0C (_lambda_e9d9692466b90d39df94103fce77647b_--operator().c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1402105B8 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  __int64 v3; // rbx
  bool v5; // r14
  BOOL v6; // r12d
  __int64 v7; // rsi
  int v8; // eax
  int v9; // r15d
  int v10; // eax
  _QWORD *v11; // rax
  __int64 *v12; // rsi
  int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  int v16; // [rsp+30h] [rbp-10h]
  int v17; // [rsp+34h] [rbp-Ch]
  CBaseInput *v18; // [rsp+78h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v5 = *((_DWORD *)a2 + 1) != 3;
  v6 = IsThreadCrossSessionAttached();
  RIMHandleAnySignalledReadsOnDestroyed((__int64)a2);
  if ( v6 || !CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      *(_DWORD *)(v3 + 240) |= 0x20000000u;
LABEL_11:
      v5 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)a2 == 2 )
      KeBugCheck(0x164u);
    if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
    {
      LODWORD(v18) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2238LL);
    }
    if ( !PtiCurrent() )
      goto LABEL_11;
  }
LABEL_12:
  v7 = 0LL;
  v8 = *(_DWORD *)a2;
  v18 = this;
  v9 = 0;
  v10 = v8 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = (_QWORD *)(v3 + 72);
      if ( !v3 )
        v11 = 0LL;
      if ( !*v11 )
        lambda_e9d9692466b90d39df94103fce77647b_::operator()(&v18, v3);
      v9 = lambda_e9d9692466b90d39df94103fce77647b_::operator()(&v18, v3);
      v7 = *(_QWORD *)((v3 + 72) & -(__int64)(v3 != 0));
    }
    else if ( (*(_DWORD *)(v3 + 240) & 0x20000000) == 0 )
    {
      v7 = *(_QWORD *)(v3 + 72);
      v9 = lambda_e9d9692466b90d39df94103fce77647b_::operator()(&v18, v3);
    }
  }
  else if ( v6 )
  {
    if ( (*(_DWORD *)(v3 + 240) & 0x2000) != 0 )
    {
      LODWORD(v18) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2321LL);
    }
  }
  else
  {
    v9 = lambda_e9d9692466b90d39df94103fce77647b_::operator()(&v18, v3);
    if ( v9 )
    {
      v12 = (__int64 *)(v3 + 72);
      if ( !v3 )
        v12 = 0LL;
      v7 = *v12;
    }
  }
  if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
    CBaseInput::ApplyRimDevBackedDeviceSummaryInformation((__int64)this, *((_DWORD *)a2 + 1));
  if ( v5 && v7 )
  {
    if ( *((_DWORD *)a2 + 1) == 3 )
    {
      LODWORD(v18) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2371LL);
    }
    v13 = *(_DWORD *)(v3 + 240);
    if ( (v13 & 0x20000000) != 0 )
    {
      *(_DWORD *)(v3 + 240) = v13 & 0xDFFFFFFF;
      if ( *(_DWORD *)a2 == 2 )
      {
        v15 = v7;
        v14 = v3 + 72;
        v16 = 0;
        v17 = 1;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)&v14);
      }
      else
      {
        v5 = 0;
      }
    }
    if ( v5 )
    {
      v15 = v7;
      v14 = v3 + 72;
      v17 = *(_DWORD *)a2;
      v16 = v9;
      CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)&v14);
    }
  }
}
