/*
 * XREFs of __memset_query @ 0x14073DA40
 * Callers:
 *     __memset_repmovs @ 0x14073D9C0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14053A2E0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
