/*
 * XREFs of __memset_query @ 0x14024BF40
 * Callers:
 *     __memset_repmovs @ 0x14024BEC0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1401C7C00 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
