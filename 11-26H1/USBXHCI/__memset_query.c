/*
 * XREFs of __memset_query @ 0x140059A00
 * Callers:
 *     __memset_repmovs @ 0x140059980 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14003DC40 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
