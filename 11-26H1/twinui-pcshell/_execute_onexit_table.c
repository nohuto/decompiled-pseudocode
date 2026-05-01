/*
 * XREFs of _execute_onexit_table @ 0x1802C9D86
 * Callers:
 *     __scrt_dllmain_uninitialize_c @ 0x1802C9024 (__scrt_dllmain_uninitialize_c.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl execute_onexit_table(_onexit_table_t *Table)
{
  return _execute_onexit_table(Table);
}
