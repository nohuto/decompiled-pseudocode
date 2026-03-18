/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800AB36C
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x1800AB320 (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004A958 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x18004AB04 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800EA480 (--1CRegionShape@@UEAA@XZ.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  volatile signed __int32 *v2; // rcx
  __int64 *v3; // rcx

  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>'};
  *((_QWORD *)this + 13) = &CGdiSpriteBitmap::`vftable'{for `IBitmapResource'};
  *((_QWORD *)this + 14) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 15) = &CGdiSpriteBitmap::`vftable'{for `IVtrGdiSurface'};
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 16);
  if ( v2 )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v2);
  v3 = (__int64 *)*((_QWORD *)this + 57);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
      v3,
      *((__int64 **)this + 58));
    std::_Deallocate<16>(
      *((_QWORD *)this + 57),
      (*((_QWORD *)this + 59) - *((_QWORD *)this + 57)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 56);
  CRegionShape::~CRegionShape((CGdiSpriteBitmap *)((char *)this + 248));
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 22);
  CResource::~CResource(this);
}
