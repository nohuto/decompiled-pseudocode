/*
 * XREFs of ?CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180552690
 * Callers:
 *     ?CreateRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180552880 (-CreateRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$MakeAgileCallback@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@PEAVCVirtualDesktopManager@@P84@EAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@3@@Z@wil@@YA?AV?$ComPtr@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@@WRL@Microsoft@@$$QEAPEAVCVirtualDesktopManager@@$$QEAP84@EAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Z@Z @ 0x18054FAC0 (--$MakeAgileCallback@U-$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@ZPEAU786@@details@wil@@YA?AV?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@1@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@Z1@Z @ 0x180550598 (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@I.c)
 *     ??1?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAA@XZ @ 0x180551AE4 (--1-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAA@XZ.c)
 *     ??4?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180551EA4 (--4-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAAEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::CreateRemoteDesktop(
        CVirtualDesktopManager *this,
        HSTRING a2,
        struct IVirtualDesktop **a3)
{
  char *v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, HSTRING, struct IVirtualDesktop **); // rbx
  int v14; // eax
  struct IVirtualDesktop *v15; // rax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // r8
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int128 v20; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v21[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v22[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  char v24; // [rsp+B0h] [rbp+40h] BYREF
  struct IVirtualDesktop *v25; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v6 = (char *)this - 8;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), v21);
  if ( a3 )
    *a3 = 0LL;
  if ( *((_DWORD *)this + 49) )
  {
    v7 = -2147019873;
    v8 = 2147947423LL;
    v9 = 279LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v8);
    goto LABEL_17;
  }
  v24 = 0;
  v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 27) + 56LL))(*((_QWORD *)this + 27), &v24);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = (unsigned int)v10;
    v9 = 285LL;
    goto LABEL_7;
  }
  LOBYTE(v11) = v24 != 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 128LL))(*((_QWORD *)this + 12), v11);
  v25 = 0LL;
  v12 = *((_QWORD *)this + 12);
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING, struct IVirtualDesktop **))(*(_QWORD *)v12 + 120LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  v14 = v13(v12, a2, &v25);
  v7 = v14;
  if ( v14 >= 0 )
  {
    if ( a3 )
    {
      v15 = v25;
      v25 = 0LL;
      *a3 = v15;
    }
    if ( !*((_QWORD *)this + 34) && !v24 )
    {
      *(_QWORD *)&v20 = CVirtualDesktopManager::OnRemoteDesktopConnected;
      DWORD2(v20) = 0;
      v22[0] = v20;
      *(_QWORD *)&v20 = v6;
      wil::MakeAgileCallback<Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>,CVirtualDesktopManager *,long (CVirtualDesktopManager::*)(IInspectable *,Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *)>(
        &v26,
        (__int64 *)&v20,
        v22);
      v17 = wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::IRemoteSessionWindowManager,long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *>(
              v22,
              *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27),
              v16);
      wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::operator=(
        (__int64 *)this + 34,
        v17);
      wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::~unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>((__int64)v22);
      v18 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x121,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  }
LABEL_17:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v21);
  return v7;
}
