/*
 * XREFs of ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x18050E070
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1801427E0 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801935A0 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeCoverWindow::ScaleFactorChanged(TabletModeCoverWindow *this)
{
  IUnknown **v2; // rax
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v2 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this, &v4);
  LODWORD(this) = IUnknown_QueryService(
                    *v2,
                    &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                    &GUID_ef2ef97b_ee1b_47a0_ad0c_8478ec6c722f,
                    &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  if ( (int)this >= 0 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 24LL))(ppvOut);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
}
