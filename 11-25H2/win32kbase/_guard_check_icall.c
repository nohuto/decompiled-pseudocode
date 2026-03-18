/*
 * XREFs of _guard_check_icall @ 0x1401A4E1C
 * Callers:
 *     qsort @ 0x1401A28E0 (qsort.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x140246050 (_guard_check_icall$thunk$15021643654165956172.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x14011DDE0 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  _guard_check_icall_fptr((CIgnoreInputQueue *)Target);
}
