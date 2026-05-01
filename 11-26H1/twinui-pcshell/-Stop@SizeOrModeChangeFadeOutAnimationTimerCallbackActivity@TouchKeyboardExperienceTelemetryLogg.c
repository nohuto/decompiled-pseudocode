/*
 * XREFs of ?Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N@Z @ 0x1804712AC
 * Callers:
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180470600 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180004C04 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180004C04.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801DB49C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LogonTabTipGroupPolicy@@@details@wil@@QEAA_NXZ @ 0x180474A58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_LogonTabTipGroupPolicy@@@details@.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::Stop(
        TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity *this,
        char a2)
{
  char IsEnabled; // al
  __int64 v5; // rdi
  int v6; // ecx
  int *v7; // rdi
  const struct _tlgProvider_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r9
  unsigned __int8 *v15; // rdx
  int *v16; // rdi
  const struct _tlgProvider_t *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // ecx
  int v23; // [rsp+C0h] [rbp-80h] BYREF
  int v24; // [rsp+C4h] [rbp-7Ch] BYREF
  int v25; // [rsp+C8h] [rbp-78h] BYREF
  int v26; // [rsp+CCh] [rbp-74h] BYREF
  int v27; // [rsp+D0h] [rbp-70h] BYREF
  int v28; // [rsp+D4h] [rbp-6Ch] BYREF
  int v29; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+100h] [rbp-40h] BYREF
  __int64 v35; // [rsp+108h] [rbp-38h] BYREF
  __int64 v36; // [rsp+110h] [rbp-30h] BYREF
  __int64 v37; // [rsp+118h] [rbp-28h] BYREF
  __int64 v38; // [rsp+120h] [rbp-20h] BYREF
  __int64 v39; // [rsp+128h] [rbp-18h] BYREF
  _QWORD v40[2]; // [rsp+130h] [rbp-10h] BYREF
  char v41; // [rsp+170h] [rbp+30h] BYREF
  DWORD v42; // [rsp+178h] [rbp+38h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_LogonTabTipGroupPolicy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_LogonTabTipGroupPolicy>::GetImpl'::`2'::impl);
  v5 = *((_QWORD *)this + 34);
  v6 = *(_DWORD *)(v5 + 72);
  if ( IsEnabled )
  {
    if ( v6 < 0 )
    {
      v7 = (int *)(v5 + 80);
      if ( v6 == v7[2] )
      {
        if ( v7 )
        {
          wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
          v8 = TouchKeyboardExperienceTraceLogging::Provider();
          if ( *(_DWORD *)v8 > 5u )
          {
            v33 = *((_QWORD *)v7 + 14);
            v9 = *((_QWORD *)v7 + 6);
            v25 = v7[26];
            v34 = *((_QWORD *)v7 + 12);
            v10 = *((_QWORD *)this + 34);
            v35 = *((_QWORD *)v7 + 11);
            v26 = v7[20];
            v36 = *((_QWORD *)v7 + 9);
            v27 = v7[8];
            v37 = *((_QWORD *)v7 + 3);
            v28 = *v7;
            v38 = *((_QWORD *)v7 + 16);
            v29 = v7[16];
            v39 = *((_QWORD *)v7 + 7);
            v23 = v7[2];
            v40[0] = 0x1000000LL;
            v30 = 0x1000000LL;
            v31 = v9;
            v42 = v7[17];
            v24 = v7[4];
            v11 = *((_QWORD *)v7 + 15);
            v41 = a2;
            v32 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
              (__int64)v8,
              (__int64)&unk_18080870F,
              v10 + 8,
              (__int64)v8,
              (__int64)&v30,
              (__int64)v40,
              (__int64)&v23,
              &v39,
              (__int64)&v29,
              &v38,
              (__int64)&v28,
              &v37,
              (__int64)&v27,
              &v36,
              (__int64)&v26,
              &v35,
              &v34,
              (__int64)&v25,
              &v33,
              &v32,
              (__int64)&v24,
              (__int64)&v42,
              &v31);
          }
          goto LABEL_18;
        }
      }
    }
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v12 <= 5u )
      goto LABEL_18;
    v41 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v15 = (unsigned __int8 *)&unk_180808686;
LABEL_17:
    v21 = *((_QWORD *)this + 34);
    v42 = CurrentThreadId;
    v22 = *(_DWORD *)(v21 + 72);
    v30 = 0x1000000LL;
    v23 = v22;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)v12,
      v15,
      (const GUID *)(v21 + 8),
      v14,
      (__int64)&v30,
      (__int64)&v23,
      (__int64)&v42,
      (__int64)&v41);
    goto LABEL_18;
  }
  if ( v6 >= 0 || (v16 = (int *)(v5 + 80), v6 != v16[2]) || !v16 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v12 <= 5u )
      goto LABEL_18;
    v41 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v15 = (unsigned __int8 *)&unk_180808609;
    goto LABEL_17;
  }
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v17 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v17 > 5u )
  {
    v39 = *((_QWORD *)v16 + 14);
    v18 = *((_QWORD *)v16 + 6);
    v29 = v16[26];
    v38 = *((_QWORD *)v16 + 12);
    v19 = *((_QWORD *)this + 34);
    v37 = *((_QWORD *)v16 + 11);
    v28 = v16[20];
    v36 = *((_QWORD *)v16 + 9);
    v27 = v16[8];
    v35 = *((_QWORD *)v16 + 3);
    v26 = *v16;
    v34 = *((_QWORD *)v16 + 16);
    v25 = v16[16];
    v33 = *((_QWORD *)v16 + 7);
    v24 = v16[2];
    v32 = 0x1000000LL;
    v31 = 0x1000000LL;
    v30 = v18;
    v42 = v16[17];
    v23 = v16[4];
    v20 = *((_QWORD *)v16 + 15);
    v41 = a2;
    v40[0] = v20;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
      (__int64)v17,
      (__int64)&unk_180808441,
      v19 + 8,
      (__int64)v17,
      (__int64)&v31,
      (__int64)&v32,
      (__int64)&v24,
      &v33,
      (__int64)&v25,
      &v34,
      (__int64)&v26,
      &v35,
      (__int64)&v27,
      &v36,
      (__int64)&v28,
      &v37,
      &v38,
      (__int64)&v29,
      &v39,
      v40,
      (__int64)&v23,
      (__int64)&v42,
      &v30);
  }
LABEL_18:
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
