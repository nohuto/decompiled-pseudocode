/*
 * XREFs of ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x180537024
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180536520 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A78C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBug.c)
 *     ?IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x180536920 (-IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v10; // r9
  CVirtualDesktopHotkeyHandler *v11; // rcx
  int v12; // eax
  int IsRemoteDesktop; // eax
  int v14; // edi
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64, __int64, struct IVirtualDesktop **); // rbx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v22; // [rsp+60h] [rbp+30h] BYREF
  struct IVirtualDesktop *v23; // [rsp+68h] [rbp+38h] BYREF
  __int64 v24; // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK *v25; // [rsp+78h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v25);
  v24 = 0LL;
  v2 = *((_QWORD *)this + 3);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 368LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  v4 = v3(v2, &v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0;
    v23 = 0LL;
    v7 = *((_QWORD *)this + 3);
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, struct IVirtualDesktop **))(*(_QWORD *)v7 + 384LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    v5 = v8(v7, v24, 6LL, &v23);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl,
      1u,
      v9,
      v10);
    v12 = 0;
    v22 = 0;
    if ( v5 < 0 )
    {
      if ( v5 == -2147316575 )
      {
LABEL_9:
        v6 = 1;
        v15 = *((_QWORD *)this + 3);
        v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, struct IVirtualDesktop **))(*(_QWORD *)v15 + 384LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
        v5 = v16(v15, v24, 5LL, &v23);
LABEL_10:
        if ( v5 >= 0 )
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *, _QWORD))(**((_QWORD **)this + 4)
                                                                                             + 40LL))(
                  *((_QWORD *)this + 4),
                  v24,
                  v23,
                  v6);
          v5 = v19;
          if ( v19 >= 0 )
          {
LABEL_15:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
            goto LABEL_16;
          }
          v17 = (unsigned int)v19;
          v18 = 255LL;
        }
        else
        {
          v17 = (unsigned int)v5;
          v18 = 254LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)v17);
        goto LABEL_15;
      }
    }
    else
    {
      IsRemoteDesktop = CVirtualDesktopHotkeyHandler::IsRemoteDesktop(
                          v11,
                          (__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, CVirtualDesktopHotkeyHandler **))v23,
                          &v22);
      v14 = IsRemoteDesktop;
      if ( IsRemoteDesktop < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEB,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)(unsigned int)IsRemoteDesktop);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
        v5 = v14;
        goto LABEL_16;
      }
      v12 = v22;
    }
    if ( !v12 )
      goto LABEL_10;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE1,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v25);
  return (unsigned int)v5;
}
