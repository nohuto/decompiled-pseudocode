/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801EB59C
 * Callers:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801EB560 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$.c)
 *     ?GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x1802030A0 (-GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElemen.c)
 *     ?GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x180489FC0 (-GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAA.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomation@@AEA_N@Z @ 0x18048A1C8 (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomation@@AEA_N.c)
 *     ?FailfastWithContextCallback@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18058C2B0 (-FailfastWithContextCallback@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18058C3D0 (-RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801CD2B0 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D4C2C (--0last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        OLECHAR **a1,
        OLECHAR *a2)
{
  OLECHAR *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v5);
    SysFreeString(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
  }
  *a1 = a2;
}
