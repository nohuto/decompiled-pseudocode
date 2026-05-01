/*
 * XREFs of ??$apply@AEAV_lambda_bc9bd5bc43ac19538658bf9fb056aab0_@@AEAV?$tuple@PEAUIVirtualDesktop@@@std@@@std@@YA?A_TAEAV_lambda_bc9bd5bc43ac19538658bf9fb056aab0_@@AEAV?$tuple@PEAUIVirtualDesktop@@@0@@Z @ 0x18054C99C
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV?$tuple@PEAUIVirtualDesktop@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@1@@Z @ 0x18054BADC (--$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV-$tuple@PEAUIVirtualDesktop@@@std@@PEAV-$tuple.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::apply<_lambda_bc9bd5bc43ac19538658bf9fb056aab0_ &,std::tuple<IVirtualDesktop *> &>(
        _QWORD *a1,
        int ***a2,
        __int64 *a3)
{
  int **v3; // rdi
  __int64 v5; // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v5 = *a3;
  v7 = 0LL;
  if ( **v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v7, v5);
    **v3 = 0;
  }
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a1, &v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  return a1;
}
