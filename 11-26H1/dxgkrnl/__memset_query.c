/*
 * XREFs of __memset_query @ 0x1400A5FC0
 * Callers:
 *     __memset_repmovs @ 0x1400A5F40 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14006E520 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
