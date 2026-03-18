/*
 * XREFs of _o__register_onexit_function_0 @ 0x1400058DC
 * Callers:
 *     _onexit @ 0x140004BD4 (_onexit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o__register_onexit_function_0(_onexit_table_t *Table, _onexit_t Function)
{
  return _register_onexit_function(Table, Function);
}
