/*
 * XREFs of EtwpIsProcessZombie @ 0x1409BC5E4
 * Callers:
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpProcessEnumCallback @ 0x1409BC0E0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsProcessZombie(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 4) != 0
      && *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 896)
      && *(_QWORD *)(a1 + 48) == a1 + 48;
}
