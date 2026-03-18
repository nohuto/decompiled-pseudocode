/*
 * XREFs of ?OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1400D96A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceConnectionTargetInfoDelete@Log@CoreMessagingK@@SAXPEBUConnectionTargetInfo@2@@Z @ 0x1400D96CC (-TraceConnectionTargetInfoDelete@Log@CoreMessagingK@@SAXPEBUConnectionTargetInfo@2@@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1400D9748 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 */

void __fastcall CoreMessagingK::ConnectionTargetInfo::OnDelete(struct CoreMessagingK::ObjectImpl *a1)
{
  CoreMessagingK::Log::TraceConnectionTargetInfoDelete(a1);
  CoreMessagingK::ClientPortInfo::Release(*((CoreMessagingK::ClientPortInfo **)a1 + 2));
  *((_QWORD *)a1 + 2) = 0LL;
}
