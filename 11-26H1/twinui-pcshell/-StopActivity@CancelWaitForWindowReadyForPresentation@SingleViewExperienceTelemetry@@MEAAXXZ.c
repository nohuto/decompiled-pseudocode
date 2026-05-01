/*
 * XREFs of ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180020210
 * Callers:
 *     <none>
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016AD8 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801896EC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801896EC.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StopActivity(
        SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *this)
{
  __int64 v1; // rdi
  int v3; // eax
  const struct _tlgProvider_t *v4; // rax
  const struct _tlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // [rsp+ACh] [rbp-7Ch] BYREF
  _DWORD v14[4]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-50h]
  __int64 v18; // [rsp+E0h] [rbp-48h]
  __int64 v19; // [rsp+E8h] [rbp-40h]
  __int64 v20; // [rsp+F0h] [rbp-38h]
  __int64 v21; // [rsp+F8h] [rbp-30h]
  __int64 v22; // [rsp+100h] [rbp-28h]
  __int64 v23; // [rsp+108h] [rbp-20h]
  __int64 v24; // [rsp+110h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp-10h] BYREF
  void *v26; // [rsp+128h] [rbp+0h]
  int v27; // [rsp+130h] [rbp+8h]
  int v28; // [rsp+134h] [rbp+Ch]
  __int64 *v29; // [rsp+138h] [rbp+10h]
  __int64 v30; // [rsp+140h] [rbp+18h]
  int *v31; // [rsp+148h] [rbp+20h]
  __int64 v32; // [rsp+150h] [rbp+28h]
  _DWORD *v33; // [rsp+158h] [rbp+30h]
  __int64 v34; // [rsp+160h] [rbp+38h]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && (v12 = v1 + 80, v3 == *(_DWORD *)(v12 + 8)) && v12 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = SingleViewExperienceLogging::Provider();
    if ( *(_DWORD *)v8 > 5u && (unsigned __int8)tlgKeywordOn(v8, 0x200000000000LL) )
    {
      v10 = *(_QWORD *)(v12 + 120);
      v11 = *((_QWORD *)this + 34);
      v18 = *(_QWORD *)(v12 + 112);
      v14[1] = *(_DWORD *)(v12 + 104);
      v19 = *(_QWORD *)(v12 + 96);
      v20 = *(_QWORD *)(v12 + 88);
      v14[2] = *(_DWORD *)(v12 + 80);
      v21 = *(_QWORD *)(v12 + 72);
      v14[3] = *(_DWORD *)(v12 + 32);
      v22 = *(_QWORD *)(v12 + 24);
      v23 = *(_QWORD *)(v12 + 128);
      v13 = *(_DWORD *)(v12 + 64);
      v24 = *(_QWORD *)(v12 + 56);
      v14[0] = *(_DWORD *)(v12 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v15 = 0x1000000LL;
      v17 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v9,
        &unk_180830DF8,
        v11 + 8);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v4 = SingleViewExperienceLogging::Provider();
    v5 = v4;
    if ( *(_DWORD *)v4 > 5u
      && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 34);
      v14[0] = CurrentThreadId;
      v34 = 4LL;
      v32 = 4LL;
      v13 = *(_DWORD *)(v7 + 72);
      v15 = 0x1000000LL;
      v33 = v14;
      v31 = &v13;
      v29 = &v15;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v5 + 1);
      v30 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v26 = &unk_180830F42;
      UserData.Reserved = 2;
      v27 = 92;
      v28 = 1;
      EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 5u, &UserData);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
