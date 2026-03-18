/*
 * XREFs of IvtUpdateTranslationStructures @ 0x140528FA8
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1405A5968 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x140BF0684 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140BF130C (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1405001A0 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtUpdateContextEntry @ 0x1405002A0 (IvtUpdateContextEntry.c)
 */

__int64 __fastcall IvtUpdateTranslationStructures(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  if ( *(_BYTE *)(a1 + 320) )
    return IvtUpdateScalableModeTranslationStructures(a1, a2, a3, a4, 0, a5, a6, a7);
  else
    return IvtUpdateContextEntry(a1, *(unsigned int **)(a2 + 72), a5, a4, a6);
}
