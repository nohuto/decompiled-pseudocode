/*
 * XREFs of ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180385768
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180386B80 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x1801A78F0 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1801A7A80 (-VerifyPV@Accessor@RoVariant@@AEBAJXZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801E24E0 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1801E73CC (--1RoVariant@@QEAA@XZ.c)
 *     ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x180247E48 (-CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@.c)
 *     ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180247EE0 (-GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C28B8 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x180386100 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x180387A9C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z @ 0x18065D0D4 (-ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CJumpViewExperienceManager::EnsureWindowPosition(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v11; // rax
  int v12; // r12d
  void *v13; // rbx
  void *v14; // rax
  RoVariant *v15; // rcx
  __int64 v16; // r8
  RoVariant *v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PVOID, struct IInspectable **); // rdi
  unsigned int v20; // r8d
  HSTRING_HEADER *v21; // rax
  HSTRING_HEADER *v22; // rsi
  void *v23; // rbx
  PVOID Reserved1; // rax
  int Int32; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, PVOID, LONG *); // rdi
  unsigned int v28; // r8d
  HSTRING_HEADER *v29; // rax
  __int64 v30; // rsi
  HSTRING_HEADER *v31; // rbx
  HSTRING_HEADER *v32; // rax
  int v33; // eax
  int MonitorInformation; // eax
  struct tagRECT v35; // xmm6
  int v36; // eax
  int v37; // eax
  int *v39; // [rsp+28h] [rbp-E0h]
  enum EDGEUI_TRAYSTUCKPLACE *v40; // [rsp+28h] [rbp-E0h]
  __int64 v41; // [rsp+30h] [rbp-D8h]
  struct tagRECT v42; // [rsp+48h] [rbp-C0h] BYREF
  void *v43; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h]
  HSTRING_HEADER *v45; // [rsp+68h] [rbp-A0h] BYREF
  struct IInspectable *v46; // [rsp+70h] [rbp-98h] BYREF
  __int64 v47; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v48; // [rsp+80h] [rbp-88h] BYREF
  int v49; // [rsp+84h] [rbp-84h] BYREF
  int v50; // [rsp+88h] [rbp-80h] BYREF
  struct tagPOINT v51; // [rsp+90h] [rbp-78h]
  int v52; // [rsp+98h] [rbp-70h] BYREF
  int v53; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v54; // [rsp+A0h] [rbp-68h] BYREF
  void *v55; // [rsp+A8h] [rbp-60h] BYREF
  LONG v56; // [rsp+B0h] [rbp-58h]
  HSTRING_HEADER v57; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-38h]
  struct tagRECT v59; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING_HEADER v60; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v61; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v47 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4,
         &v47);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = (unsigned int)v4;
    v8 = 964LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_34;
  }
  v55 = 0LL;
  v56 = 0;
  v9 = v47;
  v10 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v47 + 48LL);
  v45 = (HSTRING_HEADER *)&v55;
  v46 = 0LL;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &v57,
          (const WCHAR **)&JumpViewExperienceEvents::Param_Position,
          v5);
  v12 = v10(v9, v11[1].Reserved.Reserved1, &v46);
  v58 = 0LL;
  RoVariant::RoVariant((RoVariant *)&v43, v46);
  v13 = v43;
  v43 = 0LL;
  LODWORD(v10) = v44;
  LODWORD(v44) = 0;
  RoVariant::~RoVariant((RoVariant *)&v43);
  v14 = v55;
  v55 = v13;
  *(_QWORD *)&v42.left = v14;
  LODWORD(v14) = v56;
  v56 = (int)v10;
  v42.right = (int)v14;
  RoVariant::~RoVariant((RoVariant *)&v42);
  if ( v12 >= 0 )
  {
    *(_QWORD *)&v42.left = v55;
    v42.right = v56;
    v51 = 0LL;
    v54 = 0LL;
    v6 = RoVariant::Accessor::VerifyPV((RoVariant::Accessor *)&v42);
    if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 184LL))(v16, &v54), v6 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      v17 = (RoVariant *)&v55;
LABEL_10:
      RoVariant::~RoVariant(v17);
      goto LABEL_34;
    }
    v51.x = (int)*(float *)&v54;
    v51.y = (int)*((float *)&v54 + 1);
    RoVariant::~RoVariant((RoVariant *)&v55);
    v57.Reserved.Reserved1 = 0LL;
    *(_DWORD *)&v57.Reserved.Reserved2[8] = 0;
    v18 = v47;
    v19 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v47 + 48LL);
    v45 = &v57;
    v46 = 0LL;
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v60,
            (const WCHAR **)&JumpViewExperienceEvents::Param_HorizontalAlign,
            v20);
    v12 = v19(v18, v21[1].Reserved.Reserved1, &v46);
    v61 = 0LL;
    v22 = v45;
    RoVariant::RoVariant((RoVariant *)&v43, v46);
    v23 = v43;
    v43 = 0LL;
    LODWORD(v19) = v44;
    LODWORD(v44) = 0;
    RoVariant::~RoVariant((RoVariant *)&v43);
    Reserved1 = v22->Reserved.Reserved1;
    v22->Reserved.Reserved1 = v23;
    *(_QWORD *)&v42.left = Reserved1;
    LODWORD(Reserved1) = *(_DWORD *)&v22->Reserved.Reserved2[8];
    *(_DWORD *)&v22->Reserved.Reserved2[8] = (_DWORD)v19;
    v42.right = (int)Reserved1;
    RoVariant::~RoVariant((RoVariant *)&v42);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D3,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
      v15 = (RoVariant *)&v57;
      goto LABEL_6;
    }
    v52 = 0;
    *(_QWORD *)&v42.left = v57.Reserved.Reserved1;
    v42.right = *(_DWORD *)&v57.Reserved.Reserved2[8];
    Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v42, &v52);
    v6 = Int32;
    if ( Int32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)Int32);
      v17 = (RoVariant *)&v57;
      goto LABEL_10;
    }
    RoVariant::~RoVariant((RoVariant *)&v57);
    v43 = 0LL;
    LODWORD(v44) = 0;
    v26 = v47;
    v27 = *(__int64 (__fastcall **)(__int64, PVOID, LONG *))(*(_QWORD *)v47 + 48LL);
    *(_QWORD *)&v42.left = &v43;
    *(_QWORD *)&v42.right = 0LL;
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v60,
            (const WCHAR **)&JumpViewExperienceEvents::Param_VerticalAlign,
            v28);
    v12 = v27(v26, v29[1].Reserved.Reserved1, &v42.right);
    v61 = 0LL;
    v30 = *(_QWORD *)&v42.left;
    RoVariant::RoVariant((RoVariant *)&v45, *(struct IInspectable **)&v42.right);
    v31 = v45;
    v45 = 0LL;
    LODWORD(v27) = (_DWORD)v46;
    LODWORD(v46) = 0;
    RoVariant::~RoVariant((RoVariant *)&v45);
    v32 = *(HSTRING_HEADER **)v30;
    *(_QWORD *)v30 = v31;
    v45 = v32;
    LODWORD(v32) = *(_DWORD *)(v30 + 8);
    *(_DWORD *)(v30 + 8) = (_DWORD)v27;
    LODWORD(v46) = (_DWORD)v32;
    RoVariant::~RoVariant((RoVariant *)&v45);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DD,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
      v15 = (RoVariant *)&v43;
      goto LABEL_6;
    }
    v53 = 0;
    *(_QWORD *)&v42.left = v43;
    v42.right = v44;
    v33 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v42, &v53);
    v6 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E0,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v33);
      v17 = (RoVariant *)&v43;
      goto LABEL_10;
    }
    RoVariant::~RoVariant((RoVariant *)&v43);
    v42 = 0LL;
    v48 = 0;
    MonitorInformation = CJumpViewExperienceManager::GetMonitorInformation(
                           this,
                           v51,
                           &v42,
                           &v48,
                           (CJumpViewExperienceManager *)((char *)this + 496));
    v6 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v7 = (unsigned int)MonitorInformation;
      v8 = 1001LL;
      goto LABEL_33;
    }
    v35 = v42;
    *(struct tagRECT *)((char *)this + 524) = v42;
    v49 = 0;
    v50 = 0;
    ExperienceManagerUtils::ScaleByDPI(
      (struct CSingleViewShellExperience *)((char *)a2 + 44),
      (const struct Windows::Foundation::Size *)v48,
      (int)&v49,
      &v50,
      v39);
    if ( v49 <= 0 || v50 <= 0 )
    {
      v6 = -2147024809;
      v7 = 2147942487LL;
      v8 = 1011LL;
      goto LABEL_33;
    }
    v59 = 0LL;
    v42 = v35;
    v36 = CJumpViewExperienceManager::CalcWindowPosition(&v42.left, *(_QWORD *)&v51, v49, v50, (__int64)v40, v41, &v59);
    v6 = v36;
    if ( v36 < 0 )
    {
      v7 = (unsigned int)v36;
      v8 = 1014LL;
      goto LABEL_33;
    }
    v37 = CSingleViewShellExperience::SetPosition(a2, &v59);
    v6 = v37;
    if ( v37 < 0 )
    {
      v7 = (unsigned int)v37;
      v8 = 1015LL;
      goto LABEL_33;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl) )
    {
      if ( *((_DWORD *)this + 125) == 5 )
        *(struct tagRECT *)((char *)&g_hoverState + 4) = v59;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v47);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C7,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
  v15 = (RoVariant *)&v55;
LABEL_6:
  RoVariant::~RoVariant(v15);
  v6 = v12;
LABEL_34:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v47);
  return (unsigned int)v6;
}
