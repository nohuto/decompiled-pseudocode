/*
 * XREFs of PsGetSiloContainerId @ 0x140B42360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloContainerId(__int64 a1)
{
  return (a1 + 1472) & -(__int64)(a1 != 0);
}
