/*
 * XREFs of __memset_query @ 0x1400EA680
 * Callers:
 *     __memset_repmovs @ 0x1400EA600 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140091110 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
