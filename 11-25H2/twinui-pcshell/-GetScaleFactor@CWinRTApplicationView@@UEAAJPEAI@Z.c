/*
 * XREFs of ?GetScaleFactor@CWinRTApplicationView@@UEAAJPEAI@Z @ 0x180310A10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetScaleFactor(CWinRTApplicationView *this, unsigned int *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int ScaleFactorForWindow; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 100;
  v12 = 0LL;
  v3 = *((_QWORD *)this + 26);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v12);
  ScaleFactorForWindow = v4(v3, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v5);
  v7 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow >= 0 )
  {
    v13 = 0LL;
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v13);
    v7 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow >= 0 )
    {
      v11 = 0;
      ScaleFactorForWindow = GetScaleFactorForWindow(v13, &v11);
      v7 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow >= 0 )
      {
        *a2 = v11;
        v7 = 0;
        goto LABEL_9;
      }
      v8 = 353LL;
    }
    else
    {
      v8 = 350LL;
    }
  }
  else
  {
    v8 = 347LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  return v7;
}
