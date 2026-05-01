/*
 * XREFs of ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1801870F4
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800295CC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x180265020 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x18057DAE8 (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_K@Z @ 0x18057E210 (-GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()(a2);
  v5 = v4[3];
  v6 = 2 * (v4[6] & v3);
  v7 = *(_QWORD *)(v5 + 16 * (v4[6] & v3) + 8);
  if ( v7 == v4[1] )
    goto LABEL_7;
  v8 = *(_QWORD *)(v5 + 8 * v6);
  v9 = *(_QWORD *)a2;
  while ( 1 )
  {
    if ( v9 != *(_QWORD *)(v7 + 16) )
    {
      if ( v7 != v8 )
        goto LABEL_8;
      goto LABEL_7;
    }
    if ( v7 )
      return v7 + 24;
LABEL_7:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
LABEL_8:
    v7 = *(_QWORD *)(v7 + 8);
  }
}
