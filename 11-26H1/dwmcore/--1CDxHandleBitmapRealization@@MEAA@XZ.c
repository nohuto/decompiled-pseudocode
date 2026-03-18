/*
 * XREFs of ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800FAFEC
 * Callers:
 *     ??_ECGDIBitmapRealization@@UEAAPEAXI@Z @ 0x1800FAF70 (--_ECGDIBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x1800FAFB0 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ @ 0x1802AB620 (--1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802AE824 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseDisplaySurface@CDxHandleBitmapRealization@@IEAAXXZ @ 0x1800FB0CC (-ReleaseDisplaySurface@CDxHandleBitmapRealization@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDxHandleBitmapRealization::~CDxHandleBitmapRealization(CDxHandleBitmapRealization *this)
{
  bool v1; // zf
  void *v3; // rcx
  __int64 v4; // rcx

  v1 = *((_BYTE *)this + 392) == 0;
  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  *((_QWORD *)this + 11) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *((_QWORD *)this + 41) = &CGDIBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 42) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization's `ISwapChainRealization'};
  *((_QWORD *)this + 43) = &CDxHandleStereoBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  if ( !v1 )
  {
    v3 = (void *)*((_QWORD *)this + 32);
    if ( v3 )
      CloseHandle(v3);
  }
  v4 = *((_QWORD *)this + 47);
  if ( v4 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this + 16);
  CDxHandleBitmapRealization::ReleaseDisplaySurface(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 48);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 47);
  CDeviceResourceT<IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>>::~CDeviceResourceT<IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>>(this);
}
