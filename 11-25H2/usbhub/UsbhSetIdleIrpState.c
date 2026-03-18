/*
 * XREFs of UsbhSetIdleIrpState @ 0x14003705C
 * Callers:
 *     UsbhIdleIrp_NoIrp @ 0x14001634C (UsbhIdleIrp_NoIrp.c)
 *     UsbhCompletePdoIdleIrp @ 0x140018038 (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleIrp_Event @ 0x140033A44 (UsbhIdleIrp_Event.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1400365C8 (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleExIrp_IdleReady @ 0x14005DC64 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x14005DDE8 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_WaitWorker @ 0x14005DEE4 (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
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
