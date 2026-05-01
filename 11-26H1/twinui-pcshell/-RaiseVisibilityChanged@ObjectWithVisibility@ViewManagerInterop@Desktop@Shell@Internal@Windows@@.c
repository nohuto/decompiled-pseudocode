/*
 * XREFs of ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18006547C
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180064CB0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800656C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChange.c)
 *     ??0VisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@QEAA@E@Z @ 0x18015DB8C (--0VisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@QEAA@E@Z.c)
 *     ??$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_de7a847248f7e9ff51c83bca1460305a_@@@Z @ 0x180182008 (--$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0_lambda_de7a847248f7e9ff51c83bca1460305a_@@QEAA@PEAVObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@AEBV?$ComPtr@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@89@@Z @ 0x1802FBBB0 (--0_lambda_de7a847248f7e9ff51c83bca1460305a_@@QEAA@PEAVObjectWithVisibility@ViewManagerInterop@D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged(
        Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *this,
        unsigned __int8 a2)
{
  Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *v17; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  v4 = (Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs *)operator new(
                                                                                              0x48uLL,
                                                                                              (const struct std::nothrow_t *)&std::nothrow);
  if ( v4
    && (v5 = Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::VisibilityChangedEventArgs(
               v4,
               a2),
        (v16 = v5) != 0) )
  {
    v17 = this;
    if ( this )
      (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 8LL))(this);
    v6 = _lambda_de7a847248f7e9ff51c83bca1460305a_::_lambda_de7a847248f7e9ff51c83bca1460305a_(v12, this, &v17, &v16);
    v9 = Windows::Internal::ComTaskPool::QueueTask<_lambda_de7a847248f7e9ff51c83bca1460305a_>(
           v8,
           v7,
           *((unsigned int *)this + 10),
           v6);
    if ( v14 )
    {
      v14 = 0LL;
      ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release)();
    }
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 16LL))(this);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v5);
    return (unsigned int)v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
