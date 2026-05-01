/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@W4SwitchItemFilterBehavior@@@Z @ 0x1804AC9B8
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1804AC360 (--$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804ACAD4 (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@.c)
 *     ?SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804B05FC (-SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B1214 (-SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MultitaskingData::RuntimeClassInitialize(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct IVirtualDesktopManagerInternal *a5,
        struct IVirtualDesktopPinnedApps *a6,
        struct IVirtualDesktopNotificationService *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11)
{
  const struct _GUID *v14; // rcx
  int Instance; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v20; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 7, a4);
  v20 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  Instance = SwitchItemFactory_CreateInstance(v14, &v20);
  v16 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 2);
    Instance = SwitchItemCollection_CreateInstance(v20, a2, a3, a11);
    v16 = Instance;
    if ( Instance >= 0 )
    {
      Instance = MultitaskingData::_InitializeVirtualDesktopComponents((MultitaskingData *)a1, a5, a6, a7);
      v16 = Instance;
      if ( Instance >= 0 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 8, a8);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 9, a9);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 10, a10);
        v16 = 0;
        goto LABEL_9;
      }
      v17 = 81LL;
    }
    else
    {
      v17 = 79LL;
    }
  }
  else
  {
    v17 = 78LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingdata.cpp",
    (const char *)(unsigned int)Instance);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  return v16;
}
