/*
 * XREFs of ?Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z @ 0x1804BAFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??$As@UIMultitaskingViewElementRoot@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElementRoot@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B8C58 (--$As@UIMultitaskingViewElementRoot@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BBFF0 (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMultitaskingViewFrame::Navigate(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64, __int64 *, _QWORD, __int64); // rax
  char *v12; // rax
  char *v13; // rax
  __int64 *v14; // rcx
  char *v15; // rax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v22; // [rsp+80h] [rbp+20h] BYREF
  __int64 *v23; // [rsp+98h] [rbp+38h] BYREF

  v22 = *(_QWORD *)(a1 + 2480);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v20, &v22, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewElementRoot>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 2520),
    &v18);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL, 1LL);
  v23 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  v6 = CMultitaskingViewFrame::_SetFocusToControl(a1, a2, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v23);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x245,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_16;
  }
  v22 = 0LL;
  v8 = *v23;
  if ( a3 - 7 > 1 )
  {
    (*(void (__fastcall **)(__int64 *, __int64 *))(v8 + 280))(v23, &v17);
    v9 = (__int64)v23;
    v10 = a3;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*v23 + 272);
    if ( v17 )
    {
      v12 = (char *)((__int64 (__fastcall *)(__int64 *, __int64 *, __int64, _QWORD, _DWORD))v11)(v23, &v19, v17, a3, 0);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v22, v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      if ( v22 )
      {
LABEL_10:
        v14 = &v17;
        goto LABEL_13;
      }
      if ( a2 != 1 || a3 - 5 > 1 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v22, &v17);
        goto LABEL_10;
      }
      v10 = (unsigned int)(a3 != 5) + 7;
      v9 = (__int64)v23;
      v11 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*v23 + 272);
    }
    v13 = (char *)v11(v9, &v19, 0LL, v10);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v22, v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    goto LABEL_10;
  }
  v15 = (char *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _DWORD))(v8 + 272))(
                  v23,
                  &v19,
                  0LL,
                  a3,
                  0);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v22, v15);
  v14 = &v19;
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v14);
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*v23 + 288))(v23, v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v7 = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v7 = -2147023728;
  }
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v20);
  return v7;
}
