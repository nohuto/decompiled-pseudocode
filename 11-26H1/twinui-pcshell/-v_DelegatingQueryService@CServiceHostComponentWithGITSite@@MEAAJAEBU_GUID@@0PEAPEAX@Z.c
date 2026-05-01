/*
 * XREFs of ?v_DelegatingQueryService@CServiceHostComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180585410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CServiceHostComponentWithGITSite::v_DelegatingQueryService(
        CServiceHostComponentWithGITSite *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*CWRLObjectWithGITSite::SiteUnk((__int64)this - 40, &v11);
  *a4 = 0LL;
  v8 = -2147467263;
  v10 = 0LL;
  if ( v7 && (**v7)(v7, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v10) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v10 + 24LL))(
           v10,
           a2,
           a3,
           a4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return v8;
}
