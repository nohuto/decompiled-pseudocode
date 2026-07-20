/*
 * XREFs of SmpConfigureDosDevices @ 0x1400137B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureDosDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  return SmpSaveRegistryValue(a6, a1, a3, 1LL, 0LL);
}
