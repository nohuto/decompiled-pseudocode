/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140990C90
 * Callers:
 *     PiSwProcessRemove @ 0x14090B360 (PiSwProcessRemove.c)
 *     PiSwCompleteCreate @ 0x14090F730 (PiSwCompleteCreate.c)
 *     PiSwInterfaceFree @ 0x14090FC1C (PiSwInterfaceFree.c)
 *     PiDqActionDataFree @ 0x140990C3C (PiDqActionDataFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140A7AE8C (PiSwQueuedCreateInfoFree.c)
 *     PiSwDeviceFree @ 0x140A7B628 (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
