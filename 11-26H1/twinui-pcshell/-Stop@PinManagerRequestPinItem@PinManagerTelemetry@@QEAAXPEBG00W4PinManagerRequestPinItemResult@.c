/*
 * XREFs of ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1805E9D9C
 * Callers:
 *     ??R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x1805E40B4 (--R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566664@Z @ 0x18000FFB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000FFB0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@554@Z @ 0x18001032C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U3@U3@U2@@-$_tlgW.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180283940 (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180283A40 (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall PinManagerTelemetry::PinManagerRequestPinItem::Stop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v9; // eax
  int *v10; // rdi
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  const struct _tlgProvider_t *v16; // rax
  __int64 v17; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v22; // [rsp+C4h] [rbp-7Ch] BYREF
  int v23; // [rsp+C8h] [rbp-78h] BYREF
  int v24; // [rsp+CCh] [rbp-74h] BYREF
  int v25; // [rsp+D0h] [rbp-70h] BYREF
  int v26; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v27; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+100h] [rbp-40h] BYREF
  __int64 v33; // [rsp+108h] [rbp-38h] BYREF
  __int64 v34; // [rsp+110h] [rbp-30h] BYREF
  __int64 v35; // [rsp+118h] [rbp-28h] BYREF
  __int64 v36; // [rsp+120h] [rbp-20h] BYREF
  __int64 v37; // [rsp+128h] [rbp-18h] BYREF
  __int64 v38; // [rsp+130h] [rbp-10h] BYREF
  __int64 v39; // [rsp+138h] [rbp-8h] BYREF

  v4 = *(_QWORD *)(a1 + 272);
  v9 = *(_DWORD *)(v4 + 72);
  if ( v9 < 0 && (v10 = (int *)(v4 + 80), v9 == v10[2]) && v10 )
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v12 = PinManagerTelemetry::Provider(v11);
    if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
    {
      v34 = *((_QWORD *)v10 + 15);
      v35 = *((_QWORD *)v10 + 14);
      v23 = v10[26];
      v14 = *(_QWORD *)(a1 + 272);
      v36 = *((_QWORD *)v10 + 12);
      v37 = *((_QWORD *)v10 + 11);
      v24 = v10[20];
      v38 = *((_QWORD *)v10 + 9);
      v25 = v10[8];
      v39 = *((_QWORD *)v10 + 3);
      v26 = *v10;
      v27 = *((_QWORD *)v10 + 16);
      v21 = v10[16];
      v28 = *((_QWORD *)v10 + 7);
      v22 = v10[2];
      v31 = a4;
      v32 = a3;
      v33 = a2;
      v29 = 0x1000000LL;
      v30 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v13,
        (__int64)&unk_1808266FC,
        v14 + 8,
        v13,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v22,
        &v28,
        (__int64)&v21,
        &v27,
        (__int64)&v26,
        &v39,
        (__int64)&v25,
        &v38,
        (__int64)&v24,
        &v37,
        &v36,
        (__int64)&v23,
        &v35,
        &v34,
        &v33,
        &v32,
        &v31);
    }
  }
  else
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v16 = PinManagerTelemetry::Provider(v15);
    v17 = (__int64)v16;
    if ( *(_DWORD *)v16 > 5u && tlgKeywordOn((__int64)v16, 0x400000000000LL) )
    {
      v30 = a4;
      v29 = a3;
      v28 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *(_QWORD *)(a1 + 272);
      v22 = CurrentThreadId;
      v21 = *(_DWORD *)(v19 + 72);
      v27 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v17,
        (__int64)&unk_18082665C,
        v19 + 8,
        v20,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&v22,
        &v28,
        &v29,
        &v30);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
