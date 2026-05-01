/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D07F0
 * Callers:
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x1801D074C (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ?GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x180210604 (-GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElemen.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180241EAC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$.c)
 *     ??1TaskbarLayoutParser@@UEAA@XZ @ 0x18031FD8C (--1TaskbarLayoutParser@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x180321748 (-RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ.c)
 *     ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x1803E6D2C (--1PWSLayoutPolicyManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803E79EC (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ??1PWSLayoutParser@@UEAA@XZ @ 0x1803E8434 (--1PWSLayoutParser@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ @ 0x1803E912C (-RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ.c)
 *     ?GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x1804797C4 (-GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAA.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomation@@AEA_N@Z @ 0x1804799BC (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomation@@AEA_N.c)
 *     _anonymous_namespace_::RaiseUiaNotificationFromString @ 0x180518D78 (_anonymous_namespace_--RaiseUiaNotificationFromString.c)
 *     ?FailfastWithContextCallback@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1805684F0 (-FailfastWithContextCallback@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180568600 (-RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18059B23C (-RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV-$NativeString@V-$CoTask.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(
        OLECHAR **a1)
{
  OLECHAR *v1; // rcx

  v1 = *a1;
  if ( v1 )
    SysFreeString(v1);
}
