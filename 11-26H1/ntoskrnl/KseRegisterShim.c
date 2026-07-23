/*
 * XREFs of KseRegisterShim @ 0x1407C0020
 * Callers:
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x140CD3DB4 (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1407C0040 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
