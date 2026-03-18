/*
 * XREFs of UsbhSetIdleIrpState @ 0x140035280
 * Callers:
 *     UsbhIdleIrp_NoIrp @ 0x14000F28C (UsbhIdleIrp_NoIrp.c)
 *     UsbhCompletePdoIdleIrp @ 0x140010A24 (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1400347F0 (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleExIrp_IdleReady @ 0x14005E288 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x14005E40C (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_WaitWorker @ 0x14005E508 (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

void __fastcall UsbhSetIdleIrpState(__int64 a1, __int64 a2, int a3, int a4, KIRQL NewIrql)
{
  KSPIN_LOCK *v7; // rax
  __int64 v8; // rcx

  v7 = (KSPIN_LOCK *)PdoExt(a2);
  v8 = 4 * (*((unsigned int *)v7 + 447) + 56LL);
  LODWORD(v7[v8]) = a3;
  *((_DWORD *)v7 + 384) = a4;
  LODWORD(v7[v8 + 1]) = a4;
  *((_DWORD *)v7 + 447) = ((unsigned __int8)*((_DWORD *)v7 + 447) + 1) & 7;
  KeReleaseSpinLock(v7 + 256, NewIrql);
}
