/*
 * XREFs of ?VidSchEnableLatencyToleranceTimer@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@E@Z @ 0x14004A780
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x140014774 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDSCH_EXPORT::VidSchEnableLatencyToleranceTimer(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        char a3)
{
  struct _VIDSCH_GLOBAL *v3; // r9

  v3 = a2;
  LOBYTE(a2) = a3;
  (*(void (__fastcall **)(struct _VIDSCH_GLOBAL *, struct _VIDSCH_GLOBAL *))(*((_QWORD *)this + 1) + 888LL))(v3, a2);
}
