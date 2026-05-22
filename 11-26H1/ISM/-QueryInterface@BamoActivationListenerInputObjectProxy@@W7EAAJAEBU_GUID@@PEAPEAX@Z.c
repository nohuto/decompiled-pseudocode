/*
 * XREFs of ?QueryInterface@BamoActivationListenerInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801240E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoActivationListenerInputObjectProxy::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return BamoActivationListenerInputObjectProxy::QueryInterface(
           (BamoActivationListenerInputObjectProxy *)(a1 - 8),
           a2,
           a3);
}
