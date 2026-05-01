/*
 * XREFs of ??$apply@AEAV_lambda_d8e91d802b8beee2c59da5147a9f683b_@@AEAV?$tuple@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@std@@@std@@YA?A_TAEAV_lambda_d8e91d802b8beee2c59da5147a9f683b_@@AEAV?$tuple@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@0@@Z @ 0x18054CA18
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV?$tuple@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@1@@Z @ 0x18054BC98 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV-$tuple@PEAUIVirtu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall std::apply<_lambda_d8e91d802b8beee2c59da5147a9f683b_ &,std::tuple<IVirtualDesktop *,enum VirtualDesktopSwitchType> &>(
        __int64 a1,
        int ***a2,
        int *a3)
{
  int v4; // edi
  int *v5; // rcx
  int **v6; // rsi
  __int64 v7; // rbp
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v5 = **a2;
  if ( *v5 >= 0 )
  {
    v4 = *a3;
    *v5 = 0;
  }
  v6 = *a2;
  v7 = *((_QWORD *)a3 + 1);
  v9 = 0LL;
  if ( **v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v9, v7);
    **v6 = 0;
  }
  *(_DWORD *)a1 = v4;
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>((_QWORD *)(a1 + 8), &v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  return a1;
}
