/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x140A8BFD0
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x1407B3648 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwProcessRemove @ 0x1409AD484 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140A8C244 (PiSwCloseDevice.c)
 *     PiSwDeviceFree @ 0x140A8C768 (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1409516F0 (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x140A8C830 (PiSwPnPInfoFree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwQueuedCreateInfoFree(char *P)
{
  void *v2; // rcx
  void *v3; // rcx
  PVOID *v4; // rdx

  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)P = 0LL;
  }
  PiSwPnPInfoFree(P + 8);
  v3 = (void *)*((_QWORD *)P + 7);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *((_QWORD *)P + 7) = 0LL;
  }
  v4 = (PVOID *)*((_QWORD *)P + 9);
  if ( v4 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 20), v4, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
