/*
 * XREFs of ?ReadContentsFromFile@Util@@YA?AUIBuffer@Streams@Storage@Windows@winrt@@PEAE@Z @ 0x18064F880
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F3BC (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A6A8 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z @ 0x18064962C (--0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall Util::ReadContentsFromFile(__int64 *a1, int *a2)
{
  __int64 v4; // rbx
  size_t v5; // rsi
  winrt::Windows::Storage::Streams::Buffer *v6; // rax
  __int64 v7; // r8
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  int v9; // eax
  int v10; // eax
  _BYTE v12[8]; // [rsp+28h] [rbp-38h] BYREF
  int v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-18h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+98h] [rbp+38h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  void *v19; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0LL;
  v5 = (unsigned int)*a2;
  v6 = winrt::Windows::Storage::Streams::Buffer::Buffer((winrt::Windows::Storage::Streams::Buffer *)v12, *a2);
  v7 = *(_QWORD *)v6;
  *(_QWORD *)v6 = 0LL;
  *a1 = v7;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
  winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(a1);
  v19 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a1;
  v18 = 0LL;
  if ( v8 )
  {
    v13 = 0;
    v14 = 0LL;
    v9 = (**v8)(v8, &winrt::impl::guid_v<Windows::Storage::Streams::IBufferByteAccess>, &v18);
    winrt::check_hresult(&v17, v9, (__int64)&v13);
    v4 = v18;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 24LL))(v4, &v19);
  winrt::check_hresult(&v17, v10, (__int64)&v15);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
  memcpy_0(v19, a2 + 1, v5);
  return a1;
}
