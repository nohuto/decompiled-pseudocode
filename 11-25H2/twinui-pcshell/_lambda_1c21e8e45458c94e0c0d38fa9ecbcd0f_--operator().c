/*
 * XREFs of _lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f_::operator() @ 0x1801ED930
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::Run @ 0x180235CA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1800F17B0 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x1801EDAC0 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18030F034 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f_::operator()(__int64 *a1)
{
  unsigned __int16 *v2; // rbx
  __int64 v3; // rbx
  int Application; // eax
  int EnterpriseIdForWindow; // ebx
  struct IImmersiveApplication *v6; // rbx
  __int64 (__fastcall *v7)(struct IImmersiveApplication *, __int64, GUID *, __int64 *); // rdi
  __int64 *v8; // rax
  unsigned __int16 **v9; // r8
  int v10; // eax
  int v11; // edi
  struct HWND__ v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v17; // [rsp+78h] [rbp+28h] BYREF
  struct IImmersiveApplication *v18; // [rsp+80h] [rbp+30h] BYREF
  EdpHelpers *v19; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v13[0].unused = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( (unsigned int)EdpGetIsManaged() )
  {
    v18 = 0LL;
    v3 = *a1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    Application = CWinRTApplicationView::GetApplication((CWinRTApplicationView *)(v3 + 152), &v18);
    EnterpriseIdForWindow = Application;
    if ( Application < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)Application);
LABEL_8:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
LABEL_12:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
      return (unsigned int)EnterpriseIdForWindow;
    }
    v17 = 0LL;
    v6 = v18;
    v7 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64, GUID *, __int64 *))(*(_QWORD *)v18 + 24LL);
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v17);
    EnterpriseIdForWindow = v7(v6, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v8);
    if ( EnterpriseIdForWindow < 0
      || (v19 = 0LL,
          EnterpriseIdForWindow = (*(__int64 (__fastcall **)(__int64, EdpHelpers **))(*(_QWORD *)v17 + 32LL))(v17, &v19),
          EnterpriseIdForWindow < 0)
      || (Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13),
          v14 = -1LL,
          v15 = -1LL,
          EnterpriseIdForWindow = EdpHelpers::GetEnterpriseIdForWindow(v19, v13, v9),
          EnterpriseIdForWindow < 0) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    v2 = *(unsigned __int16 **)&v13[0].unused;
  }
  v10 = CApplicationViewBase::SetEnterpriseId((CApplicationViewBase *)(*a1 + 24), v2);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v10);
    EnterpriseIdForWindow = v11;
    goto LABEL_12;
  }
  if ( v2 )
    CoTaskMemFree(v2);
  return 0LL;
}
