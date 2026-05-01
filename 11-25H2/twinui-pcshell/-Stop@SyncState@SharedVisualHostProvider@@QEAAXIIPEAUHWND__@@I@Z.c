/*
 * XREFs of ?Stop@SyncState@SharedVisualHostProvider@@QEAAXIIPEAUHWND__@@I@Z @ 0x1805E80C0
 * Callers:
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1805EA028 (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564434@Z @ 0x18000F290 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000F290.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805E6D88 (-Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall SharedVisualHostProvider::SyncState::Stop(
        SharedVisualHostProvider::SyncState *this,
        int a2,
        int a3,
        HWND a4,
        unsigned int a5)
{
  int *v5; // rax
  int v10; // ecx
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
  int v39; // [rsp+170h] [rbp+28h]
  int v40; // [rsp+174h] [rbp+2Ch]
  int *v41; // [rsp+178h] [rbp+30h]
  int v42; // [rsp+180h] [rbp+38h]
  int v43; // [rsp+184h] [rbp+3Ch]
  DWORD *v44; // [rsp+188h] [rbp+40h]
  int v45; // [rsp+190h] [rbp+48h]
  int v46; // [rsp+194h] [rbp+4Ch]
  int *v47; // [rsp+198h] [rbp+50h]
  int v48; // [rsp+1A0h] [rbp+58h]
  int v49; // [rsp+1A4h] [rbp+5Ch]
  int *v50; // [rsp+1A8h] [rbp+60h]
  int v51; // [rsp+1B0h] [rbp+68h]
  int v52; // [rsp+1B4h] [rbp+6Ch]
  _QWORD *v53; // [rsp+1B8h] [rbp+70h]
  int v54; // [rsp+1C0h] [rbp+78h]
  int v55; // [rsp+1C4h] [rbp+7Ch]
  _DWORD *v56; // [rsp+1C8h] [rbp+80h]
  int v57; // [rsp+1D0h] [rbp+88h]
  int v58; // [rsp+1D4h] [rbp+8Ch]

  v5 = (int *)*((_QWORD *)this + 34);
  v10 = v5[18];
  if ( v10 >= 0 || v10 != v5[22] || (v11 = v5 + 20, v5 == (int *)-80LL) )
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
      v58 = 0;
      v55 = 0;
      v52 = 0;
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v40 = 0;
      v22 = CurrentThreadId;
      v21 = *(_DWORD *)(v20 + 72);
      v27 = 0x1000000LL;
      v56 = v25;
      v53 = v28;
      v50 = &v24;
      v47 = &v23;
      v44 = &v22;
      v41 = &v21;
      v38 = &v27;
      v57 = 4;
      v51 = 4;
      v48 = 4;
      v45 = 4;
      v42 = 4;
      v54 = 8;
      v39 = 8;
      tlgWriteTransfer_EventWriteTransfer(v18, byte_1807ED6C3, (const GUID *)(v20 + 8), 0LL, 9u, &v37);
    }
  }
  else
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
        (__int64)&unk_1807ED740,
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
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
