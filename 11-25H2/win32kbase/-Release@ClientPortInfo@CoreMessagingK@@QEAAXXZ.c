/*
 * XREFs of ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1400FE5D8
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400FC594 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     ?OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1400FD100 (-OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1400FE564 (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1400FE808 (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 * Callees:
 *     ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400FCBC8 (-Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x14019EC04 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall CoreMessagingK::ClientPortInfo::Release(CoreMessagingK::ClientPortInfo *this)
{
  int v1; // eax
  int v2; // eax

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
    CoreMessagingK::Runtime::BugCheck(256LL, 0LL, 0LL);
  v2 = v1 - 1;
  *((_DWORD *)this + 4) = v2;
  if ( !v2 )
    CoreMessagingK::Runtime::Free(this, 0x49434D43u);
}
