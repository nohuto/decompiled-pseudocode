/*
 * XREFs of ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x18026AD80
 * Callers:
 *     ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x18026AEC0 (--_GCCompositionMipmapSurface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18022F4CC (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMipLevelSurface@CCompositionMipmapSurface@@QEAU12@AEAV?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@0@@Z @ 0x18026AB90 (--$_Destroy_range@V-$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@YAXPEAUMi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionMipmapSurface::~CCompositionMipmapSurface(CCompositionMipmapSurface *this)
{
  __int64 *v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rcx

  *(_QWORD *)this = &CCompositionMipmapSurface::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 10) = &CCompositionMipmapSurface::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CCompositionMipmapSurface::`vftable'{for `ISceneNotificationListener'};
  v2 = (__int64 *)*((_QWORD *)this + 13);
  v3 = (__int64 *)*((_QWORD *)this + 12);
  if ( v3 != v2 )
  {
    std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(v3, v2);
    *((_QWORD *)this + 13) = *((_QWORD *)this + 12);
  }
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this + 80);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 21);
  }
  CSceneResourceManager::UnregisterSceneListener(
    *(const __m128i ***)(*((_QWORD *)this + 3) + 672LL),
    (CCompositionMipmapSurface *)((char *)this + 88));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  v5 = (__int64 *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(v5, *((__int64 **)this + 13));
    std::_Deallocate<16>(
      *((void **)this + 12),
      (*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  CResource::~CResource(this);
}
