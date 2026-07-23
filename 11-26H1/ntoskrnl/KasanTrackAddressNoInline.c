/*
 * XREFs of KasanTrackAddressNoInline @ 0x140534710
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x14024C60C (RtlpHpVsSubsegmentCreate.c)
 *     MiMapContiguousMemory @ 0x140365BB0 (MiMapContiguousMemory.c)
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 *     MiCreateKernelStackSlow @ 0x1403D4610 (MiCreateKernelStackSlow.c)
 *     KcsanMarkAddressIgnored @ 0x1404F1570 (KcsanMarkAddressIgnored.c)
 *     KasanDriverLoadImageInternal @ 0x140525CA0 (KasanDriverLoadImageInternal.c)
 *     MmAllocateIsrStack @ 0x14087C1D0 (MmAllocateIsrStack.c)
 *     KasanInitSystem @ 0x140CCDE10 (KasanInitSystem.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 *     MiInitializeKasan @ 0x140CF9930 (MiInitializeKasan.c)
 * Callees:
 *     MmKasanCommitRegion @ 0x14052CDC4 (MmKasanCommitRegion.c)
 */

__int64 __fastcall KasanTrackAddressNoInline(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  if ( !a2 )
    return 0LL;
  if ( a1 < 0xFFFF800000000000uLL )
    return 3221225711LL;
  if ( a1 + a2 < a1 )
    return 3221225621LL;
  if ( a3 <= (unsigned __int16)KeNumberNodes )
    return MmKasanCommitRegion(
             KasaniShadow + ((a1 + 0x800000000000LL) >> 3),
             KasaniShadow + ((a1 - (((_BYTE)a2 - 1) & 7) + 0x800000000006LL + a2) >> 3),
             a3);
  return 3221225713LL;
}
