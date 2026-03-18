/*
 * XREFs of KseRegisterShim @ 0x1407BCFC0
 * Callers:
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x140CCDC54 (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1407BCFE0 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
