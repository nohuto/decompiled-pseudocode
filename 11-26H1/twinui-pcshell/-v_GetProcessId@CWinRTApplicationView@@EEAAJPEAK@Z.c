/*
 * XREFs of ?v_GetProcessId@CWinRTApplicationView@@EEAAJPEAK@Z @ 0x18030CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::v_GetProcessId(CWinRTApplicationView *this, unsigned int *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v11 = 0LL;
  v3 = *((_QWORD *)this + 26);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v11);
  v6 = v4(v3, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 181LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 48LL))(v11, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 182LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return v7;
}
