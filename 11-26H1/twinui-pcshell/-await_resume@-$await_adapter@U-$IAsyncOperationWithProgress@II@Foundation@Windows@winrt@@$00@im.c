/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1806533B4
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x1806517D0 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,1>::await_resume(
        __int64 a1)
{
  int v1; // edx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  v8 = 0LL;
  winrt::check_hresult((int *)&v9, v1, (__int64)&v7);
  winrt::impl::check_status_canceled((winrt::impl *)*(unsigned int *)(a1 + 16), v3);
  v4 = *(_QWORD **)(a1 + 8);
  v9 = 0;
  v7 = 0;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v4 + 80LL))(*v4, &v9);
  winrt::check_hresult(&v10, v5, (__int64)&v7);
  return v9;
}
