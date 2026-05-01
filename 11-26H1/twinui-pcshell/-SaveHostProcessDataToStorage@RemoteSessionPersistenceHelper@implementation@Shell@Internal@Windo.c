/*
 * XREFs of ?SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1806638EC
 * Callers:
 *     ?SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180663F80 (-SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028E950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x18035A874 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806504E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180663864 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_.c)
 *     ?CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x18066760C (-CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     ?IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x180667634 (-IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4L.c)
 *     ?RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180667684 (-RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@X.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveHostProcessDataToStorage(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *a1,
        unsigned int **a2,
        HKEY *a3)
{
  unsigned int *v5; // rcx
  const BYTE *lpData; // rax
  DWORD cbData; // edx
  winrt::impl *v8; // rcx
  const BYTE *v9; // rax
  DWORD v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // r8
  const char *v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r8
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v17; // rcx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v18; // rcx
  const WCHAR *v19; // rax
  unsigned int v20; // eax
  const WCHAR *v21; // rax
  unsigned int v22; // eax
  const WCHAR *v23; // rax
  unsigned int v24; // eax
  const WCHAR *v25; // rax
  unsigned int v26; // eax
  const WCHAR *v27; // rax
  unsigned int v28; // eax
  std::_Ref_count_base *v29; // rcx
  volatile signed __int32 *v30; // [rsp+30h] [rbp-68h] BYREF
  volatile signed __int32 *v31; // [rsp+38h] [rbp-60h] BYREF
  BYTE Data[4]; // [rsp+40h] [rbp-58h] BYREF
  BYTE v33[4]; // [rsp+44h] [rbp-54h] BYREF
  BYTE v34[4]; // [rsp+48h] [rbp-50h] BYREF
  BYTE v35[4]; // [rsp+4Ch] [rbp-4Ch] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-48h] BYREF
  BYTE v37[8]; // [rsp+58h] [rbp-40h] BYREF
  int v38; // [rsp+60h] [rbp-38h]
  __int128 v39; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int **v42; // [rsp+A8h] [rbp+10h] BYREF
  BOOL IsCapabilitySupported; // [rsp+B8h] [rbp+20h] BYREF

  v42 = a2;
  winrt::Windows::Internal::Shell::implementation::HostProcessData::RemoteDesktopId(*a2, &v30);
  winrt::Windows::Internal::Shell::implementation::HostProcessData::CorrelationId(*a2, &v31);
  v5 = *a2;
  *(_DWORD *)Data = (*a2)[6];
  *(_DWORD *)v33 = *((_BYTE *)v5 + 28) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  v38 = 0;
  v39 = 0LL;
  lpData = (const BYTE *)winrt::hstring::c_str((winrt::hstring *)&v30);
  v8 = (winrt::impl *)(unsigned int)RegSetValueExW(*a3, L"remoteDesktopId", 0, 1u, lpData, cbData);
  try
  {
    winrt::check_win32<unsigned long>(v8);
    v38 = 0;
    v39 = 0LL;
    v9 = (const BYTE *)winrt::hstring::c_str((winrt::hstring *)&v31);
    v11 = RegSetValueExW(*a3, L"correlationId", 0, 1u, v9, v10);
    winrt::check_win32<unsigned long>((winrt::impl *)v11);
    v38 = 0;
    v39 = 0LL;
    v12 = RegSetValueExW(*a3, L"cloudPCMode", 0, 4u, Data, 4u);
    winrt::check_win32<unsigned long>((winrt::impl *)v12);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x88,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      v14);
    LOBYTE(IsCapabilitySupported) = 1;
    v36 = **v42;
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteIdFromStorage(
      a1,
      &v36,
      (const struct winrt::hstring *)&v30,
      (bool *)&IsCapabilitySupported);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
    v29 = (std::_Ref_count_base *)v42[1];
    goto LABEL_15;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::GetImpl'::`2'::impl,
    1u,
    v13);
  v15 = RegSetValueExW(*a3, L"supportBluetoothSettings", 0, 4u, v33, 4u);
  if ( v15 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      154LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v15);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
    1u,
    v16);
  LODWORD(v42) = 1;
  IsCapabilitySupported = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                            (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                            (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v42);
  LODWORD(v42) = 2;
  *(_DWORD *)v34 = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                     (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                     (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v42);
  LODWORD(v42) = 4;
  *(_DWORD *)v35 = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                     v17,
                     (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v42);
  LODWORD(v42) = 3;
  LODWORD(v36) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                   v18,
                   (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v42);
  v19 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
  v20 = RegSetValueExW(*a3, v19, 0, 4u, (const BYTE *)&IsCapabilitySupported, 4u);
  if ( v20 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      169LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v20);
  v21 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
  v22 = RegSetValueExW(*a3, v21, 0, 4u, v34, 4u);
  if ( v22 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      171LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v22);
  v23 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
  v24 = RegSetValueExW(*a3, v23, 0, 4u, v35, 4u);
  if ( v24 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      173LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v24);
  v25 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
  v26 = RegSetValueExW(*a3, v25, 0, 4u, (const BYTE *)&v36, 4u);
  if ( v26 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      175LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v26);
  LODWORD(v42) = 5;
  *(_DWORD *)v37 = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                     (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                     (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v42);
  v27 = winrt::hstring::c_str((winrt::hstring *)&c_supportBlendedDisplaySettings);
  v28 = RegSetValueExW(*a3, v27, 0, 4u, v37, 4u);
  if ( v28 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      180LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v28);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
  v29 = (std::_Ref_count_base *)a2[1];
LABEL_15:
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
}
