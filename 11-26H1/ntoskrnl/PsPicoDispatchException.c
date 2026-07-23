/*
 * XREFs of PsPicoDispatchException @ 0x1403D4FE0
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x1406EEFBC (MiDeliverPicoExceptionForProbedPage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsPicoDispatchException(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
