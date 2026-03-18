/*
 * XREFs of VidMmWaitForPagingOperationFences @ 0x14004D9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForPagingOperationFences@VIDMM_GLOBAL@@QEAAXIPEB_KIPEAU_KEVENT@@@Z @ 0x1400A385C (-WaitForPagingOperationFences@VIDMM_GLOBAL@@QEAAXIPEB_KIPEAU_KEVENT@@@Z.c)
 */

void __fastcall VidMmWaitForPagingOperationFences(
        VIDMM_GLOBAL *a1,
        unsigned int a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        struct _KEVENT *a5)
{
  VIDMM_GLOBAL::WaitForPagingOperationFences(a1, a2, a3, a4, a5);
}
