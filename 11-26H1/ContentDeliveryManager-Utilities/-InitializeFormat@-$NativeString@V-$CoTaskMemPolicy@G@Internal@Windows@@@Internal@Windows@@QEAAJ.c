/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033BA0
 * Callers:
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x18002DC94 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x18003538C (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180037D40 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x1800396D4 (-RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18003CB30 (-UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetCreativeEvent@CreativeEventStore@CreativeFramework@@YAJPEBGI0PEAPEAG@Z @ 0x180051600 (-GetCreativeEvent@CreativeEventStore@CreativeFramework@@YAJPEBGI0PEAPEAG@Z.c)
 *     ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x1800516AC (-GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x180051758 (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x180052E00 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180053190 (-GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUH.c)
 *     ?GetPlacementEventStoreRegKey@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x1800536A4 (-GetPlacementEventStoreRegKey@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 *     ?GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x1800539D4 (-GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x180055428 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z @ 0x180062DEC (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z.c)
 * Callees:
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x180028048 (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        __int64 a1,
        const unsigned __int16 *a2,
        ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_fe718337787c493ce2d833414db25eba_>(
           a1,
           a2,
           va);
}
