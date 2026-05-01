/*
 * XREFs of ?TryOpenFileMappingAsStreamForWindowAsync@Util@@YA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@5@@Z @ 0x180651DCC
 * Callers:
 *     ?OpenFileMappingAsStreamForWindowAsync@InProcPropertyStore@Util@@UEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_KAEBUhstring@6@@Z @ 0x18064EDF0 (-OpenFileMappingAsStreamForWindowAsync@InProcPropertyStore@Util@@UEAA-AU-$IAsyncOperation@UIRand.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1806494D0 (--0-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStream@Strea.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x1806517D0 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall Util::TryOpenFileMappingAsStreamForWindowAsync(
        __int64 *a1,
        __int64 a2,
        volatile signed __int32 **a3)
{
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  void *v10; // r8
  __int64 v12; // [rsp+68h] [rbp+10h]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v6 = operator new(0x250uLL);
  v12 = (__int64)(v6 + 14);
  v6[71] = a2;
  v7 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(v12 + 464) = v7;
  *(_QWORD *)v12 = Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1;
  *(_DWORD *)(v12 + 8) = 65538;
  v8 = (_QWORD *)(v12 - 112);
  memset_0((void *)(v12 - 112), 0, 0x70uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,void>(v12 - 112);
  *v8 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type::`vftable';
  v8[13] = 0LL;
  *a1 = v12 - 112 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  v13 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  *(_BYTE *)(v12 + 448) = 0;
  Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1(v12, v9, v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  return a1;
}
