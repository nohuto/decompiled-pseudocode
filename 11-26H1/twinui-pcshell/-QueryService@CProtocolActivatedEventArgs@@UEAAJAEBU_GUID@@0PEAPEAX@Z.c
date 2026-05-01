/*
 * XREFs of ?QueryService@CProtocolActivatedEventArgs@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18032D480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 */

__int64 __fastcall CProtocolActivatedEventArgs::QueryService(
        CProtocolActivatedEventArgs *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  IUnknown **v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v7 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this + 16, &v9);
  LODWORD(a4) = IUnknown_QueryService(*v7, a2, a3, a4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return (unsigned int)a4;
}
