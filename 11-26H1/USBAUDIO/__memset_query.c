/*
 * XREFs of __memset_query @ 0x14001CC80
 * Callers:
 *     __memset_repmovs @ 0x14001CC00 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14001A9B0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
