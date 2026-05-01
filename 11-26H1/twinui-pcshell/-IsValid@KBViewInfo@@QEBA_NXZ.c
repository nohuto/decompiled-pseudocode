/*
 * XREFs of ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x180145284
 * Callers:
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180288C24 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18046C87C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z @ 0x18046CB50 (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

bool __fastcall KBViewInfo::IsValid(KBViewInfo *this)
{
  char v1; // al
  __int64 v2; // r8
  char v3; // dl

  v1 = std::_Atomic_storage<bool,1>::load((char *)this + 32);
  v3 = 0;
  if ( !v1 && *(_BYTE *)(v2 + 33) && *(_QWORD *)(v2 + 56) && *(_DWORD *)(**(_QWORD **)(v2 + 48) + 16LL) != -1 )
    return *(_DWORD *)(v2 + 104) != -1;
  return v3;
}
