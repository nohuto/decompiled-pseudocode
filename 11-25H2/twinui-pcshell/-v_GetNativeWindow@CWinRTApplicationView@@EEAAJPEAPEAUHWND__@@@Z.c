/*
 * XREFs of ?v_GetNativeWindow@CWinRTApplicationView@@EEAAJPEAPEAUHWND__@@@Z @ 0x1801D8470
 * Callers:
 *     ?GetThumbnailWindow@CWinRTApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x1802C7480 (-GetThumbnailWindow@CWinRTApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?CanReceiveInput@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x1803107A0 (-CanReceiveInput@CWinRTApplicationView@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::v_GetNativeWindow(CWinRTApplicationView *this, HWND *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v3 = *((_QWORD *)this + 26);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
  v6 = v4(v3, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v6);
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 32LL))(v13, a2);
    v7 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v8);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return v7;
}
