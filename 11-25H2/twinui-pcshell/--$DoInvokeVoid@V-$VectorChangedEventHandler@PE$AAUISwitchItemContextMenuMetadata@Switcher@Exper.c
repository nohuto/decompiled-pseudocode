/*
 * XREFs of ??$DoInvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@Z @ 0x18068A4FC
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

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::DoInvokeVoid<Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,_lambda_0185f2fcaf29182e01e5e20f55c595fb_>(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        _lambda_fa30a613036bcec23797998bf71b5136_ *a3)
{
  _lambda_fa30a613036bcec23797998bf71b5136_ *v3; // r14
  struct Platform::Details::EventLock *v6; // r8
  Platform::Details *TargetArray; // rsi
  void *v8; // rdx
  unsigned int TargetArraySize; // r15d
  unsigned int i; // ebx
  _QWORD **TargetArrayEvent; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  struct EventRegistrationToken v15; // r9
  __int64 *v16; // [rsp+20h] [rbp-68h]
  struct Platform::Details::EventLock *v18; // [rsp+28h] [rbp-60h] BYREF
  Platform::Details *v19; // [rsp+30h] [rbp-58h]
  _QWORD **v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h] BYREF
  __int128 v23[3]; // [rsp+50h] [rbp-38h] BYREF

  v3 = a3;
  v19 = 0LL;
  v23[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v23, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v19 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v16) = TargetArraySize;
    for ( i = 0; i < TargetArraySize; ++i )
    {
      v18 = 0LL;
      try
      {
        v20 = 0LL;
        TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                        TargetArray,
                                        (void *)i,
                                        (unsigned int)&_uuidof__AV__VectorChangedEventHandler_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__,
                                        &v18,
                                        v16);
        v20 = TargetArrayEvent;
        v12 = *((_QWORD *)v3 + 1);
        v13 = *(_QWORD *)v3;
        if ( *TargetArrayEvent == &Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::`vftable'{for `__abi_IUnknown'} )
        {
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*TargetArrayEvent[37] + 8LL))(
            TargetArrayEvent[37],
            v13,
            v12);
        }
        else
        {
          v14 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))(*TargetArrayEvent)[3])(
                  TargetArrayEvent,
                  v13,
                  v12);
          __abi_ThrowIfFailed(v14);
        }
        __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)TargetArrayEvent);
      }
      catch ( Platform::Exception *v22 )
      {
        if ( *(_DWORD *)(v22 + 64) != -2147023174
          && *(_DWORD *)(v22 + 64) != -2147417848
          && *(_DWORD *)(v22 + 64) != -1996357631 )
        {
          v21 = __abi_winrt_ptr_ctor(v22);
          throw (Platform::Exception **)&v21;
        }
        Platform::Details::EventSourceRemove((Platform::Details *)a1, &a2->Ptr, v18, v15);
        v3 = a3;
        TargetArray = v19;
        TargetArraySize = (unsigned int)v16;
        continue;
      }
    }
  }
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)TargetArray);
  _lambda_fa30a613036bcec23797998bf71b5136_::~_lambda_fa30a613036bcec23797998bf71b5136_(v3);
}
