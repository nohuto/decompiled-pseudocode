/*
 * XREFs of MiArbitraryCodeBlocked @ 0x140ABC228
 * Callers:
 *     MiAllowProtectionChange @ 0x140306C24 (MiAllowProtectionChange.c)
 *     MiReserveUserMemoryPrepare @ 0x14095B7EC (MiReserveUserMemoryPrepare.c)
 *     MiMapViewOfSection @ 0x1409C31E8 (MiMapViewOfSection.c)
 *     MiInitializeImageMapParameters @ 0x1409CD514 (MiInitializeImageMapParameters.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x140485B74 (EtwTraceMemoryAcg.c)
 *     EtwTimLogProhibitDynamicCode @ 0x140ABC2A4 (EtwTimLogProhibitDynamicCode.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  int v2; // ecx
  int v3; // edx

  v2 = *(_DWORD *)(a1 + 1872);
  v3 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000;
  if ( (v2 & 0x100) == 0 || v3 )
  {
    if ( (v2 & 0x800) != 0 && !v3 )
      EtwTimLogProhibitDynamicCode(1LL, a1);
    EtwTraceMemoryAcg(0);
    return 0LL;
  }
  else
  {
    EtwTraceMemoryAcg(0x80000000);
    EtwTimLogProhibitDynamicCode(2LL, a1);
    return 3221227012LL;
  }
}
