/*
 * XREFs of ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1401A08E8
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1404121A4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::ADAPTER_DISPLAY(char *DeferredContext, struct DXGADAPTER *a2)
{
  ADAPTER_DISPLAY *result; // rax

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_OWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 5) = 0LL;
  *((_QWORD *)DeferredContext + 6) = 0LL;
  *((_QWORD *)DeferredContext + 7) = 0LL;
  *((_DWORD *)DeferredContext + 16) = 0;
  *((_DWORD *)DeferredContext + 17) = 5;
  *((_DWORD *)DeferredContext + 18) = 42;
  *((_QWORD *)DeferredContext + 11) = DeferredContext + 80;
  *((_QWORD *)DeferredContext + 10) = DeferredContext + 80;
  *((_DWORD *)DeferredContext + 34) = -1;
  *((_DWORD *)DeferredContext + 35) = -1;
  *((_DWORD *)DeferredContext + 24) = 0;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_QWORD *)DeferredContext + 15) = 0LL;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_DWORD *)DeferredContext + 36) = 3;
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  *((_QWORD *)DeferredContext + 22) = 0LL;
  *((_DWORD *)DeferredContext + 46) = 0;
  *((_DWORD *)DeferredContext + 47) = -1;
  *((_DWORD *)DeferredContext + 48) = 65;
  *((_QWORD *)DeferredContext + 26) = 0LL;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *((_QWORD *)DeferredContext + 28) = 0LL;
  *((_DWORD *)DeferredContext + 58) = 0;
  *((_DWORD *)DeferredContext + 59) = -1;
  *((_DWORD *)DeferredContext + 60) = 1;
  *((_QWORD *)DeferredContext + 31) = 0LL;
  *((_DWORD *)DeferredContext + 72) = 0;
  DeferredContext[292] = 0;
  *((_QWORD *)DeferredContext + 38) = 0LL;
  *((_QWORD *)DeferredContext + 39) = 0LL;
  *((_QWORD *)DeferredContext + 40) = 0LL;
  *((_DWORD *)DeferredContext + 82) = 0;
  *((_DWORD *)DeferredContext + 83) = -1;
  *((_DWORD *)DeferredContext + 84) = 1;
  *((_QWORD *)DeferredContext + 43) = 0LL;
  *((_QWORD *)DeferredContext + 46) = 0LL;
  *((_QWORD *)DeferredContext + 48) = 0LL;
  *((_QWORD *)DeferredContext + 49) = 0LL;
  *((_QWORD *)DeferredContext + 50) = 0LL;
  *((_DWORD *)DeferredContext + 102) = 0;
  *((_DWORD *)DeferredContext + 103) = 16;
  *((_DWORD *)DeferredContext + 104) = 22;
  *((_DWORD *)DeferredContext + 106) = 0;
  *((_QWORD *)DeferredContext + 54) = 0LL;
  *((_DWORD *)DeferredContext + 110) = 0;
  *(_QWORD *)(DeferredContext + 444) = 1LL;
  *(_QWORD *)(DeferredContext + 452) = 0LL;
  *((_DWORD *)DeferredContext + 115) = 0;
  *((_QWORD *)DeferredContext + 58) = 0LL;
  *((_DWORD *)DeferredContext + 118) = 0;
  DeferredContext[476] = 0;
  *((_QWORD *)DeferredContext + 61) = 0LL;
  *((_QWORD *)DeferredContext + 62) = 0LL;
  *((_QWORD *)DeferredContext + 63) = 0LL;
  *((_DWORD *)DeferredContext + 128) = 0;
  *((_DWORD *)DeferredContext + 129) = 75;
  *((_DWORD *)DeferredContext + 130) = 76;
  *((_QWORD *)DeferredContext + 70) = 0LL;
  *((_QWORD *)DeferredContext + 71) = 0LL;
  *((_QWORD *)DeferredContext + 72) = 0LL;
  *((_DWORD *)DeferredContext + 146) = 0;
  *((_DWORD *)DeferredContext + 147) = -1;
  *((_DWORD *)DeferredContext + 148) = 1;
  DeferredContext[600] = 0;
  *((_QWORD *)DeferredContext + 79) = 0LL;
  *((_QWORD *)DeferredContext + 80) = 0LL;
  *((_QWORD *)DeferredContext + 81) = 0LL;
  *((_DWORD *)DeferredContext + 164) = 0;
  *((_DWORD *)DeferredContext + 165) = 76;
  *((_DWORD *)DeferredContext + 166) = 34;
  *((_QWORD *)DeferredContext + 86) = 0LL;
  *((_QWORD *)DeferredContext + 87) = 0LL;
  *((_DWORD *)DeferredContext + 179) = -1;
  *((_QWORD *)DeferredContext + 88) = 0LL;
  *((_DWORD *)DeferredContext + 178) = 0;
  *((_DWORD *)DeferredContext + 180) = 43;
  *((_QWORD *)DeferredContext + 92) = DeferredContext + 728;
  *((_QWORD *)DeferredContext + 91) = DeferredContext + 728;
  *((_QWORD *)DeferredContext + 45) = DeferredContext + 352;
  *((_QWORD *)DeferredContext + 44) = DeferredContext + 352;
  memset(DeferredContext + 880, 0, 0xA0uLL);
  KeInitializeTimerEx((PKTIMER)(DeferredContext + 752), SynchronizationTimer);
  KeInitializeDpc(
    (PRKDPC)(DeferredContext + 816),
    (PKDEFERRED_ROUTINE)ADAPTER_DISPLAY::VSyncTelemetryTimerDpc,
    DeferredContext);
  result = (ADAPTER_DISPLAY *)DeferredContext;
  *(_OWORD *)(DeferredContext + 264) = 0LL;
  return result;
}
