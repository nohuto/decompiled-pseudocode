/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1409516F0
 * Callers:
 *     PiDqActionDataFree @ 0x14095169C (PiDqActionDataFree.c)
 *     PiSwProcessRemove @ 0x1409AD484 (PiSwProcessRemove.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 *     PiSwInterfaceFree @ 0x1409B1D4C (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140A8BFD0 (PiSwQueuedCreateInfoFree.c)
 *     PiSwDeviceFree @ 0x140A8C768 (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevPropertyArray(unsigned int a1, PVOID *a2, ULONG a3)
{
  PVOID *v5; // rbx
  __int64 v6; // rsi
  void *v7; // rcx

  if ( a1 )
  {
    v5 = a2 + 5;
    v6 = a1;
    do
    {
      v7 = *(v5 - 2);
      if ( v7 )
        ExFreePoolWithTag(v7, a3);
      if ( *v5 )
        ExFreePoolWithTag(*v5, a3);
      v5 += 6;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
