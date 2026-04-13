/*
 * XREFs of ?NormalEventNotificationHandler@ContentManagement@@YAJXZ @ 0x180054830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ContentManagement::NormalEventNotificationHandler(ContentManagement *this)
{
  return RtlPublishWnfStateData(WNF_SHEL_CREATIVE_EVENT_TRIGGERED, 0LL, 0LL, 0LL) | 0x10000000;
}
