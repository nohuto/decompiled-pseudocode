/*
 * XREFs of ??$?RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_78c825b2fa9af9c0786f7d639af72e8c_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@Z @ 0x18054B9C4
 * Callers:
 *     ??$apply@AEAV_lambda_78c825b2fa9af9c0786f7d639af72e8c_@@AEAV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@@std@@YA?A_TAEAV_lambda_78c825b2fa9af9c0786f7d639af72e8c_@@AEAV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@0@@Z @ 0x18029368C (--$apply@AEAV_lambda_78c825b2fa9af9c0786f7d639af72e8c_@@AEAV-$tuple@PEAUIVirtualDesktop@@PEAUHST.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?Wrap@?$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18054D248 (-Wrap@-$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@.c)
 */

_QWORD *__fastcall _lambda_78c825b2fa9af9c0786f7d639af72e8c_::operator()<IVirtualDesktop * &,HSTRING__ * &>(
        int ***a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  int **v6; // rdx
  int *v9; // rax
  int **v10; // rsi
  __int64 v11; // rbp
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v6 = *a1;
  v14 = 0LL;
  if ( **v6 >= 0 )
  {
    v9 = *v6;
    *v9 = RefCountWrapper<HSTRING__ *,void>::Wrap(*a4, &v14);
    v4 = v14;
  }
  v10 = *a1;
  v11 = *a3;
  v13 = 0LL;
  if ( **v10 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v13, v11);
    **v10 = 0;
  }
  *a2 = v4;
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a2 + 1, &v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  WindowsDeleteString(0LL);
  return a2;
}
