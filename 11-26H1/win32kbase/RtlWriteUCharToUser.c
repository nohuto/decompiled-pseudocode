/*
 * XREFs of RtlWriteUCharToUser @ 0x1402D22D4
 * Callers:
 *     NtDCompositionCommitChannel @ 0x1400A6DC0 (NtDCompositionCommitChannel.c)
 *     NtDCompositionReleaseAllResources @ 0x1400B3890 (NtDCompositionReleaseAllResources.c)
 *     RIMGetDevicePropertiesLockfree @ 0x14016D560 (RIMGetDevicePropertiesLockfree.c)
 *     RtlWriteUCharToUser$thunk$17166446407143655193 @ 0x14024E0A0 (RtlWriteUCharToUser$thunk$17166446407143655193.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteUCharToUser(_BYTE *a1, char a2)
{
  ProbeForRead_0(a1, 1uLL, 1u);
  *a1 = a2;
}
