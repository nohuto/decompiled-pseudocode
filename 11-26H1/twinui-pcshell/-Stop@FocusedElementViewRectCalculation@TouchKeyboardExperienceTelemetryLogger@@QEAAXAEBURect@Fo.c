/*
 * XREFs of ?Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Foundation@Windows@@_N1@Z @ 0x1804861D4
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18024FCC0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564444AEBU?$_tlgWrapperByVal@$00@@7@Z @ 0x1800099D0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800099D0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x180009D08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWr_ea_180009D08.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::Stop(
        TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *this,
        const struct Windows::Foundation::Rect *a2)
{
  __int64 v2; // rdi
  int v5; // eax
  int *v6; // rdi
  const struct _tlgProvider_t *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // [rsp+D4h] [rbp-7Ch] BYREF
  DWORD v16; // [rsp+D8h] [rbp-78h] BYREF
  int v17; // [rsp+DCh] [rbp-74h] BYREF
  int v18; // [rsp+E0h] [rbp-70h] BYREF
  int v19; // [rsp+E4h] [rbp-6Ch] BYREF
  _DWORD v20[6]; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+100h] [rbp-50h] BYREF
  __int64 v22; // [rsp+108h] [rbp-48h] BYREF
  __int64 v23; // [rsp+110h] [rbp-40h] BYREF
  __int64 v24; // [rsp+118h] [rbp-38h] BYREF
  __int64 v25; // [rsp+120h] [rbp-30h] BYREF
  __int64 v26; // [rsp+128h] [rbp-28h] BYREF
  __int64 v27; // [rsp+130h] [rbp-20h] BYREF
  __int64 v28; // [rsp+138h] [rbp-18h] BYREF
  __int64 v29; // [rsp+140h] [rbp-10h] BYREF
  __int64 v30; // [rsp+148h] [rbp-8h] BYREF

  v2 = *((_QWORD *)this + 34);
  v5 = *(_DWORD *)(v2 + 72);
  if ( v5 < 0 && (v6 = (int *)(v2 + 80), v5 == v6[2]) && v6 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v7 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v7 > 5u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    {
      v20[1] = *((_DWORD *)a2 + 3);
      v20[2] = *((_DWORD *)a2 + 2);
      v20[3] = *((_DWORD *)a2 + 1);
      v20[4] = *(_DWORD *)a2;
      v22 = *((_QWORD *)v6 + 15);
      v23 = *((_QWORD *)v6 + 14);
      v15 = v6[26];
      v10 = *((_QWORD *)this + 34);
      v24 = *((_QWORD *)v6 + 12);
      v25 = *((_QWORD *)v6 + 11);
      v16 = v6[20];
      v26 = *((_QWORD *)v6 + 9);
      v17 = v6[8];
      v27 = *((_QWORD *)v6 + 3);
      v18 = *v6;
      v28 = *((_QWORD *)v6 + 16);
      v19 = v6[16];
      v29 = *((_QWORD *)v6 + 7);
      v20[0] = v6[2];
      v30 = 0x1000000LL;
      v21 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v8,
        (__int64)&unk_1808105F0,
        v10 + 8,
        v9,
        (__int64)&v21,
        (__int64)&v30,
        (__int64)v20,
        &v29,
        (__int64)&v19,
        &v28,
        (__int64)&v18,
        &v27,
        (__int64)&v17,
        &v26,
        (__int64)&v16,
        &v25,
        &v24,
        (__int64)&v15,
        &v23,
        &v22);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = TouchKeyboardExperienceTraceLogging::Provider();
    v12 = (__int64)v11;
    if ( *(_DWORD *)v11 > 5u && tlgKeywordOn((__int64)v11, 0x400000000000LL) )
    {
      v20[0] = *((_DWORD *)a2 + 3);
      v19 = *((_DWORD *)a2 + 2);
      v18 = *((_DWORD *)a2 + 1);
      v17 = *(_DWORD *)a2;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 34);
      v16 = CurrentThreadId;
      v15 = *(_DWORD *)(v14 + 72);
      v21 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v12,
        (__int64)&unk_1808109A2);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
