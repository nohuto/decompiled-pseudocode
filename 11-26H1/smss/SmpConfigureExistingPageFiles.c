/*
 * XREFs of SmpConfigureExistingPageFiles @ 0x1400139F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureExistingPageFiles(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return SmpSaveRegistryValue(a6, a3, 0LL, 1LL, 0LL);
}
