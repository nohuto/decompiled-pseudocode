/*
 * XREFs of ?Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@AEBUShellAnimationCoordinator@34567@@Z @ 0x18027C84C
 * Callers:
 *     ?InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1802A2A00 (-InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Int.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAA@V?$initializer_list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@1@@Z @ 0x1800545D8 (--0-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4S.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x1800547DC (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x1800B76CC (--1-$_Hash@V-$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V-$.c)
 *     ?CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@CA?AU134567@AEBUShellAnimationCoordinator@34567@AEBV?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@@Z @ 0x18027CA68 (-CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Sh.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802CDC8C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=19
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
  int v17; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+24h] [rbp-DCh] BYREF
  int v19; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+2Ch] [rbp-D4h] BYREF
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h]
  _BYTE v24[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v25[8]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v26[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v28[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[8]; // [rsp+68h] [rbp-98h] BYREF
  __m128i v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  _QWORD v32[9]; // [rsp+88h] [rbp-78h] BYREF
  int v33; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  __int64 v45; // [rsp+130h] [rbp+30h] BYREF

  v31 = a1;
  v23 = 0;
  v17 = 16;
  v4 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
         (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v29,
         (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v17);
  v33 = 16;
  v5 = *(_QWORD *)v4;
  *(_QWORD *)v4 = 0LL;
  v34 = v5;
  v18 = 2;
  v6 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
         (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v28,
         (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v18);
  v35 = 2;
  v7 = *(_QWORD *)v6;
  *(_QWORD *)v6 = 0LL;
  v36 = v7;
  v19 = 6;
  v8 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
         (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v27,
         (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v19);
  v37 = 6;
  v9 = *(_QWORD *)v8;
  *(_QWORD *)v8 = 0LL;
  v38 = v9;
  v20 = 4;
  v10 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
          (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v26,
          (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v20);
  v39 = 4;
  v11 = *(_QWORD *)v10;
  *(_QWORD *)v10 = 0LL;
  v40 = v11;
  v21 = 0;
  v12 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
          (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v25,
          (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v21);
  v41 = 0;
  v13 = *(_QWORD *)v12;
  *(_QWORD *)v12 = 0LL;
  v42 = v13;
  v22 = 30;
  v14 = winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
          (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v24,
          (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v22);
  v43 = 30;
  v15 = *(_QWORD *)v14;
  *(_QWORD *)v14 = 0LL;
  v44 = v15;
  v30.m128i_i64[0] = (__int64)&v33;
  v30.m128i_i64[1] = (__int64)&v45;
  std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>(
    (__int64)v32,
    &v30);
  winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::CreateWithShellViewCoordinatorMap(
    a1,
    a2,
    v32);
  v23 = 1;
  std::_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>::~_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>(v32);
  `eh vector destructor iterator'(
    &v33,
    0x10uLL,
    6uLL,
    std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v24);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v25);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v26);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v27);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v28);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v29);
  return a1;
}
