/*
 * XREFs of ?DdiNotifyContextPriorityChange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_NOTIFYCONTEXTPRIORITYCHANGE@@@Z @ 0x140049304
 * Callers:
 *     VidSchiNotifyContextPriorityChange @ 0x14011B854 (VidSchiNotifyContextPriorityChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiNotifyContextPriorityChange(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_NOTIFYCONTEXTPRIORITYCHANGE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_NOTIFYCONTEXTPRIORITYCHANGE *))DxgCoreInterface[105])(
           this,
           a2);
}
