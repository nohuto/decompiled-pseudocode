/*
 * XREFs of ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400FCBC8
 * Callers:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x140067A18 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400FC594 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1400FC680 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     CoreMsgUninitialize @ 0x1400FC8A0 (CoreMsgUninitialize.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1400FC964 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1400FE5D8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::Runtime::Free(void *a1, ULONG a2)
{
  if ( a1 )
    ExFreePoolWithTag(a1, a2);
}
