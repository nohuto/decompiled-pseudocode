/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x14000EC2C
 * Callers:
 *     ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@AEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@AEA_K@Z @ 0x14000D5F0 (--$_Allocate_at_least_helper@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCON.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@AEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@AEA_K@Z @ 0x14000D620 (--$_Allocate_at_least_helper@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCON.c)
 *     ??$_Allocate_for_capacity@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAPEAGAEAV?$allocator@G@1@AEA_K@Z @ 0x14000D654 (--$_Allocate_for_capacity@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAPE.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x14000D694 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __noreturn std::_Throw_bad_array_new_length(void)
{
  void **v0; // rdx
  _QWORD v1[3]; // [rsp+30h] [rbp-18h] BYREF

  v1[1] = "bad array new length";
  v0 = &stdext::bad_array_new_length::`vftable';
  v1[0] = &stdext::bad_array_new_length::`vftable';
  if ( std::_Raise_handler )
  {
    std::_Raise_handler((const struct stdext::exception *)v1);
    v0 = (void **)v1[0];
  }
  ((void (__fastcall *)(_QWORD *))v0[2])(v1);
  _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
