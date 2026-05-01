/*
 * XREFs of ??$?RPEAUIVirtualDesktop@@@_lambda_b81b832159b485d6d1346c15f32bb4cd_@@QEBA?A_PPEAUIVirtualDesktop@@@Z @ 0x18054BA7C
 * Callers:
 *     ??$apply@AEAV_lambda_bb1eae96c4403e69bd939ac4f1e58081_@@AEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@@std@@YA?A_TAEAV_lambda_bb1eae96c4403e69bd939ac4f1e58081_@@AEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@0@@Z @ 0x18054C91C (--$apply@AEAV_lambda_bb1eae96c4403e69bd939ac4f1e58081_@@AEAV-$tuple@PEAUIVirtualDesktop@@PEAU1@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 *__fastcall _lambda_b81b832159b485d6d1346c15f32bb4cd_::operator()<IVirtualDesktop *>(
        int **a1,
        __int64 *a2,
        __int64 a3)
{
  *a2 = 0LL;
  if ( **a1 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a2, a3);
    **a1 = 0;
  }
  return a2;
}
