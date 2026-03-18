/*
 * XREFs of ??1DXGDOORBELL@@IEAA@XZ @ 0x1401E0CE0
 * Callers:
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1404020A8 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003DA90 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14004B344 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     ?VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400577DC (-VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyCoreState@DXGDOORBELL@@IEAAXXZ @ 0x1401E1680 (-DestroyCoreState@DXGDOORBELL@@IEAAXXZ.c)
 */

void __fastcall DXGDOORBELL::~DXGDOORBELL(DXGDOORBELL *this)
{
  VIDMM_EXPORT *v2; // rbx
  void *v3; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v5; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v6; // rax
  void *v7; // rcx
  void *v8; // rcx

  v2 = (VIDMM_EXPORT *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 34);
  if ( *((_QWORD *)this + 18) )
  {
    VIDMM_EXPORT::VidMmUnmapCpuVA(
      v2,
      *(struct VIDMM_DEVICE **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 16LL) + 792LL),
      (DXGDOORBELL *)((char *)this + 72));
    *((_QWORD *)this + 18) = 0LL;
  }
  DXGDOORBELL::DestroyCoreState(this);
  if ( *((_QWORD *)this + 17) )
  {
    VIDMM_EXPORT::VidMmFreeFenceStorageSlot(v2, (DXGDOORBELL *)((char *)this + 72), 0);
    *((_QWORD *)this + 17) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    MmUnsecureVirtualMemory(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *((_QWORD *)this + 4) )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)this + 32,
      (char *)this + 8,
      0x8000LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    MmUnsecureVirtualMemory(v5);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 7) )
  {
    v6 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v6 + 2))(
      -1LL,
      (char *)this + 56,
      (char *)this + 16,
      0x8000LL);
    *((_QWORD *)this + 7) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 19);
  if ( v7 )
    MmFreeContiguousMemory(v7);
  v8 = (void *)*((_QWORD *)this + 20);
  if ( v8 )
    MmFreeContiguousMemory(v8);
}
