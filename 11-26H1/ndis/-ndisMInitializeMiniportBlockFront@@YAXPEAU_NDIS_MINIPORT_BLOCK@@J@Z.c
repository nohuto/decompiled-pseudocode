/*
 * XREFs of ?ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140181AB0
 * Callers:
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14007FA50 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401736D0 (-ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisInitializeULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z @ 0x140074410 (-ndisInitializeULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisMInitializeMiniportBlockFront(char *DeferredContext, int a2)
{
  __int64 v3; // rcx
  char v4; // al
  char v5; // al
  __int64 v6; // rax

  v3 = *((_QWORD *)DeferredContext + 470);
  *(_WORD *)DeferredContext = 273;
  *((_WORD *)DeferredContext + 1) = a2;
  *((_QWORD *)DeferredContext + 22) = DeferredContext;
  *((_DWORD *)DeferredContext + 562) = 1;
  *((_DWORD *)DeferredContext + 380) = 0;
  *((_QWORD *)DeferredContext + 68) = &ndisGlobalTriageBlock;
  v4 = *(_BYTE *)(v3 + 24);
  if ( (unsigned __int8)v4 >= 6u )
  {
    DeferredContext[3148] = v4;
    v5 = *(_BYTE *)(v3 + 25);
  }
  else
  {
    DeferredContext[3148] = 6;
    v5 = 0;
  }
  DeferredContext[3149] = v5;
  DeferredContext[32] = *(_BYTE *)(v3 + 24);
  DeferredContext[33] = *(_BYTE *)(v3 + 25);
  *((_DWORD *)DeferredContext + 142) = 0;
  DeferredContext[88] = 0;
  v6 = a2 - 8LL * ndisMaxNumberOfProcessors;
  *((_QWORD *)DeferredContext + 200) = &DeferredContext[v6];
  memset(&DeferredContext[v6], 0, 8LL * ndisMaxNumberOfProcessors);
  _InterlockedOr((volatile signed __int32 *)DeferredContext + 30, 0x400000u);
  *((_QWORD *)DeferredContext + 275) = DeferredContext + 2192;
  *((_QWORD *)DeferredContext + 274) = DeferredContext + 2192;
  *((_QWORD *)DeferredContext + 341) = DeferredContext + 2720;
  *((_QWORD *)DeferredContext + 340) = DeferredContext + 2720;
  *((_QWORD *)DeferredContext + 434) = DeferredContext + 3464;
  *((_QWORD *)DeferredContext + 433) = DeferredContext + 3464;
  *((_QWORD *)DeferredContext + 438) = DeferredContext + 3496;
  *((_QWORD *)DeferredContext + 437) = DeferredContext + 3496;
  *((_QWORD *)DeferredContext + 449) = DeferredContext + 3584;
  *((_QWORD *)DeferredContext + 448) = DeferredContext + 3584;
  *((_QWORD *)DeferredContext + 170) = DeferredContext + 1352;
  *((_QWORD *)DeferredContext + 169) = DeferredContext + 1352;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 397);
  *((_QWORD *)DeferredContext + 410) = DeferredContext;
  *((_QWORD *)DeferredContext + 409) = ndisPeriodicReceivesWorker;
  *((_QWORD *)DeferredContext + 407) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 12);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 250);
  *((_QWORD *)DeferredContext + 17) = DeferredContext + 128;
  *((_QWORD *)DeferredContext + 16) = DeferredContext + 128;
  if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 470) + 26LL) & 2) != 0 )
    KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 235);
  KeInitializeDpc((PRKDPC)(DeferredContext + 1528), (PKDEFERRED_ROUTINE)ndisMDeferredDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 245) = DeferredContext;
  *((_QWORD *)DeferredContext + 244) = ndisQueuedCheckForHang;
  *((_QWORD *)DeferredContext + 242) = 0LL;
  ndisInitializeULongRef((struct _ULONG_REFERENCE *)DeferredContext + 277);
  *((_DWORD *)DeferredContext + 1110) = 0;
  *((_QWORD *)DeferredContext + 205) = 0LL;
  *((_QWORD *)DeferredContext + 206) = 0LL;
  *((_QWORD *)DeferredContext + 204) = *((_QWORD *)DeferredContext + 110);
  *((_QWORD *)DeferredContext + 110) = DeferredContext + 1632;
  *((_QWORD *)DeferredContext + 208) = 0LL;
  *((_QWORD *)DeferredContext + 209) = 0LL;
  *((_QWORD *)DeferredContext + 207) = *((_QWORD *)DeferredContext + 111);
  *((_QWORD *)DeferredContext + 111) = DeferredContext + 1656;
  *((_QWORD *)DeferredContext + 211) = 0LL;
  *((_QWORD *)DeferredContext + 212) = 0LL;
  *((_QWORD *)DeferredContext + 210) = *((_QWORD *)DeferredContext + 112);
  *((_QWORD *)DeferredContext + 112) = DeferredContext + 1680;
  *((_QWORD *)DeferredContext + 214) = 0LL;
  *((_QWORD *)DeferredContext + 215) = 0LL;
  *((_QWORD *)DeferredContext + 213) = *((_QWORD *)DeferredContext + 113);
  *((_QWORD *)DeferredContext + 113) = DeferredContext + 1704;
  *((_QWORD *)DeferredContext + 217) = 0LL;
  *((_QWORD *)DeferredContext + 218) = 0LL;
  *((_QWORD *)DeferredContext + 216) = *((_QWORD *)DeferredContext + 114);
  *((_QWORD *)DeferredContext + 114) = DeferredContext + 1728;
  *((_QWORD *)DeferredContext + 220) = 0LL;
  *((_QWORD *)DeferredContext + 221) = 0LL;
  *((_QWORD *)DeferredContext + 219) = *((_QWORD *)DeferredContext + 115);
  *((_QWORD *)DeferredContext + 115) = DeferredContext + 1752;
  *((_DWORD *)DeferredContext + 502) = 6;
}
