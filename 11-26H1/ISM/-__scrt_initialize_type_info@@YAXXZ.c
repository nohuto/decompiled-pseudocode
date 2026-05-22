/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x18009A0C0
 * Callers:
 *     dllmain_crt_process_attach @ 0x180099CB8 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
