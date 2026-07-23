/*
 * XREFs of RawDeleteVcb @ 0x140B0BD54
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1404B6C14 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1404F6FE8 (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 192));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
