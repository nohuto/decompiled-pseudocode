/*
 * XREFs of ?RmActivityHostReleaseFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D444
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000CEE0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018D80 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmActivityHostReleaseFromHam(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  RmpObjectRelease((char *)(((unsigned __int64)a1 - 56) & -(__int64)(a1 != 0LL)));
}
