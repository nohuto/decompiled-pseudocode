/*
 * XREFs of ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x14004CF30
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x14004CF48 (-DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 */

__int64 __fastcall DxgkEngCheckRemoteSessionRemoteAdapterAccess(struct _LUID a1)
{
  return DrvCheckRemoteSessionRemoteAdapterAccess(a1);
}
