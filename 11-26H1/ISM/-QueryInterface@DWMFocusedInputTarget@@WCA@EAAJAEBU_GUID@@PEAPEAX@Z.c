/*
 * XREFs of ?QueryInterface@DWMFocusedInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A4B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        DWMFocusedInputTarget **a3)
{
  return DWMFocusedInputTarget::QueryInterface((DWMFocusedInputTarget *)(a1 - 32), a2, a3);
}
