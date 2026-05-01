/*
 * XREFs of ??$?RAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@_lambda_c67266786afa5014962096fb4a54600c_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@Z @ 0x180528BB0
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV?$tuple@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@1@@Z @ 0x180528E68 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV-$tuple@PEAUIVirtu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall _lambda_c67266786afa5014962096fb4a54600c_::operator()<IVirtualDesktop * &,enum VirtualDesktopSwitchType &>(
        int ***a1,
        __int64 a2,
        __int64 *a3,
        int *a4)
{
  int **v4; // rsi
  int v5; // edi
  int *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  v5 = 0;
  v7 = **a1;
  if ( *v7 >= 0 )
  {
    v5 = *a4;
    *v7 = 0;
  }
  v8 = *a3;
  v9 = 0LL;
  v11[0] = 0LL;
  if ( **v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v11, v8);
    **v4 = 0;
    v9 = v11[0];
  }
  *(_DWORD *)a2 = v5;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (__int64 *)(a2 + 8) != v11 )
  {
    v11[0] = 0LL;
    *(_QWORD *)(a2 + 8) = v9;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
  return a2;
}
