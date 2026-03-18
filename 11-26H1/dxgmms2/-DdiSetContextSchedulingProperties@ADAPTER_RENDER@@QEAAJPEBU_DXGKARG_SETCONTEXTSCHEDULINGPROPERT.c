/*
 * XREFs of ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x140042E3C
 * Callers:
 *     VidSchiUpdateDdiHwContextPriorityUnifiedModel @ 0x14009B61C (VidSchiUpdateDdiHwContextPriorityUnifiedModel.c)
 *     VidSchiUpdateDdiHwContextPriorityLegacyModel @ 0x14012381C (VidSchiUpdateDdiHwContextPriorityLegacyModel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetContextSchedulingProperties(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *))DxgCoreInterface[45])(
           this,
           a2);
}
