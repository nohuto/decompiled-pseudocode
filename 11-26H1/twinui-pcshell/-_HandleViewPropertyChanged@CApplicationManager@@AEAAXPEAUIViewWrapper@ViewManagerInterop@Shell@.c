/*
 * XREFs of ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18016ED50
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18016E450 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18016F3FC (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CImmersiveAppFinderByTaskWindow@@QEAA@AEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x1801ED068 (--0CImmersiveAppFinderByTaskWindow@@QEAA@AEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180201F70 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802E72CC (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802E74C8 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
void __fastcall CApplicationManager::_HandleViewPropertyChanged(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *a3)
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *); // rbx
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // edx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned int v14; // eax
  UINT32 v15; // edx
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // eax
  UINT32 v22; // edx
  HRESULT v23; // eax
  int v24; // edx
  unsigned int v25; // r8d
  HRESULT v26; // eax
  int v27; // edx
  unsigned int v28; // r8d
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // rdx
  int First; // ebx
  void (__fastcall ***v33)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v34)(_QWORD, GUID *, __int64 *); // rdi
  PVOID Ptr; // rdi
  int (__fastcall *v36)(PVOID, __int64, __int64 *); // rbx
  int (__fastcall *v37)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *); // rbx
  HRESULT v38; // eax
  int v39; // edx
  unsigned int v40; // r8d
  unsigned int v41; // esi
  __int64 v42; // r8
  void (__fastcall *v43)(char *, GUID *, __int64 *); // rbx
  __int64 *v44; // rax
  HRESULT v45; // ebx
  IUnknown *v46; // rcx
  void *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  void (__fastcall ***v51)(_QWORD, _QWORD, _QWORD); // rcx
  void (__fastcall ***v52)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v53)(_QWORD, GUID *, __int64 *); // rdi
  CTaskWindowFinder *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // ebx
  INT32 result; // [rsp+30h] [rbp-69h] BYREF
  __int64 v58; // [rsp+38h] [rbp-61h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-59h] BYREF
  __int64 v60; // [rsp+48h] [rbp-51h] BYREF
  void (__fastcall ***v61)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-49h] BYREF
  unsigned int v62; // [rsp+58h] [rbp-41h] BYREF
  void *ppvOut; // [rsp+60h] [rbp-39h] BYREF
  __int64 v64; // [rsp+68h] [rbp-31h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp-29h] BYREF
  int v66; // [rsp+78h] [rbp-21h]
  __int64 v67; // [rsp+80h] [rbp-19h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v68; // [rsp+88h] [rbp-11h] BYREF
  char v69; // [rsp+90h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-1h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v66 = 0;
  string1 = 0LL;
  v6 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string1 = 0LL;
  if ( v6(a3, &string1) < 0 )
    goto LABEL_20;
  result = 0;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"BackVisible", 0xBu, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    __debugbreak();
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    string = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v58 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
    v54 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)&v67, a2);
    v55 = CImmersiveAppFinderByTaskWindow::CImmersiveAppFinderByTaskWindow(&hstringHeader, v54, 0LL);
    v56 = (unsigned int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                          this,
                          v55,
                          &v58,
                          0LL) >> 31;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v68);
    if ( (unsigned __int8)v56 != 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 208LL))(v58);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
    goto LABEL_20;
  }
  string = 0LL;
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( aWindowframesty[v13] );
  if ( v13 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v10, v11);
    __debugbreak();
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v13, v10, v11);
  v15 = v14 - 1;
  if ( (unsigned int)v13 < v14 )
    v15 = v13;
  v16 = WindowsCreateStringReference(L"WindowFrameStyle", v15, &hstringHeader, &string);
  if ( v16 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
    __debugbreak();
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    v29 = CApplicationManager::_HandleUniversalFrameChangeRequest(this, a2);
    v30 = retaddr;
    if ( v29 >= 0 )
      goto LABEL_20;
    v31 = 6521LL;
    goto LABEL_26;
  }
  string = 0LL;
  do
    ++v12;
  while ( aTitlebarvisibl[v12] );
  if ( v12 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v19, v20);
    __debugbreak();
  }
  v21 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v12, v19, v20);
  v22 = v21 - 1;
  if ( (unsigned int)v12 < v21 )
    v22 = v12;
  v23 = WindowsCreateStringReference(L"TitleBarVisible", v22, &hstringHeader, &string);
  if ( v23 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23, v24, v25);
    __debugbreak();
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    v29 = CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest(this, a2);
    v30 = retaddr;
    if ( v29 >= 0 )
      goto LABEL_20;
    v31 = 6525LL;
LABEL_26:
    wil::details::in1diag3::_Log_Hr(
      v30,
      (void *)v31,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_20;
  }
  string = 0LL;
  v26 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
  if ( v26 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26, v27, v28);
    __debugbreak();
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    string = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v61 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
    v67 = 0LL;
    v68 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v68);
    v69 = 0;
    hstringHeader.Reserved.Reserved1 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
    hstringHeader.Reserved.Reserved2[16] = 0;
    LODWORD(string) = 0;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &hstringHeader, &v61, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v68);
    v58 = 0LL;
    if ( First >= 0 )
    {
      v52 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v61;
      v53 = (*v61)[44];
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
      First = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD), __int64, GUID *, __int64 *))v53)(
                v52,
                2LL,
                &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
                &v58);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( First >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v58 + 48LL))(
           v58,
           a2) )
    {
      v64 = 0LL;
      v33 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v61;
      v34 = **v61;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v64);
      v34(v33, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v64);
      v60 = 0LL;
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v36 = *(int (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
      if ( v36(Ptr, v64, &v60) >= 0 )
      {
        v62 = 0;
        v37 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *))(*(_QWORD *)a2 + 368LL);
        string = 0LL;
        v38 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
        if ( v38 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v38, v39, v40);
          __debugbreak();
        }
        if ( v37(a2, string, &v62) >= 0 )
        {
          v41 = v62;
          if ( v62 )
          {
            v42 = 0LL;
            if ( v62 == 1 )
              v42 = 64LL;
          }
          else
          {
            v42 = 32LL;
          }
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v60 + 464LL))(v60, 96LL, v42);
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
          punk = 0LL;
          v66 = 32;
          v43 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL);
          v44 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&punk);
          v43((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, v44);
          v45 = IUnknown_QueryService(
                  punk,
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  &GUID_d452bf19_b505_4b1c_8182_1cc821a13092,
                  &ppvOut);
          v46 = punk;
          if ( punk )
          {
            punk = 0LL;
            ((void (__fastcall *)(IUnknown *))v46->lpVtbl->Release)(v46);
          }
          if ( v45 >= 0 )
            (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v60, v41);
          v47 = ppvOut;
          if ( ppvOut )
          {
            ppvOut = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v47 + 16LL))(v47);
          }
        }
      }
      v48 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v49 = v64;
      if ( v64 )
      {
        v64 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      }
    }
    v50 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    v51 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v61;
    if ( v61 )
    {
      v61 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v51)[2])(v51);
    }
  }
LABEL_20:
  WindowsDeleteString(string1);
}
