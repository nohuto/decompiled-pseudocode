/*
 * XREFs of IoQueryInterface @ 0x140AA8B20
 * Callers:
 *     HalpIommuGetDeviceId @ 0x1404F6EB0 (HalpIommuGetDeviceId.c)
 *     HalpDmaGetIommuInterface @ 0x140578E28 (HalpDmaGetIommuInterface.c)
 *     ExInitializeDeviceAts @ 0x1406D0230 (ExInitializeDeviceAts.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406D1A1C (ExpShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x140780DA0 (HalpGetCacheCoherency.c)
 * Callees:
 *     PnpQueryInterface @ 0x140AA8480 (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140AA8A08 (IopQueryInterfaceRecurseUp.c)
 */

__int64 __fastcall IoQueryInterface(
        _QWORD *a1,
        char a2,
        ULONG_PTR a3,
        USHORT a4,
        USHORT a5,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a6,
        USHORT *a7)
{
  if ( (a2 & 1) != 0 )
    return IopQueryInterfaceRecurseUp((__int64)a1, a3, a4, a5, a6, a7);
  else
    return PnpQueryInterface(a1, a3, a5, a4, a6, a7);
}
