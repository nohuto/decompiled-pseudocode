/*
 * XREFs of ?Stop@SyncState@SharedVisualHostProvider@@QEAAXIIPEAUHWND__@@I@Z @ 0x18060CDAC
 * Callers:
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x18060EC68 (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564434@Z @ 0x180010898 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180010898.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18060B9C8 (-Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall SharedVisualHostProvider::SyncState::Stop(
        SharedVisualHostProvider::SyncState *this,
        int a2,
        int a3,
        HWND a4,
        unsigned int a5)
{
  __int64 v5; // rdi
  int v10; // eax
  int *v11; // rdi
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  int v21; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v22; // [rsp+CCh] [rbp-7Ch] BYREF
  int v23; // [rsp+D0h] [rbp-78h] BYREF
  int v24; // [rsp+D4h] [rbp-74h] BYREF
  _DWORD v25[4]; // [rsp+D8h] [rbp-70h] BYREF
  int v26; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD v28[2]; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+108h] [rbp-40h] BYREF
  __int64 v30; // [rsp+110h] [rbp-38h] BYREF
  __int64 v31; // [rsp+118h] [rbp-30h] BYREF
  __int64 v32; // [rsp+120h] [rbp-28h] BYREF
  __int64 v33; // [rsp+128h] [rbp-20h] BYREF
  __int64 v34; // [rsp+130h] [rbp-18h] BYREF
  __int64 v35; // [rsp+138h] [rbp-10h] BYREF
  __int64 v36; // [rsp+140h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+148h] [rbp+0h] BYREF
  __int64 *v38; // [rsp+168h] [rbp+20h]
  __int64 v39; // [rsp+170h] [rbp+28h]
  int *v40; // [rsp+178h] [rbp+30h]
  __int64 v41; // [rsp+180h] [rbp+38h]
  DWORD *v42; // [rsp+188h] [rbp+40h]
  __int64 v43; // [rsp+190h] [rbp+48h]
  int *v44; // [rsp+198h] [rbp+50h]
  __int64 v45; // [rsp+1A0h] [rbp+58h]
  int *v46; // [rsp+1A8h] [rbp+60h]
  __int64 v47; // [rsp+1B0h] [rbp+68h]
  _QWORD *v48; // [rsp+1B8h] [rbp+70h]
  __int64 v49; // [rsp+1C0h] [rbp+78h]
  _DWORD *v50; // [rsp+1C8h] [rbp+80h]
  __int64 v51; // [rsp+1D0h] [rbp+88h]

  v5 = *((_QWORD *)this + 34);
  v10 = *(_DWORD *)(v5 + 72);
  if ( v10 < 0 && (v11 = (int *)(v5 + 80), v10 == v11[2]) && v11 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = SharedVisualHostProvider::Provider(v12);
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v29 = *((_QWORD *)v11 + 15);
      v30 = *((_QWORD *)v11 + 14);
      v26 = v11[26];
      v31 = *((_QWORD *)v11 + 12);
      v15 = *((_QWORD *)this + 34);
      v32 = *((_QWORD *)v11 + 11);
      v21 = v11[20];
      v33 = *((_QWORD *)v11 + 9);
      v22 = v11[8];
      v34 = *((_QWORD *)v11 + 3);
      v23 = *v11;
      v35 = *((_QWORD *)v11 + 16);
      v24 = v11[16];
      v36 = *((_QWORD *)v11 + 7);
      v25[0] = v11[2];
      v27 = 0x1000000LL;
      v28[0] = 0x1000000LL;
      v25[1] = a5;
      v28[1] = a4;
      v25[2] = a3;
      v25[3] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v14,
        (__int64)&unk_18082B9FB,
        v15 + 8,
        v14,
        (__int64)v28,
        (__int64)&v27,
        (__int64)v25,
        &v36,
        (__int64)&v24,
        &v35,
        (__int64)&v23,
        &v34,
        (__int64)&v22,
        &v33,
        (__int64)&v21,
        &v32,
        &v31,
        (__int64)&v26,
        &v30,
        &v29);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v17 = SharedVisualHostProvider::Provider(v16);
    v18 = (__int64)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v25[0] = a5;
      v28[0] = a4;
      v24 = a3;
      v23 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 34);
      v22 = CurrentThreadId;
      v51 = 4LL;
      v49 = 8LL;
      v21 = *(_DWORD *)(v20 + 72);
      v27 = 0x1000000LL;
      v50 = v25;
      v48 = v28;
      v46 = &v24;
      v44 = &v23;
      v42 = &v22;
      v40 = &v21;
      v38 = &v27;
      v47 = 4LL;
      v45 = 4LL;
      v43 = 4LL;
      v41 = 4LL;
      v39 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v18, byte_18082B10C, (const GUID *)(v20 + 8), 0LL, 9u, &v37);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
