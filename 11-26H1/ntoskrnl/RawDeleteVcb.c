/*
 * XREFs of RawDeleteVcb @ 0x140B09F94
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1404BD434 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1404FDAA8 (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 192));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
