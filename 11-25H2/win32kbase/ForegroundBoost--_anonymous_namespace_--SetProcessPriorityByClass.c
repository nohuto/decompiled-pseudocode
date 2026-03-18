/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140168EE8
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x140168CE4 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400FC000 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x140120934 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A8878 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass(__int64 a1, int a2, int a3)
{
  __int64 v3; // r15
  int v4; // esi
  __int64 v5; // rbx
  char v7; // bp
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rax
  bool v13; // r15
  int v14; // edi
  char v15; // bl
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+80h] [rbp+8h] BYREF
  int v24; // [rsp+88h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = 0;
  v5 = a3;
  v7 = 1;
  if ( !a2 )
  {
    if ( !(unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1) )
    {
      v24 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 178LL);
    }
    *(_QWORD *)(a1 + 808) &= ((__int64)~(_DWORD)v5 << 30) | 0xFFFFFFC03FFFFFFFuLL;
    if ( !(unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1) )
    {
      v10 = 0LL;
LABEL_22:
      PsSetProcessPriorityByClass(v3, v10);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  v8 = (unsigned int)(a2 - 1);
  if ( !(_DWORD)v8 )
  {
    if ( (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1) )
    {
      if ( v11 )
        goto LABEL_17;
    }
    else if ( !v11 )
    {
      v24 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 154LL);
    }
    PsSetProcessPriorityByClass(v3, 1LL);
    if ( !(_DWORD)v5 )
      goto LABEL_23;
LABEL_17:
    v12 = *(_QWORD *)(a1 + 808);
    v8 = v12 | (v5 << 30);
    *(_QWORD *)(a1 + 808) = v8 ^ (v12 ^ v8) & 0xFFFFFFC03FFFFFFFuLL;
    goto LABEL_23;
  }
  if ( (_DWORD)v8 == 1 )
  {
    if ( (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1) == 1 )
    {
      if ( v9 )
      {
        v24 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 193LL);
      }
      v10 = 2LL;
      goto LABEL_22;
    }
    if ( !v9 )
    {
      v24 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 199LL);
    }
    if ( !(unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1) )
    {
      PsSetProcessPriorityByClass(v3, 1LL);
      PsSetProcessPriorityByClass(v3, 2LL);
    }
    goto LABEL_17;
  }
LABEL_23:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *(_DWORD *)(a1 + 56);
    v15 = *(_QWORD *)(a1 + 808) >> 30;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v17) = v13;
    LOBYTE(v18) = v7;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      13,
      11,
      (__int64)&WPP_9013cc159d3036d86bd9082f593c9e7a_Traceguids,
      v14,
      v15);
  }
  IsEnabledDeviceUsageNoInline = Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( (unsigned int)dword_14029EF38 > 5 )
    {
      LOBYTE(IsEnabledDeviceUsageNoInline) = tlgKeywordOn((__int64)&dword_14029EF38, 4LL);
      if ( (_BYTE)IsEnabledDeviceUsageNoInline )
      {
        v23 = *(_DWORD *)(a1 + 56);
        LOBYTE(v4) = (*(_QWORD *)(a1 + 808) & 0x3FC0000000LL) != 0;
        v24 = v4;
        LOBYTE(IsEnabledDeviceUsageNoInline) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                                 (__int64)&dword_14029EF38,
                                                 byte_1402783E9,
                                                 v20,
                                                 v21,
                                                 (__int64)&v23,
                                                 (__int64)&v24);
      }
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
