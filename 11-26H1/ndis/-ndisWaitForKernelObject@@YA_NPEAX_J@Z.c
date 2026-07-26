/*
 * XREFs of ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x140168CE0
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140089D40 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1400C80C4 (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

char __fastcall ndisWaitForKernelObject(void *a1, __int64 a2)
{
  NTSTATUS v2; // eax
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = -10000 * a2;
  v2 = KeWaitForSingleObject(a1, Executive, 0, 0, &Timeout);
  if ( !v2 )
    return 1;
  if ( v2 != 258 )
    ndisBugCheckEx(0x24uLL, 1uLL, v2, 0LL);
  return 0;
}
