/*
 * XREFs of IoQueryInterface @ 0x1409DC050
 * Callers:
 *     HalpIommuGetDeviceId @ 0x1404F04C0 (HalpIommuGetDeviceId.c)
 *     HalpDmaGetIommuInterface @ 0x14057B358 (HalpDmaGetIommuInterface.c)
 *     ExInitializeDeviceAts @ 0x1406D4260 (ExInitializeDeviceAts.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406D5A4C (ExpShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x1407838A0 (HalpGetCacheCoherency.c)
 * Callees:
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x1409DBF3C (IopQueryInterfaceRecurseUp.c)
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
