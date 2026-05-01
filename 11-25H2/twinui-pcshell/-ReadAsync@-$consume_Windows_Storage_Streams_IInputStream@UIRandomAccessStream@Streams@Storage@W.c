/*
 * XREFs of ?ReadAsync@?$consume_Windows_Storage_Streams_IInputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIBuffer@Streams@Storage@Windows@3@IAEBW4InputStreamOptions@5673@@Z @ 0x180629808
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x1806298F0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Storage_Streams_IInputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::ReadAsync(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+48h] [rbp-18h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF
  _QWORD *v18; // [rsp+88h] [rbp+28h] BYREF

  v18 = a2;
  v14 = 0LL;
  v8 = *a1;
  if ( v8 )
  {
    v17 = 0LL;
    v9 = (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::Storage::Streams::IInputStream>, &v17);
    v10 = v17;
    v13 = v17;
  }
  else
  {
    v9 = 0;
    v13 = 0LL;
    v10 = 0LL;
  }
  v15 = 0;
  v16 = 0LL;
  winrt::check_hresult((int *)&v18, v9, (__int64)&v15);
  v15 = 0;
  v16 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v10 + 48LL))(
          v10,
          *a3,
          a4,
          *a5,
          &v14);
  winrt::check_hresult((int *)&v18, v11, (__int64)&v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  *a2 = v14;
  return a2;
}
