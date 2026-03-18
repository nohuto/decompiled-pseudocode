/*
 * XREFs of ZwFilterBootOption @ 0x14069CEC0
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x14059108C (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
