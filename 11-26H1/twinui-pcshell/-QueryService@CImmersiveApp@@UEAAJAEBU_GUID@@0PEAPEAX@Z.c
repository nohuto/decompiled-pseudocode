/*
 * XREFs of ?QueryService@CImmersiveApp@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1802FED20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1802FB04C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Ac.c)
 */

__int64 __fastcall CImmersiveApp::QueryService(
        CImmersiveApp *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rax
  unsigned int Service; // ebx
  IUnknown **v9; // rax
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0e0da070_2224_4934_8090_041f7ff223eb.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0e0da070_2224_4934_8090_041f7ff223eb.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0e0da070_2224_4934_8090_041f7ff223eb.Data4;
  if ( v6 )
  {
    v9 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this - 216, &v11);
    Service = IUnknown_QueryService(*v9, a2, a3, a4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>>(
                           *((_QWORD *)this + 33),
                           a3,
                           a4);
  }
  return Service;
}
