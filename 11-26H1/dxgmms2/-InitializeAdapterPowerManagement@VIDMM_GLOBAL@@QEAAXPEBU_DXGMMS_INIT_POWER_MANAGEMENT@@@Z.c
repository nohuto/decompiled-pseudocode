/*
 * XREFs of ?InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x14009F268
 * Callers:
 *     VidMmInitializeAdapterPowerManagement @ 0x14004D620 (VidMmInitializeAdapterPowerManagement.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::InitializeAdapterPowerManagement(
        VIDMM_GLOBAL *this,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  *(_OWORD *)((char *)this + 40008) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 40024) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40040) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 40056) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 40072) = *((_OWORD *)a2 + 4);
}
