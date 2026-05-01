/*
 * XREFs of ?Initialize@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180285020
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UIVirtualDesktopManagerInternal@@@6@AEBU?$com_ptr@UIApplicationViewCollection@@@6@@Z @ 0x180648654 (-Initialize@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU-$com_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::Initialize(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbp
  int v5; // eax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
    a2,
    &SID_VirtualDesktopManager,
    &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
    &v10);
  if ( v10 )
  {
    QueryService = a2->lpVtbl->QueryService;
    if ( *((_QWORD *)this + 21) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 21);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
           a2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (char *)this + 168);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x145,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v5,
        v8);
    winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::Initialize(
      *((_QWORD *)this + 11) + 8LL,
      &v10,
      (char *)this + 168);
    winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::Initialize(
      *((_QWORD *)this + 13) + 8LL,
      &v10,
      (char *)this + 168);
    winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::Initialize(
      *((_QWORD *)this + 15) + 8LL,
      &v10,
      (char *)this + 168);
    v6 = (__int64 *)((char *)this + 152);
    v7 = v10;
    if ( *((_QWORD *)this + 19) != v10 )
    {
      if ( *v6 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 19);
      *v6 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( v10 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
}
