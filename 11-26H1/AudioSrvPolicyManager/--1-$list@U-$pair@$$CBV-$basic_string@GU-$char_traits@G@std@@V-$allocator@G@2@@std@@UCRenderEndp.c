/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAA@XZ @ 0x180045EE8
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$12 @ 0x18004E4C4 (_CDuckingManager--CDuckingManager_--_1_--dtor$12.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003EB94 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 */

void __fastcall std::list<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>::~list<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>(
        __int64 *a1)
{
  std::_List_node<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16>((void *)*a1, (const struct std::nothrow_t *)0x38);
}
