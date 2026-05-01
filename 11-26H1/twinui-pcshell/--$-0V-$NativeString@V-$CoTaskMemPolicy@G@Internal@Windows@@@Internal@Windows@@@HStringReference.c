/*
 * XREFs of ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1802AF2D4
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180158D70 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18031A284 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18031A318 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x1803BE5C0 (-ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803F0AE4 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        const WCHAR **a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rbx
  const WCHAR *v5; // rdi
  UINT32 v6; // eax

  hstringHeader[1].Reserved.Reserved1 = 0LL;
  v4 = -1LL;
  v5 = *a2;
  do
    ++v4;
  while ( v5[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, (int)a2, a3);
    JUMPOUT(0x1802AF33CLL);
  }
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v4, (int)a2, a3);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(hstringHeader, v5, v6, v4);
  return hstringHeader;
}
