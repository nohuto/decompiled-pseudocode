/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000E0B0
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000D730 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180016EE0 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z @ 0x1800295CC (-OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180029AA4 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x18002A634 (-OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18002AE40 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180049DDC (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004A114 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x18004BAD4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ??$As@UIInputSiteTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005E918 (--$As@UIInputSiteTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x18005EFAC (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180068A98 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180079FAC (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAA_NXZ @ 0x1800AE8CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QE.c)
 *     ?GetProcessId@InputSite@@QEBAIXZ @ 0x180132DE8 (-GetProcessId@InputSite@@QEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(
        DWMInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, InputSite **))
{
  int v4; // r14d
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rax
  char v8; // bl
  __int64 v9; // rcx
  char v10; // al
  InputSite *v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // al
  unsigned int ProcessId; // eax
  __int64 v18; // rsi
  struct InputSiteManager *InputSiteManager; // rax
  __int64 InputSiteFromId; // rax
  __int64 v21; // rcx
  __int64 *Attached; // rax
  __int64 v23; // rcx
  int (__fastcall *v24)(char *, __int64 *); // rbx
  const char *v25; // r9
  int v26; // eax
  _QWORD *v27; // rbx
  const char *v28; // r9
  __int64 v29; // rcx
  bool v30; // si
  __int64 v31; // rcx
  InputSite *v32; // rcx
  __int64 (__fastcall *v33)(struct IInputTarget *, GUID *, InputSite **); // rbx
  __int64 (__fastcall *v34)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v35; // eax
  int v36; // eax
  unsigned int v37; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int8 v39; // bl
  __int64 (__fastcall *v40)(struct IInputTarget *, GUID *, InputSite **); // rbx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // edx
  unsigned int v47; // ecx
  __int64 v48; // r9
  __int64 v49; // rcx
  int v50; // eax
  unsigned int v51; // ebx
  int v53; // [rsp+20h] [rbp-99h]
  unsigned int v54; // [rsp+30h] [rbp-89h] BYREF
  InputSite *v55; // [rsp+38h] [rbp-81h] BYREF
  __int64 v56; // [rsp+40h] [rbp-79h] BYREF
  __int64 v57; // [rsp+48h] [rbp-71h] BYREF
  __int64 v58; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v59; // [rsp+58h] [rbp-61h] BYREF
  __int64 v60; // [rsp+60h] [rbp-59h] BYREF
  __int64 v61; // [rsp+68h] [rbp-51h] BYREF
  __int64 v62; // [rsp+70h] [rbp-49h] BYREF
  int v63; // [rsp+78h] [rbp-41h]
  __int64 v64; // [rsp+80h] [rbp-39h] BYREF
  __int64 v65; // [rsp+88h] [rbp-31h] BYREF
  __int64 v66; // [rsp+90h] [rbp-29h] BYREF
  InputSite *v67; // [rsp+98h] [rbp-21h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v69[40]; // [rsp+A8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v4 = 0;
  LODWORD(v57) = 0;
  v63 = 0;
  v59 = 0;
  v5 = (_QWORD *)((char *)this + 272);
  v65 = *((_QWORD *)this + 34);
  v6 = v65;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v65);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=(v5, a2);
  if ( v6 )
  {
    v64 = 0LL;
    v55 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(&v65, &v64) < 0
      || (v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v64 + 24LL))(v64, &v58),
          v4 = 1,
          v8 = 1,
          !*(_QWORD *)Microsoft::WRL::ComPtr<InputSite>::operator=(&v55, v7)) )
    {
      v8 = 0;
    }
    if ( (v4 & 1) != 0 )
    {
      v4 &= ~1u;
      v9 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    if ( v8 )
    {
      InputSite::GetAttachedObject<IDelegateInformationProvider>(v55, &v60);
      if ( !v60 )
        goto LABEL_66;
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 56LL))(v60);
      if ( (v10 & 0xE) == 0 || (v10 & 1) != 0 )
        goto LABEL_66;
      if ( !IsEdition(0xAuLL) )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v60 + 64LL))(v60, 0LL, 0LL, 1LL);
        goto LABEL_66;
      }
      v54 = 0;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Bugfix_57240160>::GetImpl'::`2'::impl) )
      {
        LODWORD(v61) = 0;
        v11 = 0LL;
        v67 = 0LL;
        v56 = 0LL;
        if ( *v5 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(v5, &v56) >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v56 + 32LL))(v56, &v61);
          if ( v12 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x7C4,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v12,
              v53);
          v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v56 + 72LL))(v56, &v54);
          if ( v13 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x7C5,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v13,
              v53);
          if ( v54 )
          {
            v59 = *((_DWORD *)ISMStatics::GetForegroundManager() + 56);
            v57 = 0LL;
            if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(v5, &v57) >= 0 )
            {
              v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v57 + 24LL))(v57, &v58);
              Microsoft::WRL::ComPtr<InputSite>::operator=(&v67, v14);
              v15 = v58;
              if ( v58 )
              {
                v58 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              }
              v11 = v67;
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
          }
        }
        while ( 1 )
        {
          if ( !v60
            || (v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 56LL))(v60), (v16 & 0xE) == 0)
            || (v16 & 1) != 0
            || v54 && ((ProcessId = InputSite::GetProcessId(v55), ProcessId == v54) || v55 == v11) )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
            if ( v11 )
              (*(void (__fastcall **)(InputSite *))(*(_QWORD *)v11 + 16LL))(v11);
            goto LABEL_66;
          }
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v60 + 64LL))(v60, 0LL, 0LL, 1LL);
          InputSiteManager = ISMStatics::GetInputSiteManager();
          InputSiteFromId = InputSiteManager::GetInputSiteFromId(InputSiteManager, &v58, 1LL, v18);
          Microsoft::WRL::ComPtr<InputSite>::operator=(&v55, InputSiteFromId);
          v21 = v58;
          if ( v58 )
          {
            v58 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          if ( v55 )
          {
            Attached = (__int64 *)InputSite::GetAttachedObject<IDelegateInformationProvider>(v55, &v66);
            v4 |= 2u;
            v23 = 0LL;
            if ( &v68 == Attached )
              goto LABEL_37;
          }
          else
          {
            v62 = 0LL;
            Attached = &v62;
            v4 |= 4u;
          }
          v23 = *Attached;
          *Attached = 0LL;
LABEL_37:
          v68 = v60;
          v60 = v23;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v68);
          if ( (v4 & 4) != 0 )
          {
            v4 &= ~4u;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v62);
          }
          if ( (v4 & 2) != 0 )
          {
            v4 &= ~2u;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v66);
          }
        }
      }
      v61 = 0LL;
      v24 = *(int (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
      if ( v24((char *)this + 16, &v61) >= 0 )
      {
        v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v61 + 80LL))(v61, &v54);
        if ( v26 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x7F6,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v26,
            v53);
      }
      v27 = (_QWORD *)((char *)this + 280);
      if ( (v54 & 0x40) != 0 )
      {
        if ( *v27 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x7FE,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            v25);
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((char *)this + 280, &v65);
        v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 48LL))(v60);
      }
      else
      {
        if ( *v27 )
        {
          if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 56LL))(v60) & 0x40) == 0 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x809,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              v28);
          v58 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>((char *)this + 280, &v58) >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v58 + 24LL))(v58, &v56);
            v57 = 0LL;
            if ( !*v5 || (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(v5, &v57) < 0 )
              goto LABEL_57;
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v57 + 24LL))(v57, &v62);
            v29 = v62;
            v30 = v62 != v56;
            if ( v62 )
            {
              v62 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            }
            if ( v30 )
            {
LABEL_57:
              InputSite::GetAttachedObject<IDelegateInformationProvider>(v56, &v62);
              if ( v62 )
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v62 + 64LL))(v62, 0LL, 0LL, 1LL);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v62);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
            v31 = v56;
            if ( v56 )
            {
              v56 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
            }
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 35);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
        }
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v60 + 64LL))(v60, 0LL, 0LL, 1LL);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
LABEL_66:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v60);
    }
    v32 = v55;
    if ( v55 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(InputSite *))(*(_QWORD *)v32 + 16LL))(v32);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v64);
  }
  if ( IsEdition(0x3DDA1uLL) && a2 )
  {
    v55 = 0LL;
    v33 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v55);
    v63 = v33((struct IInputTarget *)a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v55);
    if ( v63 >= 0 )
    {
      v56 = 0LL;
      v34 = (__int64 (__fastcall *)(struct IInputTarget *, GUID *, __int64 *))**a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
      v35 = v34((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v56);
      if ( v35 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x856,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v35,
          v53);
      v54 = 0;
      v36 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v56 + 48LL))(v56, &v54);
      if ( v36 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x859,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v36,
          v53);
      v37 = v54;
      if ( v54 )
      {
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewHelper::GetWindowForViewId(&v64, ViewHierarchy, v37);
        v66 = 0LL;
        if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v64, &v66) )
        {
          winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
            &v64,
            &v61);
          (*(void (__fastcall **)(InputSite *, _BYTE *))(*(_QWORD *)v55 + 72LL))(v55, v69);
        }
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v64);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
    }
    else
    {
      v63 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v55);
  }
  if ( IsEdition(0xAuLL) )
  {
    LODWORD(v61) = 0;
    LODWORD(v57) = 0;
    v39 = 0;
    v54 = 0;
    if ( a2 )
    {
      v55 = 0LL;
      v40 = **a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v55);
      v41 = v40((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v55);
      if ( v41 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x870,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v41,
          v53);
      v42 = (*(__int64 (__fastcall **)(InputSite *, __int64 *))(*(_QWORD *)v55 + 40LL))(v55, &v57);
      if ( v42 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x871,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v42,
          v53);
      if ( !v59 )
      {
        v43 = (*(__int64 (__fastcall **)(InputSite *, unsigned int *))(*(_QWORD *)v55 + 72LL))(v55, &v59);
        if ( v43 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x874,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v43,
            v53);
      }
      v44 = (*(__int64 (__fastcall **)(InputSite *, __int64 *))(*(_QWORD *)v55 + 32LL))(v55, &v61);
      if ( v44 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x876,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v44,
          v53);
      v45 = (*(__int64 (__fastcall **)(InputSite *, unsigned int *))(*(_QWORD *)v55 + 80LL))(v55, &v54);
      if ( v45 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x877,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v45,
          v53);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v55);
      v39 = v54;
    }
    if ( IsEdition(0xAuLL) )
      v46 = (v39 & 6) != 0;
    else
      v46 = (v39 >> 2) & 1;
    v47 = v46 | 2;
    if ( (v39 & 8) == 0 )
      v47 = v46;
    v48 = v47 | 4;
    if ( (v39 & 0x40) == 0 )
      v48 = v47;
    NtMITSetInputDelegationMode(v59, (unsigned int)v61, (unsigned int)v57, v48);
  }
  InputETW::InputRouter::OnFocusChanged((struct IInputTarget *)a2);
  v49 = *((_QWORD *)this + 36);
  if ( v49
    && (v50 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInputTarget *))(*(_QWORD *)v49 + 24LL))(
                v49,
                v6,
                (struct IInputTarget *)a2),
        v51 = v50,
        v50 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x889,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v50,
      v53);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v65);
    return v51;
  }
  else
  {
    InputDeliveryServer::OnTargetWithFocusChanged(*((InputDeliveryServer **)this + 43), (struct IInputTarget *)a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v65);
    return (unsigned int)v63;
  }
}
