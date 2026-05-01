/*
 * XREFs of ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1801F1634
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180025790 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x180286060 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 *     ?EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802F1900 (-EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801935A0 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 */

__int64 __fastcall CClassicWindowManager::_EnsureMonitorManager(CClassicWindowManager *this)
{
  unsigned int Service; // ebx
  __int64 *v2; // rdi
  IUnknown **v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  Service = 0;
  v2 = (__int64 *)((char *)this + 272);
  if ( !*((_QWORD *)this + 34) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
    v5 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this + 32, &v6);
    Service = IUnknown_QueryService(
                *v5,
                (const GUID *const)&SID_IImmersiveMonitorService,
                &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                (void **)v2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  }
  return Service;
}
