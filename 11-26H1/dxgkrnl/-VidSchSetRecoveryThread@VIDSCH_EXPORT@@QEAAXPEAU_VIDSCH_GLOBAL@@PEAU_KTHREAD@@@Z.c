/*
 * XREFs of ?VidSchSetRecoveryThread@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_KTHREAD@@@Z @ 0x14006F7B0
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140416A0C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDSCH_EXPORT::VidSchSetRecoveryThread(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct _KTHREAD *a3)
{
  (*(void (__fastcall **)(struct _VIDSCH_GLOBAL *, struct _KTHREAD *))(*((_QWORD *)this + 1) + 616LL))(a2, a3);
}
