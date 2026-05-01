/*
 * XREFs of ?Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@AEBUShellAnimationCoordinator@34567@@Z @ 0x180285274
 * Callers:
 *     ?InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1802AA138 (-InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Int.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAA@V?$initializer_list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@1@@Z @ 0x1800A623C (--0-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4S.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x1800A6600 (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x1800FB5EC (--1-$_Hash@V-$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V-$.c)
 *     ?CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@CA?AU134567@AEBUShellAnimationCoordinator@34567@AEBV?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@@Z @ 0x18028560C (-CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Sh.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D566C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@QEAA_NXZ @ 0x18067544C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=34
__int64 __fastcall winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::Create(
        __int64 a1,
        __int64 a2)
{
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v4; // rcx
  __int64 v5; // rax
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v6; // rcx
  __int64 v7; // rax
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v8; // rcx
  __int64 v9; // rax
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v10; // rcx
  __int64 v11; // rax
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v12; // rcx
  __int64 v13; // rax
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v14; // rcx
  __int64 v15; // rax
  __m128i *v16; // rcx
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v17; // rax
  __int64 v18; // rcx
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v19; // rax
  __int64 v20; // rcx
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v21; // rax
  __int64 v22; // rcx
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v23; // rax
  __int64 v24; // rcx
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *v25; // rax
  __int64 v26; // rcx
  int v28; // [rsp+24h] [rbp-DCh] BYREF
  int v29; // [rsp+28h] [rbp-D8h] BYREF
  int v30; // [rsp+2Ch] [rbp-D4h] BYREF
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  __m128i v39; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v40; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v41[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v42[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v43[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v44[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v45[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v47[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v48[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v49[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-48h]
  _BYTE v51[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v52[64]; // [rsp+100h] [rbp+0h] BYREF
  int v53; // [rsp+140h] [rbp+40h] BYREF
  __int64 v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  int v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  int v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  int v61; // [rsp+180h] [rbp+80h]
  __int64 v62; // [rsp+188h] [rbp+88h]
  int v63; // [rsp+190h] [rbp+90h] BYREF
  __int64 v64; // [rsp+198h] [rbp+98h]
  int v65; // [rsp+1A0h] [rbp+A0h]
  __int64 v66; // [rsp+1A8h] [rbp+A8h]
  int v67; // [rsp+1B0h] [rbp+B0h]
  __int64 v68; // [rsp+1B8h] [rbp+B8h]
  int v69; // [rsp+1C0h] [rbp+C0h]
  __int64 v70; // [rsp+1C8h] [rbp+C8h]
  int v71; // [rsp+1D0h] [rbp+D0h]
  __int64 v72; // [rsp+1D8h] [rbp+D8h]
  int v73; // [rsp+1E0h] [rbp+E0h]
  __int64 v74; // [rsp+1E8h] [rbp+E8h]
  __int64 v75; // [rsp+1F0h] [rbp+F0h] BYREF

  v50 = a1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55536872>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55536872>::GetImpl'::`2'::impl) )
  {
    v28 = 16;
    v4 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
           (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)&v39,
           (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v28);
    v63 = 16;
    v5 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
    v64 = v5;
    v29 = 2;
    v6 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
           (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v45,
           (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v29);
    v65 = 2;
    v7 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 0LL;
    v66 = v7;
    v30 = 6;
    v8 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
           (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v44,
           (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v30);
    v67 = 6;
    v9 = *(_QWORD *)v8;
    *(_QWORD *)v8 = 0LL;
    v68 = v9;
    v31 = 4;
    v10 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
            (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v43,
            (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v31);
    v69 = 4;
    v11 = *(_QWORD *)v10;
    *(_QWORD *)v10 = 0LL;
    v70 = v11;
    v32 = 0;
    v12 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
            (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v42,
            (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v32);
    v71 = 0;
    v13 = *(_QWORD *)v12;
    *(_QWORD *)v12 = 0LL;
    v72 = v13;
    v33 = 30;
    v14 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
            (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v41,
            (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v33);
    v73 = 30;
    v15 = *(_QWORD *)v14;
    *(_QWORD *)v14 = 0LL;
    v74 = v15;
    v40.m128i_i64[0] = (__int64)&v63;
    v40.m128i_i64[1] = (__int64)&v75;
    std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>(
      (__int64)v51,
      &v40);
    winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::CreateWithShellViewCoordinatorMap(
      a1,
      a2,
      v51);
    std::_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>::~_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>((__int64)v51);
    `eh vector destructor iterator'(
      &v63,
      0x10uLL,
      6uLL,
      std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v41);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v42);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v43);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v44);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v45);
    v16 = &v39;
  }
  else
  {
    v34 = 16;
    v17 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
            (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)&v40,
            (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v34);
    v53 = 16;
    v18 = *(_QWORD *)v17;
    *(_QWORD *)v17 = 0LL;
    v54 = v18;
    v35 = 2;
    v19 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
            (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v49,
            (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v35);
    v55 = 2;
    v20 = *(_QWORD *)v19;
    *(_QWORD *)v19 = 0LL;
    v56 = v20;
    v36 = 6;
    v21 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
            (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v48,
            (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v36);
    v57 = 6;
    v22 = *(_QWORD *)v21;
    *(_QWORD *)v21 = 0LL;
    v58 = v22;
    v37 = 4;
    v23 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
            (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v47,
            (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v37);
    v59 = 4;
    v24 = *(_QWORD *)v23;
    *(_QWORD *)v23 = 0LL;
    v60 = v24;
    v38 = 0;
    v25 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
            (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v46,
            (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v38);
    v61 = 0;
    v26 = *(_QWORD *)v25;
    *(_QWORD *)v25 = 0LL;
    v62 = v26;
    v39.m128i_i64[0] = (__int64)&v53;
    v39.m128i_i64[1] = (__int64)&v63;
    std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>(
      (__int64)v52,
      &v39);
    winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::CreateWithShellViewCoordinatorMap(
      a1,
      a2,
      v52);
    std::_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>::~_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>((__int64)v52);
    `eh vector destructor iterator'(
      &v53,
      0x10uLL,
      5uLL,
      std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v46);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v47);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v48);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v49);
    v16 = &v40;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v16);
  return a1;
}
