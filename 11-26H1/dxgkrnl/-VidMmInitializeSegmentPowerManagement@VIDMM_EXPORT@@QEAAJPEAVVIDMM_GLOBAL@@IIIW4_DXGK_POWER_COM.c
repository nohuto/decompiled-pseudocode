/*
 * XREFs of ?VidMmInitializeSegmentPowerManagement@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x140070EB8
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A9050 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmInitializeSegmentPowerManagement(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        enum _DXGK_POWER_COMPONENT_TYPE a6)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, _QWORD, _QWORD, enum _DXGK_POWER_COMPONENT_TYPE))(*((_QWORD *)this + 1) + 696LL))(
           a2,
           a3,
           a4,
           a5,
           a6);
}
