/*
 * XREFs of ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIIAEBURect@Foundation@Windows@@_N@Z @ 0x18047EAA4
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800278A0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456444444AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180007990 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180007990.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180008830 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperBy.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *this,
        int a2,
        int a3,
        const struct Windows::Foundation::Rect *a4)
{
  __int64 v4; // rdi
  int v9; // eax
  int *v10; // rdi
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  const struct _tlgProvider_t *v14; // rax
  __int64 v15; // rdi
  int v16; // [rsp+E8h] [rbp-78h] BYREF
  int v17; // [rsp+ECh] [rbp-74h] BYREF
  int v18; // [rsp+F0h] [rbp-70h] BYREF
  int v19; // [rsp+F4h] [rbp-6Ch] BYREF
  int v20; // [rsp+F8h] [rbp-68h] BYREF
  _DWORD v21[5]; // [rsp+FCh] [rbp-64h] BYREF
  __int64 v22; // [rsp+110h] [rbp-50h] BYREF
  __int64 v23; // [rsp+118h] [rbp-48h] BYREF
  __int64 v24; // [rsp+120h] [rbp-40h] BYREF
  __int64 v25; // [rsp+128h] [rbp-38h] BYREF
  __int64 v26; // [rsp+130h] [rbp-30h] BYREF
  __int64 v27; // [rsp+138h] [rbp-28h] BYREF
  __int64 v28; // [rsp+140h] [rbp-20h] BYREF
  __int64 v29; // [rsp+148h] [rbp-18h] BYREF
  __int64 v30; // [rsp+150h] [rbp-10h] BYREF
  __int64 v31; // [rsp+158h] [rbp-8h] BYREF

  v4 = *((_QWORD *)this + 34);
  v9 = *(_DWORD *)(v4 + 72);
  if ( v9 < 0 && (v10 = (int *)(v4 + 80), v9 == v10[2]) && v10 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v11 > 5u && tlgKeywordOn((__int64)v11, 0x400000000000LL) )
    {
      v21[1] = *((_DWORD *)a4 + 3);
      v21[2] = *((_DWORD *)a4 + 2);
      v21[3] = *((_DWORD *)a4 + 1);
      v21[4] = *(_DWORD *)a4;
      v23 = *((_QWORD *)v10 + 15);
      v24 = *((_QWORD *)v10 + 14);
      v13 = *((_QWORD *)this + 34);
      v16 = v10[26];
      v25 = *((_QWORD *)v10 + 12);
      v26 = *((_QWORD *)v10 + 11);
      v17 = v10[20];
      v27 = *((_QWORD *)v10 + 9);
      v18 = v10[8];
      v28 = *((_QWORD *)v10 + 3);
      v19 = *v10;
      v29 = *((_QWORD *)v10 + 16);
      v20 = v10[16];
      v30 = *((_QWORD *)v10 + 7);
      v21[0] = v10[2];
      v31 = 0x1000000LL;
      v22 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v12,
        (__int64)&unk_18080F021,
        v13 + 8,
        v12,
        (__int64)&v22,
        (__int64)&v31,
        (__int64)v21,
        &v30,
        (__int64)&v20,
        &v29,
        (__int64)&v19,
        &v28,
        (__int64)&v18,
        &v27,
        (__int64)&v17,
        &v26,
        &v25,
        (__int64)&v16,
        &v24,
        &v23);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v14 = TouchKeyboardExperienceTraceLogging::Provider();
    v15 = (__int64)v14;
    if ( *(_DWORD *)v14 > 5u && tlgKeywordOn((__int64)v14, 0x400000000000LL) )
    {
      v21[0] = *((_DWORD *)a4 + 3);
      v20 = *((_DWORD *)a4 + 2);
      v19 = *((_DWORD *)a4 + 1);
      v18 = *(_DWORD *)a4;
      v17 = a3;
      v16 = a2;
      GetCurrentThreadId();
      v22 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v15,
        (__int64)&unk_18080F1A3);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
