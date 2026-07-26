/*
 * XREFs of NdisMIdleNotificationComplete @ 0x14006E2B0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIdleNotificationCompleteEx @ 0x14006E2D0 (NdisMIdleNotificationCompleteEx.c)
 */

__int64 __fastcall NdisMIdleNotificationComplete(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return NdisMIdleNotificationCompleteEx(a1, 0);
}
