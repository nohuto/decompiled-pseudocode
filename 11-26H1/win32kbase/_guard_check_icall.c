/*
 * XREFs of _guard_check_icall @ 0x1401C9300
 * Callers:
 *     qsort @ 0x1401C6DA0 (qsort.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x14024E0E0 (_guard_check_icall$thunk$15021643654165956172.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x14014E340 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  _guard_check_icall_fptr((CIgnoreInputQueue *)Target);
}
