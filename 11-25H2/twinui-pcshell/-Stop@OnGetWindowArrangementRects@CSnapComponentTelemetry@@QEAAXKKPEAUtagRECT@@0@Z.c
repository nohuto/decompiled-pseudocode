/*
 * XREFs of ?Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z @ 0x180209C24
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444444444@Z @ 0x18000CF24 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000CF24.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180058400 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444@Z @ 0x1801F3058 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_.c)
 */

void __fastcall CSnapComponentTelemetry::OnGetWindowArrangementRects::Stop(
        CSnapComponentTelemetry::OnGetWindowArrangementRects *this,
        int a2,
        DWORD a3,
        struct tagRECT *a4,
        struct tagRECT *a5)
{
  __int64 v5; // rax
  int v10; // ecx
  __int64 v11; // rsi
  const struct _tlgProvider_t *v12; // r9
  LONG v13; // eax
  LONG v14; // ecx
  __int64 v15; // r8
  const struct _tlgProvider_t *v16; // rsi
  LONG right; // eax
  LONG top; // ecx
  LONG v19; // eax
  LONG left; // ecx
  LONG v21; // eax
  DWORD CurrentThreadId; // eax
  __int64 v23; // r8
  LONG v24; // eax
  __int64 v25; // r9
  LONG v26; // [rsp+118h] [rbp-80h] BYREF
  DWORD v27; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v28; // [rsp+120h] [rbp-78h] BYREF
  DWORD v29; // [rsp+124h] [rbp-74h] BYREF
  LONG v30; // [rsp+128h] [rbp-70h] BYREF
  LONG v31; // [rsp+12Ch] [rbp-6Ch] BYREF
  LONG v32; // [rsp+130h] [rbp-68h] BYREF
  LONG bottom; // [rsp+134h] [rbp-64h] BYREF
  LONG v34; // [rsp+138h] [rbp-60h] BYREF
  LONG v35; // [rsp+13Ch] [rbp-5Ch] BYREF
  _DWORD v36[8]; // [rsp+140h] [rbp-58h] BYREF
  __int64 v37; // [rsp+160h] [rbp-38h] BYREF
  __int64 v38; // [rsp+168h] [rbp-30h] BYREF
  __int64 v39; // [rsp+170h] [rbp-28h] BYREF
  __int64 v40; // [rsp+178h] [rbp-20h] BYREF
  __int64 v41; // [rsp+180h] [rbp-18h] BYREF
  __int64 v42; // [rsp+188h] [rbp-10h] BYREF
  __int64 v43; // [rsp+190h] [rbp-8h] BYREF
  __int64 v44; // [rsp+198h] [rbp+0h] BYREF
  __int64 v45; // [rsp+1A0h] [rbp+8h] BYREF
  __int64 v46; // [rsp+1A8h] [rbp+10h] BYREF
  __int64 v47; // [rsp+1B0h] [rbp+18h] BYREF
  LONG v48; // [rsp+1D8h] [rbp+40h] BYREF

  v5 = *((_QWORD *)this + 34);
  v10 = *(_DWORD *)(v5 + 72);
  if ( v10 >= 0 || v10 != *(_DWORD *)(v5 + 88) || (v11 = v5 + 80, v5 == -80) )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v16 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v16 > 5u )
    {
      bottom = a4->bottom;
      right = a4->right;
      v48 = a5->bottom;
      v36[0] = a5->right;
      top = a5->top;
      v32 = right;
      v19 = a4->top;
      v35 = top;
      left = a5->left;
      v31 = v19;
      v21 = a4->left;
      v34 = left;
      v30 = v21;
      v29 = a3;
      v28 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v23 = *((_QWORD *)this + 34);
      v27 = CurrentThreadId;
      v24 = *(_DWORD *)(v23 + 72);
      v37 = 0LL;
      v26 = v24;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v16,
        byte_1807E6D08,
        (const GUID *)(v23 + 8),
        v25,
        (__int64)&v37,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v31,
        (__int64)&v32,
        (__int64)&bottom,
        (__int64)&v34,
        (__int64)&v35,
        (__int64)v36,
        (__int64)&v48);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v12 > 5u )
    {
      v36[4] = a4->bottom;
      v36[5] = a4->right;
      v13 = a4->top;
      v14 = a5->bottom;
      v37 = 0LL;
      v15 = *((_QWORD *)this + 34);
      v36[6] = v13;
      v26 = a4->left;
      v38 = *(_QWORD *)(v11 + 48);
      v29 = *(_DWORD *)(v11 + 68);
      v30 = *(_DWORD *)(v11 + 16);
      v39 = *(_QWORD *)(v11 + 120);
      v40 = *(_QWORD *)(v11 + 112);
      v31 = *(_DWORD *)(v11 + 104);
      v41 = *(_QWORD *)(v11 + 96);
      v42 = *(_QWORD *)(v11 + 88);
      v32 = *(_DWORD *)(v11 + 80);
      v43 = *(_QWORD *)(v11 + 72);
      bottom = *(_DWORD *)(v11 + 32);
      v44 = *(_QWORD *)(v11 + 24);
      v34 = *(_DWORD *)v11;
      v45 = *(_QWORD *)(v11 + 128);
      v35 = *(_DWORD *)(v11 + 64);
      v46 = *(_QWORD *)(v11 + 56);
      v36[0] = *(_DWORD *)(v11 + 8);
      v48 = v14;
      v36[1] = a5->right;
      v36[2] = a5->top;
      v36[3] = a5->left;
      v27 = a3;
      v28 = a2;
      v47 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        (__int64)&unk_1807E6767,
        v15 + 8,
        (__int64)v12,
        (__int64)&v37,
        (__int64)&v47,
        (__int64)v36,
        &v46,
        (__int64)&v35,
        &v45,
        (__int64)&v34,
        &v44,
        (__int64)&bottom,
        &v43,
        (__int64)&v32,
        &v42,
        &v41,
        (__int64)&v31,
        &v40,
        &v39,
        (__int64)&v30,
        (__int64)&v29,
        &v38);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
