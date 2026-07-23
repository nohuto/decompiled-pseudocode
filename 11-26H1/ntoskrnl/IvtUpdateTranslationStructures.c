/*
 * XREFs of IvtUpdateTranslationStructures @ 0x14052B598
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1405A8178 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x140BF6684 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140BF730C (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404F9990 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtUpdateContextEntry @ 0x1404F9A90 (IvtUpdateContextEntry.c)
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
