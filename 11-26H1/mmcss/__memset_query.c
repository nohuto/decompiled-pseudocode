/*
 * XREFs of __memset_query @ 0x140005E00
 * Callers:
 *     __memset_repmovs @ 0x140005D80 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1400044D0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
