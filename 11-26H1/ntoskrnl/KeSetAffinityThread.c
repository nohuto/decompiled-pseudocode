/*
 * XREFs of KeSetAffinityThread @ 0x1405EC030
 * Callers:
 *     <none>
 * Callees:
 *     KiSetLegacyAffinityThread @ 0x14025A52C (KiSetLegacyAffinityThread.c)
 */

__int64 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  return KiSetLegacyAffinityThread(a1, a2);
}
