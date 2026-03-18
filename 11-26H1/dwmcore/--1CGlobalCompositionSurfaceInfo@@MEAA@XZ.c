/*
 * XREFs of ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x18012C11C
 * Callers:
 *     ??_ECGlobalCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x18012C0D0 (--_ECGlobalCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x18012C180 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18012EBFC (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::~CGlobalCompositionSurfaceInfo(CGlobalCompositionSurfaceInfo *this)
{
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax

  *(_QWORD *)this = &CGlobalCompositionSurfaceInfo::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CGlobalCompositionSurfaceInfo::`vftable';
  VtrSurfaceManager = TryGetVtrSurfaceManager();
  if ( VtrSurfaceManager )
    (*(void (__fastcall **)(struct IVtrSurfaceManager *, char *))(*(_QWORD *)VtrSurfaceManager + 16LL))(
      VtrSurfaceManager,
      (char *)this + 40);
  CGlobalCompositionSurfaceInfo::CBindInfo::~CBindInfo((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
}
