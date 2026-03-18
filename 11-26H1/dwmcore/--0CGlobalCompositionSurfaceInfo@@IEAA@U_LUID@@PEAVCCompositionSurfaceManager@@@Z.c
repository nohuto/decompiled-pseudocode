/*
 * XREFs of ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x1800F66D8
 * Callers:
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800F6614 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@PEAV1@@Z @ 0x1800F7D8C (--0CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@PEAV1@@Z.c)
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18012EBFC (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CGlobalCompositionSurfaceInfo *__fastcall CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(
        CGlobalCompositionSurfaceInfo *this,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3)
{
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax
  CGlobalCompositionSurfaceInfo *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((struct _LUID *)this + 5) = a2;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_QWORD *)this + 9) = (char *)this + 88;
  *((_QWORD *)this + 10) = (char *)this + 96;
  *(_QWORD *)this = &CGlobalCompositionSurfaceInfo::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CGlobalCompositionSurfaceInfo::`vftable';
  *((_BYTE *)this + 96) = 0;
  CGlobalCompositionSurfaceInfo::CBindInfo::CBindInfo((CGlobalCompositionSurfaceInfo *)((char *)this + 112), this);
  VtrSurfaceManager = TryGetVtrSurfaceManager();
  if ( VtrSurfaceManager )
    LODWORD(VtrSurfaceManager) = (*(__int64 (__fastcall **)(struct IVtrSurfaceManager *))(*(_QWORD *)VtrSurfaceManager
                                                                                        + 64LL))(VtrSurfaceManager);
  *((_DWORD *)this + 104) = (_DWORD)VtrSurfaceManager;
  result = this;
  *(_QWORD *)((char *)this + 420) = 0LL;
  *((_DWORD *)this + 107) = 0;
  *((_BYTE *)this + 432) = 0;
  return result;
}
