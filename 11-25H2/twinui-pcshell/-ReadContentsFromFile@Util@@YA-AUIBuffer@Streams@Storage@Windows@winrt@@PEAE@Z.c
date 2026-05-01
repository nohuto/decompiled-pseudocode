/*
 * XREFs of ?ReadContentsFromFile@Util@@YA?AUIBuffer@Streams@Storage@Windows@winrt@@PEAE@Z @ 0x180629DAC
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x1806298F0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z @ 0x18062398C (--0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall Util::ReadContentsFromFile(__int64 *a1, int *a2)
{
  size_t v4; // rsi
  winrt::Windows::Storage::Streams::Buffer *v5; // rax
  __int64 v6; // r8
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  void *v12; // [rsp+28h] [rbp-38h] BYREF
  int v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-18h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+98h] [rbp+38h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (unsigned int)*a2;
  v5 = winrt::Windows::Storage::Streams::Buffer::Buffer((winrt::Windows::Storage::Streams::Buffer *)&v19, *a2);
  v6 = *(_QWORD *)v5;
  *(_QWORD *)v5 = 0LL;
  *a1 = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(a1);
  v12 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v7 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a1;
  if ( *a1 )
  {
    v18 = 0LL;
    v13 = 0;
    v14 = 0LL;
    v9 = (**v7)(v7, &winrt::impl::guid_v<winrt::impl::IBufferByteAccess>, &v18);
    winrt::check_hresult(&v17, v9, (__int64)&v13);
    v8 = v18;
    v19 = v18;
  }
  else
  {
    v19 = 0LL;
    v8 = 0LL;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 24LL))(v8, &v12);
  winrt::check_hresult(&v17, v10, (__int64)&v15);
  if ( v8 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v19);
  memcpy_0(v12, a2 + 1, v4);
  return a1;
}
