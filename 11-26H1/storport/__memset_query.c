/*
 * XREFs of __memset_query @ 0x140138B40
 * Callers:
 *     __memset_repmovs @ 0x140138AC0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x14005D0A0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
