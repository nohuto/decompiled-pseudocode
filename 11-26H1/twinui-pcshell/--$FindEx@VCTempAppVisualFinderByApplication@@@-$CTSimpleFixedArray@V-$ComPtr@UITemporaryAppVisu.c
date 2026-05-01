/*
 * XREFs of ??$FindEx@VCTempAppVisualFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByApplication@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18054532C
 * Callers:
 *     ?GetItemForApp@CTempAppVisualArray@@UEAAJPEAUIImmersiveApplication@@AEBU_GUID@@PEAPEAX@Z @ 0x180545B30 (-GetItemForApp@CTempAppVisualArray@@UEAAJPEAUIImmersiveApplication@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Compare@CTempAppVisualFinderByApplication@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x180545898 (-Compare@CTempAppVisualFinderByApplication@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITemporaryAppVisual>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITemporaryAppVisual>>>::FindEx<CTempAppVisualFinderByApplication>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rdi
  int v9; // ebx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  for ( i = 0LL; i < a1[1]; ++i )
  {
    v12 = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v11 = *(_QWORD *)(*a1 + 8 * i);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v9 = CTempAppVisualFinderByApplication::Compare(a2, &v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( !v9 )
    {
      *a4 = i;
      return 0LL;
    }
  }
  return 2147647531LL;
}
