/*
 * XREFs of ?InvokeSwitchDesktopWithAnimation@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x18055A2C0
 * Callers:
 *     ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x18055AA7C (-_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180551030 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180551ABC (--1-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x18055A5E8 (-IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopHotkeyHandler::InvokeSwitchDesktopWithAnimation(_QWORD *a1, unsigned int a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rax
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, struct IVirtualDesktop **); // rbx
  CVirtualDesktopHotkeyHandler *v14; // rcx
  void (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall **v16)(_QWORD, GUID *, __int64 *); // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  struct IVirtualDesktop *v22; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+58h] [rbp-61h] BYREF
  __int64 v24; // [rsp+60h] [rbp-59h] BYREF
  __int64 v25; // [rsp+68h] [rbp-51h] BYREF
  int v26[4]; // [rsp+70h] [rbp-49h] BYREF
  __int128 v27; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v28[64]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v29; // [rsp+D0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v25 = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[4];
  v5 = *v4;
  v25 = 0LL;
  v6 = (*v5)(v4, &GUID_bb1b0fb0_58f6_4f1a_99f2_86599b33ede8, &v25);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 64LL))(v25);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v23 = 0LL;
      v9 = a1[3];
      v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 368LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      v11 = v10(v9, &v23);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v22 = 0LL;
        v12 = a1[3];
        v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IVirtualDesktop **))(*(_QWORD *)v12 + 384LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
        v7 = v13(v12, v23, (unsigned int)(a2 != 0) + 3, &v22);
        if ( v7 >= 0 )
        {
          v26[0] = 0;
          if ( CVirtualDesktopHotkeyHandler::IsRemoteDesktop(v14, v22, v26) || !v26[0] )
          {
            tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v28);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 80LL))(v25);
            v20 = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v25 + 48LL))(
                    v25,
                    v22,
                    a2,
                    a1[7],
                    a1[6],
                    a1[8],
                    a1[5],
                    0);
            v7 = v20;
            if ( v20 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xA7,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
                (const char *)(unsigned int)v20);
            tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v28);
          }
          else
          {
            v24 = 0LL;
            v15 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[3];
            v16 = *v15;
            v24 = 0LL;
            (*v16)(v15, &GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d, &v24);
            (*(void (__fastcall **)(__int64, struct IVirtualDesktop *))(*(_QWORD *)v24 + 328LL))(v24, v22);
            v29 = 0LL;
            v17 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int128 *))(*(_QWORD *)v22 + 32LL))(v22, &v29);
            v7 = v17;
            if ( v17 >= 0 )
            {
              v19 = a1[10];
              if ( !v19 )
              {
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
                v7 = -2147467259;
                goto LABEL_24;
              }
              v27 = v29;
              v17 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v19 + 88LL))(v19, &v27, 1LL);
              v7 = v17;
              if ( v17 >= 0 )
              {
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
                v7 = 0;
                goto LABEL_24;
              }
              v18 = 154LL;
            }
            else
            {
              v18 = 150LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v18,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
              (const char *)(unsigned int)v17);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x87,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      goto LABEL_24;
    }
    v8 = 133LL;
  }
  else
  {
    v8 = 132LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v6);
LABEL_24:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
  return (unsigned int)v7;
}
