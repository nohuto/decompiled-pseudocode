/*
 * XREFs of ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x140059908
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403704B0 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

struct VIDMM_DEVICE *__fastcall VIDMM_EXPORT::VidMmCreateDevice(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGDEVICE *a3)
{
  return (struct VIDMM_DEVICE *)(*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct DXGDEVICE *))(*((_QWORD *)this + 1) + 368LL))(
                                  a2,
                                  a3);
}
