/*
 * XREFs of ?at@?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEBAAEBUguid@winrt@@AEB_K@Z @ 0x180201FA0
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x18002C14C (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,winrt::guid>::at(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()(a2);
  v5 = v4[3];
  v6 = 2 * (v4[6] & v3);
  v7 = *(_QWORD *)(v5 + 16 * (v4[6] & v3) + 8);
  if ( v7 == v4[1] )
    goto LABEL_8;
  v8 = *(_QWORD *)(v5 + 8 * v6);
  while ( *(_QWORD *)a2 != *(_QWORD *)(v7 + 16) )
  {
    if ( v7 == v8 )
      goto LABEL_8;
    v7 = *(_QWORD *)(v7 + 8);
  }
  if ( !v7 )
  {
LABEL_8:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x180202009LL);
  }
  return v7 + 24;
}
