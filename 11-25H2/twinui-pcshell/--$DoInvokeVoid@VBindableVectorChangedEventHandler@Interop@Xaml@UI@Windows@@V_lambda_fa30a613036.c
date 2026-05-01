/*
 * XREFs of ??$DoInvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@V_lambda_fa30a613036bcec23797998bf71b5136_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_fa30a613036bcec23797998bf71b5136_@@@Z @ 0x18068A648
 * Callers:
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18068F6C0 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     __Platform_ReleaseSRWLockShared @ 0x1802D34E0 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x1802D3528 (__Platform_AcquireSRWLockShared.c)
 *     ??1_lambda_fa30a613036bcec23797998bf71b5136_@@QEAA@XZ @ 0x18068B930 (--1_lambda_fa30a613036bcec23797998bf71b5136_@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Platform::EventSource::DoInvokeVoid<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler,_lambda_fa30a613036bcec23797998bf71b5136_>(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        _lambda_fa30a613036bcec23797998bf71b5136_ *a3)
{
  struct Platform::Details::EventLock *v6; // r8
  Platform::Details *TargetArray; // rsi
  void *v8; // rdx
  unsigned int TargetArraySize; // r15d
  unsigned int i; // ebx
  _QWORD **TargetArrayEvent; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h] BYREF
  Platform::Details *v17; // [rsp+30h] [rbp-58h]
  _QWORD **v18; // [rsp+38h] [rbp-50h]
  _OWORD v19[3]; // [rsp+50h] [rbp-38h] BYREF

  v17 = 0LL;
  v19[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v19, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v17 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v15) = TargetArraySize;
    for ( i = 0; i < TargetArraySize; ++i )
    {
      v16 = 0LL;
      v18 = 0LL;
      TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                      TargetArray,
                                      (void *)i,
                                      (unsigned int)&_uuidof__AU__abi_IDelegate_BindableVectorChangedEventHandler_Interop_Xaml_UI_Windows__,
                                      &v16,
                                      v15);
      v18 = TargetArrayEvent;
      v12 = *((_QWORD *)a3 + 1);
      v13 = *(_QWORD *)a3;
      if ( *TargetArrayEvent == &Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::`vftable'{for `__abi_IUnknown'} )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*TargetArrayEvent[37] + 8LL))(
          TargetArrayEvent[37],
          v13,
          v12);
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))(*TargetArrayEvent)[3])(TargetArrayEvent, v13, v12);
        __abi_ThrowIfFailed(v14);
      }
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)TargetArrayEvent);
    }
  }
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)TargetArray);
  _lambda_fa30a613036bcec23797998bf71b5136_::~_lambda_fa30a613036bcec23797998bf71b5136_(a3);
}
