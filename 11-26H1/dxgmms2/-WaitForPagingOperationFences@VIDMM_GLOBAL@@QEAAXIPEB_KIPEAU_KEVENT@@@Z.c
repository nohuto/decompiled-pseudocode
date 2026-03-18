/*
 * XREFs of ?WaitForPagingOperationFences@VIDMM_GLOBAL@@QEAAXIPEB_KIPEAU_KEVENT@@@Z @ 0x1400A385C
 * Callers:
 *     VidMmWaitForPagingOperationFences @ 0x14004D9E0 (VidMmWaitForPagingOperationFences.c)
 * Callees:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForPagingOperationFences(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        struct _KEVENT *Object)
{
  VIDMM_GLOBAL::WaitForFences(this, (struct _VIDSCH_SYNC_OBJECT **)this + a2 + 741, a3, a4, 0LL, Object);
}
