/*
 * XREFs of ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x18040CE48
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040A4F0 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18040B120 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18040BC78 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18040D3B8 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___ @ 0x180409540 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f9db91f7b3ef.c)
 *     _lambda_4f9db91f7b3ef4e45d712402b4d08f96_::_lambda_4f9db91f7b3ef4e45d712402b4d08f96_ @ 0x180409B58 (_lambda_4f9db91f7b3ef4e45d712402b4d08f96_--_lambda_4f9db91f7b3ef4e45d712402b4d08f96_.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x18040CF9C (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAAPEAVCommonPeopleTelemetry@@P6AXXZ@Z @ 0x18040DD68 (-get@-$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAAPEAVCommonPeopleTelemetry@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PeoplePaneViewManager::NotifyListeners(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // edi
  volatile signed __int32 **v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rcx
  __int64 v16[3]; // [rsp+38h] [rbp-19h] BYREF
  char v17; // [rsp+50h] [rbp-1h]
  _BYTE v18[16]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v19[64]; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  volatile signed __int32 *v21; // [rsp+B8h] [rbp+67h] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+6Fh] BYREF
  int v23; // [rsp+D0h] [rbp+7Fh] BYREF

  v23 = a4;
  v22 = a2;
  v8 = *(_DWORD **)(wil::details::static_lazy<CommonPeopleTelemetry>::get(
                      a1,
                      _lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v8 && *v8 )
  {
    wil::details::static_lazy<CommonPeopleTelemetry>::get(
      v7,
      _lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_);
    CommonPeopleTelemetry::PeoplePaneViewChanged_(v9, a2);
  }
  memset(v16, 0, sizeof(v16));
  v17 = 0;
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)v16,
          a3,
          0xFFFFFFFFFFFFFFFFuLL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F1,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v10);
  v11 = lambda_4f9db91f7b3ef4e45d712402b4d08f96_::_lambda_4f9db91f7b3ef4e45d712402b4d08f96_(
          (__int64)v18,
          a1,
          &v22,
          v16,
          &v23);
  v12 = *(_DWORD *)(a1 + 516);
  v13 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___(
          &v21,
          v11);
  v14 = *v13;
  *v13 = 0LL;
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v15);
  }
  SHTaskPoolQueueTask(0LL, 2LL, v12);
  if ( v14 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v19);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
}
