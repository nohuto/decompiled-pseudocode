/*
 * XREFs of ?IsLegacyApp@@YA_NPEBG@Z @ 0x18012F3DC
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18006C8A0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801302C4 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall IsLegacyApp(CallerIdentity *a1, __int64 a2, unsigned __int16 **a3)
{
  int PackageFullNameFromAppId; // eax
  CallerIdentity *v5; // rdx
  void *v6; // rbx
  int IsEnabledForPackage; // eax
  bool v8; // di
  LPVOID pv[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+58h] [rbp+10h] BYREF

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a1, (const unsigned __int16 *)pv, a3);
  if ( PackageFullNameFromAppId < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD2,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)PackageFullNameFromAppId);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return 0;
  }
  v12 = 0;
  v5 = a1;
  v6 = pv[0];
  IsEnabledForPackage = QuirkIsEnabledForPackage(pv[0], v5, 1114112LL, &v12);
  if ( IsEnabledForPackage < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDD,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)IsEnabledForPackage);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)pv);
    return 0;
  }
  v8 = v12 != 0;
  if ( v6 )
    CoTaskMemFree(v6);
  return v8;
}
