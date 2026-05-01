/*
 * XREFs of ?WriteTextAsync@?$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIStorageFile@Storage@Windows@3@AEBUhstring@param@3@AEBW4UnicodeEncoding@Streams@563@@Z @ 0x18029D938
 * Callers:
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x180139BB0 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 *     ??R_lambda_ab3e553f5135d66a1c20f494927a541c_@@QEBA@AEBUIFileIOStatics@Storage@Windows@winrt@@@Z @ 0x18029D904 (--R_lambda_ab3e553f5135d66a1c20f494927a541c_@@QEBA@AEBUIFileIOStatics@Storage@Windows@winrt@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Storage_IFileIOStatics<winrt::Windows::Storage::IFileIOStatics>::WriteTextAsync(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        unsigned int *a5)
{
  __int64 v5; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64 *); // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v14; // [rsp+38h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v5 = *a1;
  v16 = 0LL;
  v14 = 0;
  v8 = *a4;
  v9 = *a5;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v5 + 72LL);
  v11 = *a3;
  v15 = 0LL;
  v12 = v10(v5, v11, v8, v9, &v16);
  winrt::check_hresult(&v17, v12, &v14);
  *a2 = v16;
  return a2;
}
