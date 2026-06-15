/*
 * XREFs of ??1_Reallocation_guard@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800E051C
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@AEBV21@@Z @ 0x1800DF938 (--$_Emplace_reallocate@AEBV-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$alloc.c)
 *     _std::vector_std::function_void___cdecl(void)__std::allocator_std::function_void___cdecl(void)_____::_Emplace_reallocate_std::function_void___cdecl(void)__const_&__::_1_::dtor$0 @ 0x180168912 (_std--vector_std--function_void___cdecl(void)__std--allocator_std--function_void___cdecl(void)__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV?$function@$$A6AXXZ@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x1800DF8C8 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV-$function@$$A6AXXZ@.c)
 */

void __fastcall std::vector<std::function<void (void)>>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<std::function<void (void)>>>(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(*(_QWORD *)(a1 + 16) << 6));
  }
}
