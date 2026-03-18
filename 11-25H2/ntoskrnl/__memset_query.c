/*
 * XREFs of __memset_query @ 0x1406B4F00
 * Callers:
 *     __memset_repmovs @ 0x1406B4E80 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1404FF8C0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
