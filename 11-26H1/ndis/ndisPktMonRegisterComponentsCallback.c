/*
 * XREFs of ndisPktMonRegisterComponentsCallback @ 0x1400B55D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1400B5114 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1400B52B0 (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1400B5410 (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 */

void ndisPktMonRegisterComponentsCallback()
{
  ndisPktMonRegisterAllMiniports();
  ndisPktMonRegisterAllFilters();
  ndisPktMonRegisterAllOpens();
}
