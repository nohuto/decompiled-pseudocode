/*
 * XREFs of ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AC7B0
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A18CC (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1804AC360 (--$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicatio.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ @ 0x1804AC788 (-InternalRelease@-$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingData_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        MultitaskingData *a12)
{
  MultitaskingData *v12; // rdi
  int v13; // eax
  int v14; // ebx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  const struct _GUID *v17; // rcx
  MultitaskingData *v18; // rcx
  MultitaskingData *v19; // rcx
  _DWORD v21[4]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v23; // [rsp+90h] [rbp+20h] BYREF
  __int64 v24; // [rsp+98h] [rbp+28h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+38h] BYREF

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v23 = a1;
  v21[0] = 0;
  v12 = a12;
  *(_QWORD *)a12 = 0LL;
  a12 = 0LL;
  Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease((__int64 *)&a12);
  v13 = Microsoft::WRL::Details::MakeAndInitialize<MultitaskingData,MultitaskingData,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,IVirtualDesktopThumbnailWindowFilter * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopPinnedApps * &,IVirtualDesktopNotificationService * &,IImmersiveSettingsCache * &,ISnapServiceProvider * &,IApplicationViewIconLoader * &,enum SwitchItemFilterBehavior &>(
          &a12,
          &v23,
          &v24,
          &v25,
          &v26,
          &a5,
          &a6,
          &a7,
          &a8,
          &a9,
          v21);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = (unsigned int)v13;
    v16 = 176LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingdata.cpp",
      (const char *)v15);
    goto LABEL_11;
  }
  *(_QWORD *)v12 = 0LL;
  if ( InlineIsEqualGUID(&GUID_992fd7b2_d760_49b8_ad16_359613ec2ae2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v19 = a12;
    *(_QWORD *)v12 = a12;
    (*(void (__fastcall **)(MultitaskingData *))(*(_QWORD *)v19 + 8LL))(v19);
    v14 = 0;
  }
  else if ( InlineIsEqualGUID(v17, v17) )
  {
    v18 = a12;
    *(_QWORD *)v12 = a12;
    v14 = 0;
    (*(void (__fastcall **)(MultitaskingData *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  else
  {
    v14 = -2147467262;
  }
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v16 = 178LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease((__int64 *)&a12);
  return (unsigned int)v14;
}
