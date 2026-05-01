/*
 * XREFs of ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038DB60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002050C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x180175388 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1801DAD0C (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802B99F0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x180383940 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038C648 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?StartMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x18038E6C4 (-StartMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@wil@@QEAA_NXZ @ 0x18038EBA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarJumplistOnHover@@@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CJumpViewExperienceManager::OnViewPropertiesChanging(
        HSTRING *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v10; // rax
  int v11; // r12d
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  int String; // eax
  char IsEnabled; // al
  char *v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // rdx
  int v22; // eax
  int v23; // eax
  _QWORD *v24; // [rsp+20h] [rbp-60h] BYREF
  int v25; // [rsp+28h] [rbp-58h]
  __int64 v26; // [rsp+30h] [rbp-50h] BYREF
  int v27; // [rsp+38h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v29; // [rsp+48h] [rbp-38h] BYREF
  struct IInspectable *v30; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER v31; // [rsp+58h] [rbp-28h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v28 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4,
         &v28);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CJumpViewExperienceManager::EnsureWindowPosition((CJumpViewExperienceManager *)(this - 8), a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 716LL;
      goto LABEL_5;
    }
    v24 = 0LL;
    v25 = 0;
    v8 = v28;
    v9 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v28 + 48LL);
    v29 = &v24;
    v30 = 0LL;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v31,
            (const WCHAR **)&JumpViewExperienceEvents::Param_Title,
            v7);
    v11 = v9(v8, v10[1].Reserved.Reserved1, &v30);
    v32 = 0LL;
    v12 = v29;
    RoVariant::RoVariant((RoVariant *)&v26, v30);
    v13 = v26;
    v26 = 0LL;
    LODWORD(v9) = v27;
    v27 = 0;
    RoVariant::~RoVariant((RoVariant *)&v26);
    v14 = *v12;
    *v12 = v13;
    v26 = v14;
    LODWORD(v14) = *((_DWORD *)v12 + 2);
    *((_DWORD *)v12 + 2) = (_DWORD)v9;
    v27 = v14;
    RoVariant::~RoVariant((RoVariant *)&v26);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
      RoVariant::~RoVariant((RoVariant *)&v24);
      v5 = v11;
      goto LABEL_21;
    }
    if ( v24 )
    {
      v29 = v24;
      LODWORD(v30) = v25;
      WindowsDeleteString(this[45]);
      this[45] = 0LL;
      String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v29, this + 45);
      v5 = String;
      if ( String < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D2,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
          (const char *)(unsigned int)String);
LABEL_11:
        RoVariant::~RoVariant((RoVariant *)&v24);
        goto LABEL_21;
      }
    }
    if ( *((_BYTE *)this + 456) )
    {
      *((_BYTE *)this + 456) = 0;
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TaskbarJumplistOnHover>::GetImpl'::`2'::impl);
      v17 = (char *)(this + 11);
      if ( IsEnabled )
      {
        if ( *((_DWORD *)this + 109) == 5 )
        {
          v18 = CSingleViewShellExperience::Show(
                  (__int64)v17,
                  (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
          v19 = v18;
          if ( v18 < 0 )
          {
            v5 = -2147467259;
            if ( v18 == -2147467259 )
              goto LABEL_11;
            v20 = 740LL;
LABEL_18:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v20,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
              (const char *)v19);
            RoVariant::~RoVariant((RoVariant *)&v24);
            v5 = v19;
            goto LABEL_21;
          }
          CJumpViewExperienceManager::StartMouseHoverHook((CJumpViewExperienceManager *)(this - 8));
        }
        else
        {
          v22 = CSingleViewShellExperience::Show(
                  (__int64)v17,
                  *((_BYTE *)this + 457) == 0
                ? (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4
                : 0);
          v19 = v22;
          if ( v22 < 0 )
          {
            v5 = -2147467259;
            if ( v22 == -2147467259 )
              goto LABEL_11;
            v20 = 746LL;
            goto LABEL_18;
          }
        }
      }
      else
      {
        v23 = CSingleViewShellExperience::Show(
                (__int64)v17,
                *((_BYTE *)this + 457) == 0 ? (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4 : 0);
        v19 = v23;
        if ( v23 < 0 )
        {
          v5 = -2147467259;
          if ( v23 == -2147467259 )
            goto LABEL_11;
          v20 = 752LL;
          goto LABEL_18;
        }
      }
    }
    RoVariant::~RoVariant((RoVariant *)&v24);
    v5 = 0;
    goto LABEL_21;
  }
  v6 = 700LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  return v5;
}
