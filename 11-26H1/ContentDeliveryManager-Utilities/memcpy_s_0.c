/*
 * XREFs of memcpy_s_0 @ 0x1800219A8
 * Callers:
 *     ?_Init@?$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180013DD8 (-_Init@-$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180013F84 (-_Init@-$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x18001ACA0 (-do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@.c)
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18001DB8C (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  return memcpy_s(Destination, DestinationSize, Source, SourceSize);
}
