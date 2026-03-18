/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x140004F08
 * Callers:
 *     pre_c_initialization @ 0x140004700 (pre_c_initialization.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
