/*
 * XREFs of ??0?$unordered_map@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@7@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@@std@@QEAA@XZ @ 0x18008D044
 * Callers:
 *     ??0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002F718 (--0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@1@AEBV?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@1@@Z @ 0x18002FFC4 (--0-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V-$_Uhash_compa.c)
 */

__int64 __fastcall std::unordered_map<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>::unordered_map<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>(
    a1,
    &v3);
  return a1;
}
