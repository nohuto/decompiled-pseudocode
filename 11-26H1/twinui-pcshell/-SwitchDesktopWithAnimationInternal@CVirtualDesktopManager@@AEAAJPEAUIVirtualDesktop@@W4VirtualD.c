/*
 * XREFs of ?SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557B80
 * Callers:
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1 @ 0x180556B10 (CVirtualDesktopManager--SwitchContextForVDAnimation$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18018CFF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?DetermineRelativeDirectionInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z @ 0x180552A90 (-DetermineRelativeDirectionInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z.c)
 *     ?FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180552D50 (-FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesk.c)
 *     ?GetAdjacentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180552F00 (-GetAdjacentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopWithAnimationInternal(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v8)(_QWORD, GUID *, __int64 *); // rax
  int v9; // eax
  int AdjacentDesktopInternal; // ebx
  __int64 v11; // rdx
  int CurrentDesktopInternal; // eax
  int v13; // eax
  BOOL v14; // r12d
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  struct IVirtualDesktop *v17; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF
  struct IUnknown *v20; // [rsp+A8h] [rbp+48h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 32LL))(*(_QWORD *)(a1 + 104)) )
    return 2147942487LL;
  v16 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 232);
  v8 = *v7;
  v16 = 0LL;
  v9 = (*v8)(v7, &GUID_bb1b0fb0_58f6_4f1a_99f2_86599b33ede8, &v16);
  AdjacentDesktopInternal = v9;
  if ( v9 < 0 )
  {
    v11 = 420LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_19;
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 64LL))(v16);
  AdjacentDesktopInternal = v9;
  if ( v9 < 0 )
  {
    v11 = 421LL;
    goto LABEL_7;
  }
  v20 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                             (CVirtualDesktopManager *)(a1 + 8),
                             (struct IVirtualDesktop **)&v20);
  AdjacentDesktopInternal = CurrentDesktopInternal;
  if ( CurrentDesktopInternal >= 0 )
  {
    if ( SHIsSameObject(a2, v20) )
    {
      v13 = CVirtualDesktopManager::FireVirtualDesktopSwitchedEvent(a1, a2, a3);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1AB,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      AdjacentDesktopInternal = 0;
      goto LABEL_19;
    }
    v19 = 0;
    CVirtualDesktopManager::DetermineRelativeDirectionInternal(
      (CVirtualDesktopManager *)(a1 + 8),
      (struct IVirtualDesktop *)v20,
      (struct IVirtualDesktop *)a2,
      &v19);
    v14 = v19 != 3;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    AdjacentDesktopInternal = CVirtualDesktopManager::GetAdjacentDesktopInternal(
                                (CVirtualDesktopManager *)(a1 + 8),
                                (struct IVirtualDesktop *)v20,
                                v19,
                                &v17);
    if ( AdjacentDesktopInternal >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16);
      v15 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, BOOL, _QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)v16 + 48LL))(
              v16,
              a2,
              v14,
              *(_QWORD *)(a1 + 248),
              *(_QWORD *)(a1 + 240),
              *(_QWORD *)(a1 + 112),
              *(_QWORD *)(a1 + 168),
              a3);
      AdjacentDesktopInternal = v15;
      if ( v15 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B6,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v15);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
LABEL_19:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  return (unsigned int)AdjacentDesktopInternal;
}
