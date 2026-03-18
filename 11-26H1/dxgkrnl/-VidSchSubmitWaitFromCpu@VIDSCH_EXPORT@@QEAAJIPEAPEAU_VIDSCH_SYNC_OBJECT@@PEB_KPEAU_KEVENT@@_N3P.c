/*
 * XREFs of ?VidSchSubmitWaitFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KPEAU_KEVENT@@_N3PEAU_VIDSCH_DEVICE@@PEAX@Z @ 0x14003E008
 * Callers:
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x14020B198 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSubmitWaitFromCpu(
        VIDSCH_EXPORT *this,
        unsigned int a2,
        struct _VIDSCH_SYNC_OBJECT **a3,
        const unsigned __int64 *a4,
        struct _KEVENT *a5,
        bool a6,
        bool a7,
        struct _VIDSCH_DEVICE *a8,
        void *a9)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT **, const unsigned __int64 *, struct _KEVENT *, bool, bool, struct _VIDSCH_DEVICE *, void *))(*((_QWORD *)this + 1) + 688LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
