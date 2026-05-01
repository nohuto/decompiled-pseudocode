/*
 * XREFs of _lambda_3912f03278ab74ecf9c74eeb0a9c8b08_::operator() @ 0x1803A5884
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3912f03278ab74ecf9c74eeb0a9c8b08___::Run @ 0x1803AFCE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3912f03278ab74ecf9c74eeb0a9c8b08___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180196A94 (-RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3912f03278ab74ecf9c74eeb0a9c8b08_::operator()(__int64 a1)
{
  int v2; // eax
  const char *v3; // r9
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)a1, &v9);
  try
  {
    winrt::check_hresult(&v8, v2, (__int64)&v5);
    if ( v9 )
      UndockedSearchAppExperienceManager::RequestSearchAppToHideInternal(*(RTL_SRWLOCK **)(a1 + 8));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xD0E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  }
  return 0LL;
}
