/*
 * XREFs of ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x14000D5BC
 * Callers:
 *     ??$_Allocate_at_least_helper@V?$allocator@E@std@@@std@@YAPEAEAEAV?$allocator@E@0@AEA_K@Z @ 0x14000D5E0 (--$_Allocate_at_least_helper@V-$allocator@E@std@@@std@@YAPEAEAEAV-$allocator@E@0@AEA_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@AEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@AEA_K@Z @ 0x14000D5F0 (--$_Allocate_at_least_helper@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCON.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@AEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@AEA_K@Z @ 0x14000D620 (--$_Allocate_at_least_helper@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCON.c)
 *     ??$_Allocate_for_capacity@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAPEAGAEAV?$allocator@G@1@AEA_K@Z @ 0x14000D654 (--$_Allocate_for_capacity@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAPE.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::_Allocate<16,std::_Default_allocate_traits>(size_t a1)
{
  if ( !a1 )
    return 0LL;
  if ( a1 >= 0x1000 )
    return (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>();
  return operator new(a1);
}
