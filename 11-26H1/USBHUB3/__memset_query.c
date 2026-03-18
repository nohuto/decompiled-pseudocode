/*
 * XREFs of __memset_query @ 0x140046D80
 * Callers:
 *     __memset_repmovs @ 0x140046D00 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1400015B0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
