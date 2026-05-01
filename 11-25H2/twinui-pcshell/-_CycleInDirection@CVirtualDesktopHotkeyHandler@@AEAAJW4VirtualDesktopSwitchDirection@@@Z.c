/*
 * XREFs of ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x180536D84
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180536520 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?InvokeSwitchDesktopWithAnimation@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x180536610 (-InvokeSwitchDesktopWithAnimation@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirec.c)
 *     ?IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x180536920 (-IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopHotkeyHandler::_CycleInDirection(__int64 a1, unsigned int a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, struct IVirtualDesktop **); // rbx
  CVirtualDesktopHotkeyHandler *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  const char *v14; // r9
  __int64 *v15; // rcx
  __int64 v16; // rax
  _BYTE pvParam[8]; // [rsp+30h] [rbp-78h] BYREF
  struct IVirtualDesktop *v19; // [rsp+38h] [rbp-70h] BYREF
  int v20; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+48h] [rbp-60h] BYREF
  int v22; // [rsp+50h] [rbp-58h]
  RTL_SRWLOCK *v23; // [rsp+58h] [rbp-50h] BYREF
  __int128 v24; // [rsp+60h] [rbp-48h] BYREF
  __int128 v25; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 88) || (pvParam[0] = 0, !SystemParametersInfoW(0x1042u, 0, pvParam, 0)) || !pvParam[0] )
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 72) + 32LL))(*(_QWORD *)(a1 + 72), &v23);
    v21 = 0LL;
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 368LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    v8 = v7(v6, &v21);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
        (const char *)(unsigned int)v8);
LABEL_22:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v23);
      return (unsigned int)v5;
    }
    v19 = 0LL;
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IVirtualDesktop **))(*(_QWORD *)v9 + 384LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    v5 = v10(v9, v21, (unsigned int)(a2 != 0) + 3, &v19);
    if ( v5 >= 0 )
    {
      v20 = 0;
      if ( !(unsigned int)CVirtualDesktopHotkeyHandler::IsRemoteDesktop(
                            v11,
                            (__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, CVirtualDesktopHotkeyHandler **))v19,
                            &v20)
        && v20 )
      {
        v25 = 0LL;
        v12 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int128 *))(*(_QWORD *)v19 + 32LL))(v19, &v25);
        v5 = v12;
        if ( v12 >= 0 )
        {
          try
          {
            Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v23);
          }
          catch ( ... )
          {
            v22 = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x72,
                    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
                    v14);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
            v5 = v22;
            goto LABEL_22;
          }
          v15 = *(__int64 **)(a1 + 80);
          if ( !v15 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
            v5 = -2147467259;
            goto LABEL_22;
          }
          v16 = *v15;
          v24 = v25;
          v12 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v16 + 88))(v15, &v24, 1LL);
          v5 = v12;
          if ( v12 >= 0 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
            v5 = 0;
            goto LABEL_22;
          }
          v13 = 118LL;
        }
        else
        {
          v13 = 106LL;
        }
        goto LABEL_20;
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, _QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(
              *(_QWORD *)(a1 + 32),
              v19,
              a2);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 126LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)(unsigned int)v12);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    goto LABEL_22;
  }
  v4 = CVirtualDesktopHotkeyHandler::InvokeSwitchDesktopWithAnimation((_QWORD *)a1, a2);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)(unsigned int)v4);
  return (unsigned int)v5;
}
