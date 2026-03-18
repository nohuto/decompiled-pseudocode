/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x140216A20
 * Callers:
 *     EtwpTraceIoInit @ 0x140218680 (EtwpTraceIoInit.c)
 *     EtwTraceReadyQueueInsertion @ 0x14022476C (EtwTraceReadyQueueInsertion.c)
 *     EtwTraceScheduleThread @ 0x1402467D0 (EtwTraceScheduleThread.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402703AC (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x1404B1374 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1404B141C (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1404B14C4 (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1404B15B0 (EtwTraceAutoBoostClearFloor.c)
 *     PerfInfoLogSysCallExit @ 0x1404C9BD0 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x1404CBC20 (PerfInfoLogSysCallEntry.c)
 *     EtwpProfileInterrupt @ 0x1406C5710 (EtwpProfileInterrupt.c)
 *     EtwpTraceRedirectedIo @ 0x1406C5EB0 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogVirtualFree @ 0x140961510 (PerfInfoLogVirtualFree.c)
 *     EtwpWriteProcessEvent @ 0x14096E304 (EtwpWriteProcessEvent.c)
 *     EtwTraceThread @ 0x140A045B0 (EtwTraceThread.c)
 *     PerfLogImageLoad @ 0x140A79674 (PerfLogImageLoad.c)
 *     PerfInfoLogVirtualAlloc @ 0x140ABCEC0 (PerfInfoLogVirtualAlloc.c)
 *     EtwpLogProcessPerfCtrs @ 0x140B3B318 (EtwpLogProcessPerfCtrs.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     EtwpLogKernelEvent @ 0x14032CDC0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwTraceSiloKernelEvent(__int64 a1, int a2, int a3, unsigned int a4, __int16 a5, int a6)
{
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

  v9 = a4;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = 32LL * (unsigned int)v12 + EtwpHostSiloState + 4556;
    if ( v13 && ((unsigned int)v9 & *(_DWORD *)(v13 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
      EtwpLogKernelEvent(a2, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4504), a3, a5, a6);
  }
  if ( a1 )
  {
    v14 = *(_QWORD *)(PsGetServerSiloGlobals(a1) + 832);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v16, v15); !i; i = !_BitScanForward((unsigned int *)&v16, v15) )
      {
        v17 = (unsigned int)v16;
        v15 &= v15 - 1;
        v18 = v14 + 32 * v16 + 4556;
        if ( v18 )
        {
          if ( ((unsigned int)v9 & *(_DWORD *)(v18 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
            EtwpLogKernelEvent(a2, v14, *(unsigned __int8 *)(v14 + 2 * v17 + 4504), a3, a5, a6);
        }
      }
    }
  }
}
