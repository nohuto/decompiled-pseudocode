/*
 * XREFs of _execute_onexit_table_0 @ 0x180221552
 * Callers:
 *     __scrt_dllmain_uninitialize_c @ 0x180220410 (__scrt_dllmain_uninitialize_c.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl execute_onexit_table_0(_onexit_table_t *Table)
{
  return _execute_onexit_table(Table);
}
