/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z @ 0x1803FDF60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x180171BA4 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        __int64 a2,
        HSTRING *a3)
{
  __int64 v4; // rax
  HSTRING v5; // rax
  HSTRING v7; // [rsp+20h] [rbp-48h] BYREF
  const unsigned __int16 *v8; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 0LL;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD *, __int64))(*((_QWORD *)this - 3) + 72LL))((char *)this - 24, v9, a2);
  if ( *(_QWORD *)(v4 + 24) > 7uLL )
    v4 = *(_QWORD *)v4;
  v8 = (const unsigned __int16 *)v4;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((Microsoft::WRL::Wrappers::HString *)&v7, &v8);
  std::wstring::_Tidy_deallocate(v9);
  v5 = v7;
  v7 = 0LL;
  *a3 = v5;
  WindowsDeleteString(0LL);
  return 0LL;
}
