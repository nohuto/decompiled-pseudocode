/*
 * XREFs of NdisConvertNdisStatusToNtStatus @ 0x14005A5E0
 * Callers:
 *     NdisWdfRegisterMiniportDriver @ 0x140096BB0 (NdisWdfRegisterMiniportDriver.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x140147A38 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016BFA0 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x14019118C (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1401913F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNdisStatusToNtStatus(int a1)
{
  __int64 result; // rax

  if ( a1 < 0 )
  {
    result = 3221225507LL;
    if ( a1 != -1073676266 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 && a1 != 259 && a1 != 1076035585 )
      return (unsigned int)-1073741823;
    return (unsigned int)a1;
  }
  return result;
}
