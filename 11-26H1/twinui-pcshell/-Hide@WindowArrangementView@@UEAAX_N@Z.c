/*
 * XREFs of ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180529620
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___::_ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___ @ 0x1805280BC (wil--details--ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___--_ScopeExitFn__lambda_f979.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180528A94 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x180528E58 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180529620 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___::Run @ 0x18052AF00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??$As@UITabletModeViewManager@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@@Details@12@@Z @ 0x18052732C (--$As@UITabletModeViewManager@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae_____lambda_5edf705d134c8accffeb71d7188806ae___ @ 0x18052794C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5edf705d134c8.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180529620 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052A1D0 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052A1F4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowArrangementView::Hide(WindowArrangementView *this, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  DWORD CurrentThreadId; // eax
  int v9; // esi
  char v10; // bl
  int v11; // eax
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int32 *v15; // [rsp+78h] [rbp+38h] BYREF

  if ( (_BYTE)a2 )
  {
    if ( !*((_QWORD *)this + 13) )
    {
      v12[0] = (char *)this - 24;
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(v12, a2, (char *)this - 24);
      v14 = v3;
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v14, v4, v3);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
      v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae_____lambda_5edf705d134c8accffeb71d7188806ae___(
             &v15,
             &v14);
      v6 = *v5;
      *v5 = 0LL;
      v7 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
      }
      CurrentThreadId = GetCurrentThreadId();
      v9 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
      if ( v6 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v9 >= 0 )
      {
        v10 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x141,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v9);
        v10 = 1;
      }
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v14);
      if ( v10 )
        WindowArrangementView::Hide(this, 0);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(v12);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
    SmartCookie::Unregister((WindowArrangementView *)((char *)this + 136));
    v14 = 0LL;
    v11 = Microsoft::WRL::ComPtr<IUnknown>::As<ITabletModeViewManager>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this - 1,
            &v14);
    if ( v11 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 64LL))(v14);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14E,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
}
