/*
 * XREFs of CClassicWindowManager::ForEachOwnee__lambda_f9eae87d6f3e756ba3ea7bb51b575bf4___ @ 0x1802EBDE0
 * Callers:
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x1802EC6D0 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     CClassicWindowManager::ForEachWindow__lambda_ee517389c6e8518757eb9a59c851a0bc___ @ 0x1802EBEA8 (CClassicWindowManager--ForEachWindow__lambda_ee517389c6e8518757eb9a59c851a0bc___.c)
 */

char __fastcall CClassicWindowManager::ForEachOwnee__lambda_f9eae87d6f3e756ba3ea7bb51b575bf4___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v4; // bl
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  v6[0] = a1;
  v6[1] = &v7;
  v6[2] = a3;
  v4 = CClassicWindowManager::ForEachWindow__lambda_ee517389c6e8518757eb9a59c851a0bc___(a1, v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a3 + 8));
  return v4;
}
