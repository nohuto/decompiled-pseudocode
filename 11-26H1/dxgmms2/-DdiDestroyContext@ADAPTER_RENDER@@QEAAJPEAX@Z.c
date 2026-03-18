/*
 * XREFs of ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x14004CE0C
 * Callers:
 *     VidSchTerminateHwContext @ 0x140026780 (VidSchTerminateHwContext.c)
 *     VidSchTerminateContext @ 0x140116930 (VidSchTerminateContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyContext(ADAPTER_RENDER *this, void *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *))DxgCoreInterface[27])(this, a2);
}
