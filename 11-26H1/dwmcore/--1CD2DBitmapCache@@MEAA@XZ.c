/*
 * XREFs of ??1CD2DBitmapCache@@MEAA@XZ @ 0x1800F55C8
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800F5514 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??1CBitmapRealization@@UEAA@XZ @ 0x1800F5844 (--1CBitmapRealization@@UEAA@XZ.c)
 *     ??1CColorKeyBitmapRealization@@UEAA@XZ @ 0x1801A3E7C (--1CColorKeyBitmapRealization@@UEAA@XZ.c)
 *     ??_GCWICBitmapRealization@@UEAAPEAXI@Z @ 0x1801CAE60 (--_GCWICBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x1802AA780 (--_ECD2DBitmapCache@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800F563C (-_Tidy@-$vector@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@C.c)
 *     ??1?$com_ptr_t@VCSecondarySysmemBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F56DC (--1-$com_ptr_t@VCSecondarySysmemBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1801A4414 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 */

void __fastcall CD2DBitmapCache::~CD2DBitmapCache(CD2DBitmapCache *this)
{
  _QWORD *v2; // rdi

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  v2 = (_QWORD *)((char *)this + 48);
  *((_QWORD *)this + 2) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(*v2);
    v2[1] = *v2;
  }
  std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::_Tidy(v2);
  wil::com_ptr_t<CSecondarySysmemBitmap,wil::err_returncode_policy>::~com_ptr_t<CSecondarySysmemBitmap,wil::err_returncode_policy>((char *)this + 40);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
}
