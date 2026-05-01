/*
 * XREFs of ?GetItemForApp@CTempAppVisualArray@@UEAAJPEAUIImmersiveApplication@@AEBU_GUID@@PEAPEAX@Z @ 0x180545B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCTempAppVisualFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByApplication@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18054532C (--$FindEx@VCTempAppVisualFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UITemporaryAppVisu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTempAppVisualArray::GetItemForApp(
        CTempAppVisualArray *this,
        struct IImmersiveApplication *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, const struct _GUID *, void **); // rcx
  struct IImmersiveApplication *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITemporaryAppVisual>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITemporaryAppVisual>>>::FindEx<CTempAppVisualFinderByApplication>(
         (_QWORD *)this + 2,
         (__int64)&v10,
         &v11,
         &v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  if ( v7 >= 0 )
  {
    v8 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 8 * v12);
    return (unsigned int)(**v8)(v8, a3, a4);
  }
  return (unsigned int)v7;
}
