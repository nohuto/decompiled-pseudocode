/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800F5514
 * Callers:
 *     ??_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1800F5CA0 (--_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z.c)
 *     ??1CDecodeBitmap@@UEAA@XZ @ 0x1801B0F7C (--1CDecodeBitmap@@UEAA@XZ.c)
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x1801BC230 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 *     ??1CStereoRenderTargetBitmap@@UEAA@XZ @ 0x1802B07C4 (--1CStereoRenderTargetBitmap@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F54BC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CRenderTargetBitmap::~CRenderTargetBitmap(CRenderTargetBitmap *this)
{
  void *v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 11) = &CStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  CRenderTargetBitmap::ReleaseDeviceTarget(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 14) - (_QWORD)v2;
    v6 = (void *)*((_QWORD *)this + 12);
    v4 = v3 & 0xFFFFFFFFFFFFFFF8uLL;
    v5 = v4;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = v5;
      v2 = v6;
    }
    operator delete(v2, v4);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
