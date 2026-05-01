/*
 * XREFs of ??1?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D4698
 * Callers:
 *     _CWRLImpWndProc_TabletModeCoverWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x1806D2EE8 (_CWRLImpWndProc_TabletModeCoverWindow_--s_WndProcBase_--_1_--dtor$0.c)
 *     _CoverWindow_CreateInstance_::_1_::dtor$0 @ 0x1806DFBEA (_CoverWindow_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D4840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGI.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeCoverWindow>::~ComPtr<TabletModeCoverWindow>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::Release(result);
  }
  return result;
}
