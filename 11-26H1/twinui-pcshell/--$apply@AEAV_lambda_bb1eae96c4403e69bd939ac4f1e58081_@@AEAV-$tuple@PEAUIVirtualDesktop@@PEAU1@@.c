/*
 * XREFs of ??$apply@AEAV_lambda_bb1eae96c4403e69bd939ac4f1e58081_@@AEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@@std@@YA?A_TAEAV_lambda_bb1eae96c4403e69bd939ac4f1e58081_@@AEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@0@@Z @ 0x18054C91C
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@1@@Z @ 0x18054BBFC (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV-$tuple@PEAUIVirtualDesktop@@PEAU1@@std@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??$?RPEAUIVirtualDesktop@@@_lambda_b81b832159b485d6d1346c15f32bb4cd_@@QEBA?A_PPEAUIVirtualDesktop@@@Z @ 0x18054BA7C (--$-RPEAUIVirtualDesktop@@@_lambda_b81b832159b485d6d1346c15f32bb4cd_@@QEBA-A_PPEAUIVirtualDeskto.c)
 */

_QWORD *__fastcall std::apply<_lambda_bb1eae96c4403e69bd939ac4f1e58081_ &,std::tuple<IVirtualDesktop *,IVirtualDesktop *> &>(
        _QWORD *a1,
        int ***a2,
        __int64 *a3)
{
  __int64 *v6; // rbx
  _QWORD *v7; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v6 = _lambda_b81b832159b485d6d1346c15f32bb4cd_::operator()<IVirtualDesktop *>(*a2, &v10, *a3);
  _lambda_b81b832159b485d6d1346c15f32bb4cd_::operator()<IVirtualDesktop *>(*a2, &v9, a3[1]);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a1, v6);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a1 + 1, v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return a1;
}
