/*
 * XREFs of ?SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800B9A1C
 * Callers:
 *     ?SetTabTearOutSupportedForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_K@Z @ 0x1800B99F0 (-SetTabTearOutSupportedForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9B04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18057FA3C (-find@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uha.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::SetTabTearOutSupportedForWindow(
        RTL_SRWLOCK *this,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  PVOID *v5; // rax
  const char *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *Ptr; // rcx
  __int64 v10; // rdi
  __int64 v11; // r11
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  char v15; // [rsp+50h] [rbp+18h] BYREF

  v14 = a2;
  v4 = this + 77;
  AcquireSRWLockExclusive(this + 77);
  v5 = (PVOID *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find(
                  &this[78],
                  &v15,
                  &v14);
  try
  {
    if ( *v5 != this[79].Ptr && BYTE1(this[109].Ptr) )
    {
      v7 = 2
         * ((__int64)this[84].Ptr & std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()((unsigned __int8 *)&v14));
      Ptr = this[81].Ptr;
      v10 = Ptr[v7 + 1];
      if ( v10 != v11 )
      {
        v12 = Ptr[v7];
        while ( 1 )
        {
          if ( a2 == *(_QWORD *)(v10 + 16) )
            goto LABEL_9;
          if ( v10 == v12 )
            break;
          v10 = *(_QWORD *)(v10 + 8);
        }
      }
      do
      {
        std::_Xout_of_range("invalid unordered_map<K, T> key");
LABEL_9:
        ;
      }
      while ( !v10 );
      LOBYTE(v8) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
        v8);
      *(_BYTE *)(v10 + 232) = 1;
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE2,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      v6);
  }
}
