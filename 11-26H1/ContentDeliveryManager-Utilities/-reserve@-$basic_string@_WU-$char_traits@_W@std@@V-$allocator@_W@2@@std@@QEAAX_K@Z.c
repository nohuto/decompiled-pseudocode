/*
 * XREFs of ?reserve@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x180099150
 * Callers:
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x180096C10 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800A7CF0 (-Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$basic_string@_WU-$char_trai.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800A8D70 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18005BB00 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 */

void __fastcall std::wstring::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdi

  v2 = a1 + 2;
  v3 = a1;
  v4 = a1[2];
  if ( v4 <= a2 && a1[3] != a2 && std::wstring::_Grow(a1, a2, 1) )
  {
    if ( v3[3] >= 8uLL )
      v3 = (_QWORD *)*v3;
    *v2 = v4;
    *((_WORD *)v3 + v4) = 0;
  }
}
