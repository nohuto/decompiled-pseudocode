/*
 * XREFs of ??R_lambda_ab3e553f5135d66a1c20f494927a541c_@@QEBA@AEBUIFileIOStatics@Storage@Windows@winrt@@@Z @ 0x1802A3DD8
 * Callers:
 *     ??$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@Z @ 0x18031ADF0 (--$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 * Callees:
 *     ?WriteTextAsync@?$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIStorageFile@Storage@Windows@3@AEBUhstring@param@3@AEBW4UnicodeEncoding@Streams@563@@Z @ 0x1802A3E0C (-WriteTextAsync@-$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@.c)
 */

__int64 __fastcall _lambda_ab3e553f5135d66a1c20f494927a541c_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  winrt::impl::consume_Windows_Storage_IFileIOStatics<winrt::Windows::Storage::IFileIOStatics>::WriteTextAsync(
    a3,
    a2,
    *a1,
    a1[1],
    a1[2]);
  return a2;
}
