/*
 * XREFs of ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180507250
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___::_ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___ @ 0x180505C9C (wil--details--ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___--_ScopeExitFn__lambda_f979.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180506744 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x180506ADC (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180507250 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___::Run @ 0x180508AC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180067668 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??$As@UITabletModeViewManager@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805050D4 (--$As@UITabletModeViewManager@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae_____lambda_5edf705d134c8accffeb71d7188806ae___ @ 0x1805055C4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5edf705d134c8.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180507250 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x180507DB0 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x180507DD4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowArrangementView::Hide(WindowArrangementView *this, __int64 a2)
{
  __int64 *v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rdx
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  DWORD CurrentThreadId; // eax
  int v10; // esi
  char v11; // bl
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int32 *v16; // [rsp+78h] [rbp+38h] BYREF

  v3 = (__int64 *)((char *)this + 104);
  if ( (_BYTE)a2 )
  {
    if ( !*v3 )
    {
      v13[0] = (char *)this - 24;
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(v13, a2, (char *)this - 24);
      v15 = v4;
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v15, v5, v4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
      v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae_____lambda_5edf705d134c8accffeb71d7188806ae___(
             &v16,
             (volatile signed __int32 *)&v15);
      v7 = *v6;
      *v6 = 0LL;
      v8 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
      }
      CurrentThreadId = GetCurrentThreadId();
      v10 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
      if ( v10 >= 0 )
      {
        v11 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x141,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v10);
        v11 = 1;
      }
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v15);
      if ( v11 )
        WindowArrangementView::Hide(this, 0);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(v13);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
    SmartCookie::Unregister((WindowArrangementView *)((char *)this + 136));
    v15 = 0LL;
    v12 = Microsoft::WRL::ComPtr<IUnknown>::As<ITabletModeViewManager>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this - 1,
            &v15);
    if ( v12 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14E,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
}
