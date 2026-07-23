/*
 * XREFs of PsGetThreadServerSilo @ 0x140216AD0
 * Callers:
 *     EtwTracePageFault @ 0x1402162F0 (EtwTracePageFault.c)
 *     EtwpTraceIo @ 0x140216700 (EtwpTraceIo.c)
 *     EtwpTraceIoInit @ 0x1402189B0 (EtwpTraceIoInit.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     EtwpTraceRedirectedIo @ 0x1406C9AF0 (EtwpTraceRedirectedIo.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A21A50 (ObpReferenceCurrentDeviceMap.c)
 *     IopGetThreadActiveConsoleId @ 0x140B29378 (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
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
