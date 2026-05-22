/*
 * XREFs of _onexit @ 0x18009A47C
 * Callers:
 *     atexit @ 0x18009A4BC (atexit.c)
 * Callees:
 *     _crt_atexit @ 0x18009AA76 (_crt_atexit.c)
 *     _o__register_onexit_function_0 @ 0x18009AADC (_o__register_onexit_function_0.c)
 */

_onexit_t __cdecl onexit(_onexit_t Func)
{
  int v2; // eax
  int (__cdecl *v3)(); // rdx

  if ( Table._first == (_PVFV *)-1LL )
    v2 = crt_atexit((_PVFV)Func);
  else
    v2 = o__register_onexit_function_0(&Table, Func);
  v3 = 0LL;
  if ( !v2 )
    return Func;
  return v3;
}
