/*
 * XREFs of RmGameModeSrvGetLargestValidResourceRequest @ 0x180084340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmGameModeSrvGetLargestValidResourceRequest(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2)
{
  return RmSrvGameModeGetLargestValidResourceRequest(a1, a2);
}
