/*
 * XREFs of ?MoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180492730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180490DE8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switch.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@QEAA@XZ @ 0x18049156C (--1-$test_watcher@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Comp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopController::MoveDesktop(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        unsigned int a3)
{
  int v6; // ebx
  __int64 (__fastcall *v7)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v12)(PVOID, _QWORD, _QWORD); // rbx
  _QWORD *v13; // rax
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v16[56]; // [rsp+28h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF
  PSRWLOCK SRWLock; // [rsp+98h] [rbp+38h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>>((__int64)v16);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 17);
  if ( !this[11].Ptr )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_6;
  }
  v18 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  v8 = v7(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v18);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 204LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
LABEL_6:
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    goto LABEL_13;
  }
  Ptr = this[11].Ptr;
  v12 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)Ptr + 96LL);
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v15);
  v6 = v12(Ptr, *v13, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  if ( v6 < 0 )
  {
    v9 = (unsigned int)v6;
    v10 = 206LL;
    goto LABEL_5;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v6 = 0;
LABEL_13:
  tip2::test_watcher<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::~test_watcher<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v16);
  return (unsigned int)v6;
}
