/*
 * XREFs of ?InternalAddRef@?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x180053EA0
 * Callers:
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0 @ 0x180049FB0 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0.c)
 *     ?EnableContextualSuggestionsAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18004F370 (-EnableContextualSuggestionsAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyn.c)
 *     ?EnableLockScreenOverlayAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18004F430 (-EnableLockScreenOverlayAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAct.c)
 *     ?EnableLockScreenRotationAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18004F4F0 (-EnableLockScreenRotationAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAc.c)
 *     ?EnableStartMenuSystemPaneSuggestionsAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18004F5B0 (-EnableStartMenuSystemPaneSuggestionsAsync@ContentManagementService@ContentManagement@@UEAAJEPEA.c)
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180055C50 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x1800578C0 (-ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003AC48 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

void __fastcall Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 112);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 112), v2 + 1, v2);
        if ( v3 != v2 )
          continue;
      }
      return;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), (volatile int *)v1);
  }
}
