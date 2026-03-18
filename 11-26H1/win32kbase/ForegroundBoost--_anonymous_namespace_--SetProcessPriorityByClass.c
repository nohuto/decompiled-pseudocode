/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x1401A8944
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401D4108 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1401630E0 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0x1401665C0 (ForegroundBoost--_anonymous_namespace_--IsProcessForegroundBoostedNoSpin.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401901D8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401C93F0 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource @ 0x1401D370C (ForegroundBoost--_anonymous_namespace_--AddProcessBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401D3B5C (ForegroundBoost--_anonymous_namespace_--HasBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource @ 0x1401D4060 (ForegroundBoost--_anonymous_namespace_--RemoveProcessBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy @ 0x1401D42F4 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClassWithPolicy.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // ebp
  const signed __int64 *v7; // r14
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax
  __int64 v11; // r15
  int v12; // edi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  char v16; // r14
  bool v17; // r15
  int v18; // ebx
  char v19; // di
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  unsigned __int8 HasBoostSource; // al
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 *v26; // rdx
  _DWORD v28[4]; // [rsp+50h] [rbp-38h] BYREF
  int v29; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = 0;
  v7 = a1 + 101;
  if ( !(unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline()
    || !_bittest64(v7, 0x29u) )
  {
    v11 = *a1;
    if ( a2 )
    {
      v12 = a2 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          goto LABEL_40;
        if ( ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin() )
        {
          if ( (_DWORD)v3 )
          {
            v29 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 372LL);
          }
          IsEnabledDeviceUsageNoInline = Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline();
          v14 = 2LL;
          if ( IsEnabledDeviceUsageNoInline )
            goto LABEL_35;
LABEL_39:
          PsSetProcessPriorityByClass(v11, v14);
          goto LABEL_40;
        }
        if ( !(_DWORD)v3 )
        {
          v29 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 385LL);
        }
        if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
        {
          if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
          {
            v4 = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(a1, 1LL);
            if ( v4 == 1 )
              v4 = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(a1, 2LL);
          }
          else
          {
            PsSetProcessPriorityByClass(v11, 1LL);
            PsSetProcessPriorityByClass(v11, 2LL);
          }
        }
        goto LABEL_20;
      }
      if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
      {
        if ( !(_DWORD)v3 )
        {
          v29 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 308LL);
        }
      }
      else if ( (_DWORD)v3 )
      {
LABEL_20:
        if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
        {
          ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource(a1, (unsigned int)v3);
        }
        else
        {
          v15 = a1[101];
          v9 = 0x3FFFFFFF;
          v8 = v15 | (v3 << 30);
          a1[101] = v8 ^ (v15 ^ v8) & 0xFFFFFFC03FFFFFFFuLL;
        }
        goto LABEL_40;
      }
      if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
        v4 = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(a1, 1LL);
      else
        PsSetProcessPriorityByClass(v11, 1LL);
      if ( (_DWORD)v3 )
        goto LABEL_20;
    }
    else if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (unsigned int)ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource(a1, (unsigned int)v3) == 1 )
      {
        v14 = 0LL;
LABEL_35:
        v4 = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(a1, v14);
      }
    }
    else if ( !ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    {
      *v7 &= ((__int64)~(_DWORD)v3 << 30) | 0xFFFFFFC03FFFFFFFuLL;
      if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
      {
        v14 = 0LL;
        goto LABEL_39;
      }
    }
LABEL_40:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = *((_DWORD *)a1 + 14);
      v19 = (unsigned __int64)a1[101] >> 30;
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
      LOBYTE(v21) = v17;
      LOBYTE(v22) = v16;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        13,
        13,
        (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
        v18,
        v19);
    }
    v10 = Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline();
    if ( v10 )
    {
      if ( v4 != 1 )
        return v10;
      if ( (unsigned int)dword_1402A9F58 <= 5 )
        return v10;
      LOBYTE(v10) = tlgKeywordOn((__int64)&dword_1402A9F58, 4LL);
      if ( !(_BYTE)v10 )
        return v10;
      HasBoostSource = ForegroundBoost::_anonymous_namespace_::HasBoostSource(a1, 0LL);
      v26 = (unsigned __int8 *)&unk_1402826A3;
    }
    else
    {
      if ( (unsigned int)dword_1402A9F58 <= 5 )
        return v10;
      LOBYTE(v10) = tlgKeywordOn((__int64)&dword_1402A9F58, 4LL);
      if ( !(_BYTE)v10 )
        return v10;
      HasBoostSource = ForegroundBoost::_anonymous_namespace_::HasBoostSource(a1, 0LL);
      v26 = (unsigned __int8 *)&unk_140282658;
    }
    v29 = HasBoostSource;
    v28[0] = *((_DWORD *)a1 + 14);
    LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)&dword_1402A9F58,
                    v26,
                    v24,
                    v25,
                    (__int64)v28,
                    (__int64)&v29);
    return v10;
  }
  LOBYTE(v10) = ForegroundBoost::_anonymous_namespace_::IsProcessBackground();
  if ( !(_BYTE)v10 )
  {
    v29 = 0x20000;
    LOBYTE(v10) = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 295LL);
  }
  return v10;
}
