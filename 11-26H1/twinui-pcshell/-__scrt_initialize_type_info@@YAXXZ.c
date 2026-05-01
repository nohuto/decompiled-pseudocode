/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x1802C93AC
 * Callers:
 *     dllmain_crt_process_attach @ 0x1802C8B68 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
