/*
 * XREFs of ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400DA344
 * Callers:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x14008BA40 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1400D9748 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1400DA0BC (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     ?Uninitialize@BufferCache@CoreMessagingK@@SAXXZ @ 0x1400DA64C (-Uninitialize@BufferCache@CoreMessagingK@@SAXXZ.c)
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1400DA694 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400DA7A4 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     CoreMsgUninitialize @ 0x1400DAAB4 (CoreMsgUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::Runtime::Free(void *a1, ULONG a2)
{
  if ( a1 )
    ExFreePoolWithTag(a1, a2);
}
