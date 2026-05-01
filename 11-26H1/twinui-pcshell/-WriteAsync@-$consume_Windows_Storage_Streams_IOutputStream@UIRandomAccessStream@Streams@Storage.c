/*
 * XREFs of ?WriteAsync@?$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIBuffer@Streams@Storage@Windows@3@@Z @ 0x1806529D4
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x1806517D0 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Storage_Streams_IOutputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::WriteAsync(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, _QWORD **); // rcx
  int v6; // eax
  _QWORD *v7; // rbx
  int v8; // eax
  int v10; // [rsp+28h] [rbp-18h] BYREF
  __int128 v11; // [rsp+30h] [rbp-10h]
  _QWORD *v12; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v13 = a2;
  v14 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v13 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::Storage::Streams::IOutputStream>, &v13);
    v7 = v13;
    v12 = v13;
  }
  else
  {
    v6 = 0;
    v12 = 0LL;
    v7 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult((int *)&v13, v6, (__int64)&v10);
  v10 = 0;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v7 + 48LL))(v7, *a3, &v14);
  winrt::check_hresult((int *)&v13, v8, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  *a2 = v14;
  return a2;
}
