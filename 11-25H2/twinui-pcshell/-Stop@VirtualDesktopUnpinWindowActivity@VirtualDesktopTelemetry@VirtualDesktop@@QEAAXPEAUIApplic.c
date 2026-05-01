/*
 * XREFs of ?Stop@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805418A8
 * Callers:
 *     ?UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1805428C0 (-UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@6@Z @ 0x18000B148 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000B148.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18000C200 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z @ 0x1801B37E0 (-CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  void (__fastcall *v5)(struct IApplicationView *, LPCWSTR *); // rbx
  int *v6; // rbx
  int v7; // eax
  int *v8; // rbx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rdi
  const WCHAR *v11; // rcx
  __int64 v12; // r9
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // rbx
  const WCHAR *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  int v18; // [rsp+B0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+B4h] [rbp-7Ch] BYREF
  int v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  int v22; // [rsp+C0h] [rbp-70h] BYREF
  int v23; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v24; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-58h] BYREF
  LPCWSTR pszPath; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-48h]
  __int64 v29; // [rsp+F0h] [rbp-40h]
  const unsigned __int16 *v30; // [rsp+F8h] [rbp-38h] BYREF
  __int128 *v31; // [rsp+100h] [rbp-30h] BYREF
  __int64 v32; // [rsp+108h] [rbp-28h] BYREF
  __int64 v33; // [rsp+110h] [rbp-20h] BYREF
  __int64 v34; // [rsp+118h] [rbp-18h] BYREF
  __int64 v35; // [rsp+120h] [rbp-10h] BYREF
  __int64 v36; // [rsp+128h] [rbp-8h] BYREF
  __int64 v37; // [rsp+130h] [rbp+0h] BYREF
  __int64 v38; // [rsp+138h] [rbp+8h] BYREF
  __int128 v39; // [rsp+140h] [rbp+10h] BYREF

  v39 = 0LL;
  (*(void (__fastcall **)(struct IVirtualDesktop *, __int128 *))(*(_QWORD *)a3 + 32LL))(a3, &v39);
  pszPath = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v5 = *(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v28 = -1LL;
  v29 = -1LL;
  v5(a2, &pszPath);
  v6 = (int *)*((_QWORD *)this + 34);
  v7 = v6[18];
  if ( v7 < 0 && v7 == v6[22] && (v8 = v6 + 20) != 0LL )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = WindowManagementLogging::Provider();
    v10 = (__int64)v9;
    if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v11 = &LocaleName;
      if ( pszPath )
        v11 = pszPath;
      v30 = VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v11);
      v31 = &v39;
      v32 = *((_QWORD *)v8 + 15);
      v33 = *((_QWORD *)v8 + 14);
      v20 = v8[26];
      v34 = *((_QWORD *)v8 + 12);
      v35 = *((_QWORD *)v8 + 11);
      v21 = v8[20];
      v36 = *((_QWORD *)v8 + 9);
      v22 = v8[8];
      v37 = *((_QWORD *)v8 + 3);
      v23 = *v8;
      v38 = *((_QWORD *)v8 + 16);
      v18 = v8[16];
      v24 = *((_QWORD *)v8 + 7);
      CurrentThreadId = v8[2];
      v25 = 0x1000000LL;
      v26 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v10,
        (__int64)&unk_1807E3835,
        *((_QWORD *)this + 34) + 8LL,
        v12,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&CurrentThreadId,
        &v24,
        (__int64)&v18,
        &v38,
        (__int64)&v23,
        &v37,
        (__int64)&v22,
        &v36,
        (__int64)&v21,
        &v35,
        &v34,
        (__int64)&v20,
        &v33,
        &v32,
        (__int64)&v31,
        &v30);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = WindowManagementLogging::Provider();
    v14 = (__int64)v13;
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v15 = &LocaleName;
      if ( pszPath )
        v15 = pszPath;
      v26 = (__int64)VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(v15);
      v25 = (__int64)&v39;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 34);
      v18 = *(_DWORD *)(v16 + 72);
      v24 = 2197815296LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v14,
        (__int64)&unk_1807E367F,
        v16 + 8,
        v17,
        (__int64)&v24,
        (__int64)&v18,
        (__int64)&CurrentThreadId,
        (__int64)&v25,
        &v26);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
}
