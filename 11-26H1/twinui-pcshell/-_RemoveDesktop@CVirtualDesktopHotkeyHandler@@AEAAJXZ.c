/*
 * XREFs of ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x18055AD24
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18055A1D0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A0100 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBug.c)
 *     ?IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x18055A5E8 (-IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopHotkeyHandler::_RemoveDesktop(CVirtualDesktopHotkeyHandler *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64, struct IVirtualDesktop **); // rbx
  __int64 v9; // r8
  CVirtualDesktopHotkeyHandler *v10; // rcx
  int v11; // eax
  int IsRemoteDesktop; // eax
  int v13; // edi
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, __int64, struct IVirtualDesktop **); // rbx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v21; // [rsp+60h] [rbp+30h] BYREF
  struct IVirtualDesktop *v22; // [rsp+68h] [rbp+38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK *v24; // [rsp+78h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v24);
  v23 = 0LL;
  v2 = *((_QWORD *)this + 3);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 368LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v4 = v3(v2, &v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0;
    v22 = 0LL;
    v7 = *((_QWORD *)this + 3);
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, struct IVirtualDesktop **))(*(_QWORD *)v7 + 384LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    v5 = v8(v7, v23, 6LL, &v22);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl,
      1u,
      v9);
    v11 = 0;
    v21 = 0;
    if ( v5 < 0 )
    {
      if ( v5 == -2147316575 )
      {
LABEL_9:
        v6 = 1;
        v14 = *((_QWORD *)this + 3);
        v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, struct IVirtualDesktop **))(*(_QWORD *)v14 + 384LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
        v5 = v15(v14, v23, 5LL, &v22);
LABEL_10:
        if ( v5 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *, _QWORD))(**((_QWORD **)this + 4)
                                                                                             + 40LL))(
                  *((_QWORD *)this + 4),
                  v23,
                  v22,
                  v6);
          v5 = v18;
          if ( v18 >= 0 )
          {
LABEL_15:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
            goto LABEL_16;
          }
          v16 = (unsigned int)v18;
          v17 = 255LL;
        }
        else
        {
          v16 = (unsigned int)v5;
          v17 = 254LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)v16);
        goto LABEL_15;
      }
    }
    else
    {
      IsRemoteDesktop = CVirtualDesktopHotkeyHandler::IsRemoteDesktop(
                          v10,
                          (__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, CVirtualDesktopHotkeyHandler **))v22,
                          &v21);
      v13 = IsRemoteDesktop;
      if ( IsRemoteDesktop < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEB,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)(unsigned int)IsRemoteDesktop);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
        v5 = v13;
        goto LABEL_16;
      }
      v11 = v21;
    }
    if ( !v11 )
      goto LABEL_10;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE1,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v24);
  return (unsigned int)v5;
}
