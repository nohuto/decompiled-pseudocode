/*
 * XREFs of ??$?RAEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_a006b721ef4bba1f2f12c3b2e0659f90_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAI1@Z @ 0x18054B8FC
 * Callers:
 *     ??$apply@AEAV_lambda_a006b721ef4bba1f2f12c3b2e0659f90_@@AEAV?$tuple@PEAUIVirtualDesktop@@II@std@@@std@@YA?A_TAEAV_lambda_a006b721ef4bba1f2f12c3b2e0659f90_@@AEAV?$tuple@PEAUIVirtualDesktop@@II@0@@Z @ 0x18054C8E4 (--$apply@AEAV_lambda_a006b721ef4bba1f2f12c3b2e0659f90_@@AEAV-$tuple@PEAUIVirtualDesktop@@II@std@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall _lambda_a006b721ef4bba1f2f12c3b2e0659f90_::operator()<IVirtualDesktop * &,unsigned int &,unsigned int &>(
        int ***a1,
        __int64 a2,
        __int64 *a3,
        int *a4,
        int *a5)
{
  int v6; // ebp
  int *v8; // rcx
  int v9; // edi
  int *v10; // rcx
  int **v11; // rsi
  __int64 v12; // r14

  v6 = 0;
  v8 = **a1;
  if ( *v8 >= 0 )
  {
    v6 = *a5;
    *v8 = 0;
  }
  v9 = 0;
  v10 = **a1;
  if ( *v10 >= 0 )
  {
    v9 = *a4;
    *v10 = 0;
  }
  v11 = *a1;
  v12 = *a3;
  a5 = 0LL;
  if ( **v11 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&a5, v12);
    **v11 = 0;
  }
  *(_DWORD *)a2 = v6;
  *(_DWORD *)(a2 + 4) = v9;
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>((_QWORD *)(a2 + 8), &a5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  return a2;
}
