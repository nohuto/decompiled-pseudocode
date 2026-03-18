/*
 * XREFs of ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x140028CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x140028CD8 (-DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 */

__int64 __fastcall DxgkEngCheckRemoteSessionRemoteAdapterAccess(struct _LUID a1)
{
  return DrvCheckRemoteSessionRemoteAdapterAccess(a1);
}
