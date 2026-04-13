/*
 * XREFs of ?_Xbad_function_call@std@@YAXXZ @ 0x180004780
 * Callers:
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18004D750 (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 *     ?GetSubscriptionConfigurationEntry@TargetedContent@CreativeFramework@@YA?AUTargetedContentSubscriptionConfiguration@12@PEBG@Z @ 0x180053894 (-GetSubscriptionConfigurationEntry@TargetedContent@CreativeFramework@@YA-AUTargetedContentSubscr.c)
 *     _lambda_bff338be9bc6c4db3b3ba6d2630bc2fb_::operator() @ 0x18007CDD0 (_lambda_bff338be9bc6c4db3b3ba6d2630bc2fb_--operator().c)
 *     ??R?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@QEBAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@1@@Z @ 0x18007CEC8 (--R-$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ??R?$_Func_class@XPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAIU_Nil@std@@U45@U45@U45@@std@@QEBAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x1800818B8 (--R-$_Func_class@XPEAUHSTRING__@@AEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6A.c)
 *     _lambda_69a92d371a2c7508f1f4ce514cd8b1f7_::operator() @ 0x1800858E8 (_lambda_69a92d371a2c7508f1f4ce514cd8b1f7_--operator().c)
 *     _lambda_c4c3923748e77b314a455aaed0b87e40_::operator() @ 0x180085B38 (_lambda_c4c3923748e77b314a455aaed0b87e40_--operator().c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180086838 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180086D50 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x1800966DC (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 *     ?EnumerateTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAAX$$QEAV?$function@$$A6A_NV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z@std@@@Z @ 0x1800AE938 (-EnumerateTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Cr.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@PEBD@Z @ 0x180004624 (--0bad_function_call@std@@QEAA@PEBD@Z.c)
 *     _CxxThrowException_0 @ 0x180021CDC (_CxxThrowException_0.c)
 */

void __noreturn std::_Xbad_function_call(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject, 0LL);
  throw (std::bad_function_call *)pExceptionObject;
}
