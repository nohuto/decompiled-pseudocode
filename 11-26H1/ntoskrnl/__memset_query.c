/*
 * XREFs of __memset_query @ 0x140742640
 * Callers:
 *     __memset_repmovs @ 0x1407425C0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14053C760 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
