/*
 * XREFs of ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180402430
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FFAD0 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18040069C (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804011C8 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180402998 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___ @ 0x1803FEC6C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f9db91f7b3ef.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x180402598 (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAAPEAVCommonPeopleTelemetry@@P6AXXZ@Z @ 0x18040322C (-get@-$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAAPEAVCommonPeopleTelemetry@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PeoplePaneViewManager::NotifyListeners(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // r10
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // edi
  volatile signed __int32 **v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-19h] BYREF
  __int64 v18; // [rsp+40h] [rbp-11h]
  __int64 v19; // [rsp+48h] [rbp-9h]
  char v20; // [rsp+50h] [rbp-1h]
  __int64 v21; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v22; // [rsp+60h] [rbp+Fh]
  _QWORD v23[3]; // [rsp+68h] [rbp+17h] BYREF
  char v24; // [rsp+80h] [rbp+2Fh]
  int v25; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  volatile signed __int32 *v27; // [rsp+B8h] [rbp+67h] BYREF

  v9 = *(_DWORD **)(wil::details::static_lazy<CommonPeopleTelemetry>::get(
                      a1,
                      _lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v9 && *v9 )
  {
    wil::details::static_lazy<CommonPeopleTelemetry>::get(
      v8,
      _lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_);
    CommonPeopleTelemetry::PeoplePaneViewChanged_(v10, a2);
  }
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&v17,
          a3,
          0xFFFFFFFFFFFFFFFFuLL);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F1,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
  v21 = a1;
  v22 = a2;
  v23[1] = v18;
  v23[2] = v19;
  v12 = v17;
  v17 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v23[0] = v12;
  v24 = 0;
  v20 = 1;
  v25 = a4;
  v13 = *(_DWORD *)(a1 + 516);
  v14 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___(
          &v27,
          (__int64)&v21);
  v15 = *v14;
  *v14 = 0LL;
  v16 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v16);
  }
  SHTaskPoolQueueTask(0LL, 2LL, v13);
  if ( v15 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v23);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
}
