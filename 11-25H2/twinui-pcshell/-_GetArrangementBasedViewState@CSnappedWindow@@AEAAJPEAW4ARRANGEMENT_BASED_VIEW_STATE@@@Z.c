/*
 * XREFs of ?_GetArrangementBasedViewState@CSnappedWindow@@AEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x18059833C
 * Callers:
 *     ?IsMaximizedWindow@CSnappedWindow@@UEAA_NXZ @ 0x180598250 (-IsMaximizedWindow@CSnappedWindow@@UEAA_NXZ.c)
 *     ?IsMinimizedWindow@CSnappedWindow@@UEAA_NXZ @ 0x180598290 (-IsMinimizedWindow@CSnappedWindow@@UEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnappedWindow::_GetArrangementBasedViewState(
        CSnappedWindow *this,
        enum ARRANGEMENT_BASED_VIEW_STATE *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = *((_QWORD *)this + 4);
  v4 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 104LL);
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v11);
  v6 = v4(v3, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, enum ARRANGEMENT_BASED_VIEW_STATE *))(*(_QWORD *)v11 + 32LL))(v11, a2);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 177LL;
  }
  else
  {
    v8 = 176LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return v7;
}
