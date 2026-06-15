/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1800432A4
 * Callers:
 *     _CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper_::_1_::dtor$4 @ 0x18004D8B1 (_CStreamClassPolicyGainsWrapper--CStreamClassPolicyGainsWrapper_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800422D8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_t_ea_1800422D8.c)
 */

void __fastcall std::list<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>::~list<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16>((void *)*a1, (const struct std::nothrow_t *)0x38);
}
