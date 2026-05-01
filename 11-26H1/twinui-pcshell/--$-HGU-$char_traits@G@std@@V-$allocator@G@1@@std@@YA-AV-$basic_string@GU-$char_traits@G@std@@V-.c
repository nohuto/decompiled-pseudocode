/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1801080A8
 * Callers:
 *     ?UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@Z @ 0x1801075B8 (-UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@.c)
 *     ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x180107B18 (-UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z.c)
 *     ?UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801EB674 (-UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV-$basic_st.c)
 *     ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18024D908 (-UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV-$basic_.c)
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180290428 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805EEFFC (_anonymous_namespace_--CreateTemporaryFile.c)
 *     ?RegisterCompatJsonWriteTimeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180615EF4 (-RegisterCompatJsonWriteTimeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Wind.c)
 *     _lambda_3e3d6084102ea12775201c324e2ccf34_::operator() @ 0x180659308 (_lambda_3e3d6084102ea12775201c324e2ccf34_--operator().c)
 *     ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066A060 (-Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Take_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEAV12@@Z @ 0x1800336B0 (-_Take_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEAV12@@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG2@Z @ 0x1801081D4 (--$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@-$basic_string@GU-$c.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall std::operator+<unsigned short>(__int64 a1, _BYTE *a2, void **a3)
{
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  _BYTE *v13; // r14
  __int64 v14; // rsi

  v6 = std::_WChar_traits<wchar_t>::length((__int64)a2);
  v9 = *(_QWORD *)(v8 + 16);
  v10 = v6;
  v11 = (unsigned __int64)a3[3];
  if ( v10 <= v11 - v9 )
  {
    v13 = a3;
    a3[2] = (void *)(v9 + v10);
    if ( v11 > 7 )
      v13 = *a3;
    if ( &a2[2 * v10] <= v13 || a2 > &v13[2 * v9] )
    {
      v14 = v10;
    }
    else if ( v13 > a2 )
    {
      v14 = (v13 - a2) >> 1;
    }
    else
    {
      v14 = 0LL;
    }
    memmove_0(&v13[2 * v10], v13, 2 * v9 + 2);
    memcpy_0(v13, a2, 2 * v14);
    memcpy_0(&v13[2 * v14], &a2[2 * v14 + 2 * v10], 2 * (v10 - v14));
  }
  else
  {
    a3 = (void **)std::wstring::_Reallocate_grow_by<_lambda_156f8c05752017390d6185e99ef4c093_,unsigned __int64,unsigned short const *,unsigned __int64>(
                    a3,
                    v7,
                    v10);
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  std::wstring::_Take_contents((_OWORD *)a1, (__int64)a3);
  return a1;
}
