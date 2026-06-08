/*
 * XREFs of __memset_query @ 0x14000EC00
 * Callers:
 *     __memset_repmovs @ 0x14000EB80 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140003CA0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
