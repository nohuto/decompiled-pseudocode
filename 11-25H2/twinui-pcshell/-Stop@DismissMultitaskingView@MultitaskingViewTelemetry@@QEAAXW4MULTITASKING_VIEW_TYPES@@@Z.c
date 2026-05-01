/*
 * XREFs of ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18012E0F0
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18012D880 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ @ 0x18012DB10 (-DismissView@-$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18012ECF0 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18049DBE0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x18049E430 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564@Z @ 0x180001D20 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18012E414 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::Stop(__int64 a1, int a2)
{
  int *v2; // rax
  int v5; // ecx
  const struct _tlgProvider_t *v6; // rax
  const struct _tlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // rcx
  int v10; // eax
  int *v11; // rdi
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // [rsp+B0h] [rbp-80h] BYREF
  int v18; // [rsp+B4h] [rbp-7Ch] BYREF
  DWORD v19; // [rsp+B8h] [rbp-78h] BYREF
  _DWORD v20[2]; // [rsp+BCh] [rbp-74h] BYREF
  int v21; // [rsp+C4h] [rbp-6Ch] BYREF
  int v22; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v28; // [rsp+100h] [rbp-30h] BYREF
  __int64 v29; // [rsp+108h] [rbp-28h] BYREF
  __int64 v30; // [rsp+110h] [rbp-20h] BYREF
  __int64 v31; // [rsp+118h] [rbp-18h] BYREF
  __int64 v32; // [rsp+120h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+0h] BYREF
  void *v34; // [rsp+140h] [rbp+10h]
  int v35; // [rsp+148h] [rbp+18h]
  int v36; // [rsp+14Ch] [rbp+1Ch]
  __int64 *v37; // [rsp+150h] [rbp+20h]
  int v38; // [rsp+158h] [rbp+28h]
  int v39; // [rsp+15Ch] [rbp+2Ch]
  int *v40; // [rsp+160h] [rbp+30h]
  int v41; // [rsp+168h] [rbp+38h]
  int v42; // [rsp+16Ch] [rbp+3Ch]
  DWORD *v43; // [rsp+170h] [rbp+40h]
  int v44; // [rsp+178h] [rbp+48h]
  int v45; // [rsp+17Ch] [rbp+4Ch]
  _DWORD *v46; // [rsp+180h] [rbp+50h]
  int v47; // [rsp+188h] [rbp+58h]
  int v48; // [rsp+18Ch] [rbp+5Ch]

  v2 = *(int **)(a1 + 272);
  v5 = v2[18];
  if ( v5 >= 0 || v5 != v2[22] || (v11 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v6 = WindowManagementLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x400000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v20[0] = a2;
      CurrentThreadId = GetCurrentThreadId();
      v9 = *(_QWORD *)(a1 + 272);
      v48 = 0;
      v45 = 0;
      v42 = 0;
      v39 = 0;
      v19 = CurrentThreadId;
      v10 = *(_DWORD *)(v9 + 72);
      v23 = 0LL;
      v18 = v10;
      v46 = v20;
      v43 = &v19;
      v40 = &v18;
      v37 = &v23;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v7 + 1);
      v47 = 4;
      v44 = 4;
      v41 = 4;
      v38 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v34 = &unk_1807DA72E;
      UserData.Reserved = 2;
      v35 = 86;
      v36 = 1;
      v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v7 + 4), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 6u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v12 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
    {
      v14 = *((_QWORD *)v11 + 14);
      v15 = *((_QWORD *)v11 + 15);
      v16 = *(_QWORD *)(a1 + 272);
      v23 = 0LL;
      v26 = v14;
      v21 = v11[26];
      v27 = *((_QWORD *)v11 + 12);
      v28 = *((_QWORD *)v11 + 11);
      v22 = v11[20];
      v29 = *((_QWORD *)v11 + 9);
      v17 = v11[8];
      v30 = *((_QWORD *)v11 + 3);
      v18 = *v11;
      v31 = *((_QWORD *)v11 + 16);
      v19 = v11[16];
      v32 = *((_QWORD *)v11 + 7);
      v20[0] = v11[2];
      v25 = v15;
      v20[1] = a2;
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v13,
        (__int64)&unk_1807DA785,
        v16 + 8,
        v13,
        (__int64)&v23,
        (__int64)&EventDescriptor,
        (__int64)v20,
        &v32,
        (__int64)&v19,
        &v31,
        (__int64)&v18,
        &v30,
        (__int64)&v17,
        &v29,
        (__int64)&v22,
        &v28,
        &v27,
        (__int64)&v21,
        &v26,
        &v25);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
