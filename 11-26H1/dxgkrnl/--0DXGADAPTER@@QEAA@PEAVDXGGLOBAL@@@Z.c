/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1401968BC
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ??0DXGSPINLOCK@@QEAA@XZ @ 0x14006D48C (--0DXGSPINLOCK@@QEAA@XZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x14018B6B4 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  __int64 v3; // rcx
  EVENT_TYPE v4; // edx
  DXGADAPTER *result; // rax

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_OWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_DWORD *)DeferredContext + 22) = 0;
  *((_DWORD *)DeferredContext + 23) = 45;
  *((_DWORD *)DeferredContext + 24) = -1;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  *((_DWORD *)DeferredContext + 31) = 76;
  *((_DWORD *)DeferredContext + 32) = -1;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 38) = 0;
  *(_QWORD *)(DeferredContext + 156) = 51LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  *((_DWORD *)DeferredContext + 44) = 2;
  *((_DWORD *)DeferredContext + 50) = 0;
  DeferredContext[205] = 0;
  *(_QWORD *)(DeferredContext + 206) = 256LL;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *((_QWORD *)DeferredContext + 29) = 0LL;
  *((_DWORD *)DeferredContext + 60) = -1;
  *((_DWORD *)DeferredContext + 61) = -1;
  *((_QWORD *)DeferredContext + 31) = 0LL;
  *((_QWORD *)DeferredContext + 35) = 0LL;
  *((_DWORD *)DeferredContext + 761) = 1000;
  *((_QWORD *)DeferredContext + 381) = 0LL;
  DeferredContext[3057] = 0;
  *((_WORD *)DeferredContext + 1531) = 0;
  *((_DWORD *)DeferredContext + 768) = 0;
  *(_DWORD *)(DeferredContext + 3079) = 0;
  *(_WORD *)(DeferredContext + 3093) = 256;
  *((_WORD *)DeferredContext + 1549) = 0;
  *((_DWORD *)DeferredContext + 779) = 1;
  *((_DWORD *)DeferredContext + 780) = 1;
  *((_DWORD *)DeferredContext + 781) = 1;
  *((_DWORD *)DeferredContext + 782) = 1;
  *((_QWORD *)DeferredContext + 395) = 0LL;
  *((_QWORD *)DeferredContext + 396) = 0LL;
  *((_QWORD *)DeferredContext + 397) = 0LL;
  *((_DWORD *)DeferredContext + 814) = 0;
  *((_QWORD *)DeferredContext + 408) = 0LL;
  *((_QWORD *)DeferredContext + 409) = 0LL;
  *((_DWORD *)DeferredContext + 852) = 0;
  *((_DWORD *)DeferredContext + 853) = -1;
  *((_DWORD *)DeferredContext + 854) = -1;
  *(_QWORD *)(DeferredContext + 3420) = 0LL;
  *((_QWORD *)DeferredContext + 453) = 0LL;
  *(_DWORD *)(DeferredContext + 3701) = 0;
  *(_WORD *)(DeferredContext + 3705) = 256;
  *((_DWORD *)DeferredContext + 927) = 0;
  DXGSPINLOCK::DXGSPINLOCK((DXGSPINLOCK *)(DeferredContext + 3728));
  *((_QWORD *)DeferredContext + 468) = 0LL;
  *((_DWORD *)DeferredContext + 986) = 0;
  *((_DWORD *)DeferredContext + 1008) = 0;
  *((_QWORD *)DeferredContext + 510) = 0LL;
  DeferredContext[4088] = 0;
  *((_QWORD *)DeferredContext + 544) = 0LL;
  *((_QWORD *)DeferredContext + 545) = 0LL;
  *((_QWORD *)DeferredContext + 546) = 0LL;
  *((_QWORD *)DeferredContext + 547) = 0LL;
  *((_QWORD *)DeferredContext + 548) = 0LL;
  *((_QWORD *)DeferredContext + 549) = 0LL;
  *((_QWORD *)DeferredContext + 550) = 0LL;
  *((_QWORD *)DeferredContext + 551) = 0LL;
  *((_DWORD *)DeferredContext + 1104) = 0;
  *((_DWORD *)DeferredContext + 1105) = 76;
  *((_DWORD *)DeferredContext + 1106) = -1;
  *((_QWORD *)DeferredContext + 555) = 0LL;
  *((_QWORD *)DeferredContext + 556) = 0LL;
  *((_QWORD *)DeferredContext + 559) = 0LL;
  *((_DWORD *)DeferredContext + 1120) = 0;
  DeferredContext[4680] = 0;
  *((_DWORD *)DeferredContext + 1171) = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)(DeferredContext + 4712), 0);
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_BYTE *)(v3 + 80) = 0;
  *(_QWORD *)(DeferredContext + 4876) = 0LL;
  *((_QWORD *)DeferredContext + 606) = 32LL;
  DeferredContext[4856] = 0;
  *((_DWORD *)DeferredContext + 1221) = -1;
  *((_QWORD *)DeferredContext + 614) = 0LL;
  *((_QWORD *)DeferredContext + 615) = 0LL;
  *((_DWORD *)DeferredContext + 1232) = 0;
  *((_DWORD *)DeferredContext + 1233) = 1;
  *((_QWORD *)DeferredContext + 617) = 0LL;
  *((_QWORD *)DeferredContext + 618) = 0LL;
  *((_QWORD *)DeferredContext + 619) = 0LL;
  *((_QWORD *)DeferredContext + 620) = 0LL;
  *((_DWORD *)DeferredContext + 1242) = -1;
  *((_DWORD *)DeferredContext + 1243) = 1;
  *((_QWORD *)DeferredContext + 622) = 0LL;
  *((_QWORD *)DeferredContext + 623) = 0LL;
  *((_DWORD *)DeferredContext + 1248) = 0;
  *((_DWORD *)DeferredContext + 1249) = 1;
  *((_QWORD *)DeferredContext + 627) = 0LL;
  DeferredContext[5072] = 0;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, v4, 1u);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 256), NotificationEvent, 1u);
  memset(DeferredContext + 288, 0, 0x5D8uLL);
  memset(DeferredContext + 1784, 0, 0x160uLL);
  memset(DeferredContext + 2136, 0, 0xB8uLL);
  memset(DeferredContext + 2328, 0, 0x70uLL);
  memset(DeferredContext + 2440, 0, 0x250uLL);
  *(_OWORD *)(DeferredContext + 184) = 0LL;
  memset(DeferredContext + 3192, 0, 0x40uLL);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 3136), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3816));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3880), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 554);
  KeInitializeTimer((PKTIMER)DeferredContext + 71);
  KeInitializeDpc((PRKDPC)DeferredContext + 72, (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 584);
  *((_QWORD *)DeferredContext + 565) = DeferredContext;
  *((_QWORD *)DeferredContext + 564) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 562) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 566);
  *((_QWORD *)DeferredContext + 472) = DeferredContext + 3768;
  *((_QWORD *)DeferredContext + 471) = DeferredContext + 3768;
  *((_QWORD *)DeferredContext + 474) = DeferredContext + 3784;
  *((_QWORD *)DeferredContext + 473) = DeferredContext + 3784;
  *((_QWORD *)DeferredContext + 626) = DeferredContext + 5000;
  *((_QWORD *)DeferredContext + 625) = DeferredContext + 5000;
  *((_QWORD *)DeferredContext + 632) = DxgkDelayedEvictionThread;
  result = (DXGADAPTER *)DeferredContext;
  *((_QWORD *)DeferredContext + 633) = DeferredContext;
  *((_QWORD *)DeferredContext + 630) = 0LL;
  return result;
}
