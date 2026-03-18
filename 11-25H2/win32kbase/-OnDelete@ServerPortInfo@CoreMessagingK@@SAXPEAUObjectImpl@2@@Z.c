/*
 * XREFs of ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1400FC570
 * Callers:
 *     <none>
 * Callees:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400FC594 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     ?TraceServerPortInfoDelete@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@@Z @ 0x1401A1AA8 (-TraceServerPortInfoDelete@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@@Z.c)
 */

void __fastcall CoreMessagingK::ServerPortInfo::OnDelete(struct CoreMessagingK::ObjectImpl *a1)
{
  CoreMessagingK::Log::TraceServerPortInfoDelete(a1);
  CoreMessagingK::ServerPorts::UninitializeServerPort(a1);
}
