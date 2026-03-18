/*
 * XREFs of __memset_query @ 0x1400AD180
 * Callers:
 *     __memset_repmovs @ 0x1400AD100 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1400854C0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
