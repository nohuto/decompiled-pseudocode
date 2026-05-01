/*
 * XREFs of ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x18009D634
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18009C11C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801302C4 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1802B0A18 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 */

__int64 __fastcall ImmersiveIcons::GetPackageFullNameForAppsFolderItem(CallerIdentity *this, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // rax
  unsigned __int16 **v7; // r8
  int PackageFullNameFromAppId; // eax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+30h] [rbp-30h]
  unsigned __int16 v13[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a3 = 0LL;
  *(_QWORD *)v13 = 0LL;
  v11 = PKEY_AppUserModel_PackageFullName;
  v14 = -1LL;
  v15 = -1LL;
  v12 = 21;
  v5 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(a2, &v11, v13);
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 && **(_WORD **)v13 )
      goto LABEL_8;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7B,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v5);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
  v14 = -1LL;
  v15 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(this, v13, v7);
  v9 = PackageFullNameFromAppId;
  if ( PackageFullNameFromAppId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)PackageFullNameFromAppId);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
    return v9;
  }
  v6 = *(_QWORD *)v13;
LABEL_8:
  *a3 = v6;
  return 0LL;
}
