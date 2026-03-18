/*
 * XREFs of NtSetCachedSigningLevel @ 0x140B0CB40
 * Callers:
 *     DifNtSetCachedSigningLevelWrapper @ 0x14068AB50 (DifNtSetCachedSigningLevelWrapper.c)
 * Callees:
 *     NtSetCachedSigningLevel2 @ 0x140B0CB70 (NtSetCachedSigningLevel2.c)
 */

__int64 __fastcall NtSetCachedSigningLevel(int a1, int a2, int a3, int a4, __int64 a5)
{
  return NtSetCachedSigningLevel2(a1, a2, a3, a4, a5, 0LL);
}
