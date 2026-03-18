/*
 * XREFs of PsGetThreadServerSilo @ 0x1402167A0
 * Callers:
 *     EtwTracePageFault @ 0x140215FC0 (EtwTracePageFault.c)
 *     EtwpTraceIo @ 0x1402163D0 (EtwpTraceIo.c)
 *     EtwpTraceIoInit @ 0x140218680 (EtwpTraceIoInit.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     EtwpTraceRedirectedIo @ 0x1406C5EB0 (EtwpTraceRedirectedIo.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A18420 (ObpReferenceCurrentDeviceMap.c)
 *     IopGetThreadActiveConsoleId @ 0x140B272C8 (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 1688);
  if ( v1 == -3 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL);
  if ( v1 && !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(a1 + 1688)) )
  {
    while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v1 + 1304)) )
      ;
  }
  return v1;
}
