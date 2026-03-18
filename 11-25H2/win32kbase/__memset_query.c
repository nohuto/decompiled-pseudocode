/*
 * XREFs of __memset_query @ 0x1402431C0
 * Callers:
 *     __memset_repmovs @ 0x140243140 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1401A3710 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
