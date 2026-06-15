/*
 * XREFs of ??1?$list@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@2@@std@@QEAA@XZ @ 0x1800AE17C
 * Callers:
 *     __dynamic_initializer_for__s_validSettingsForSchema___::_1_::dtor$1 @ 0x18016BDE4 (__dynamic_initializer_for__s_validSettingsForSchema___--_1_--dtor$1.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180088094 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationS.c)
 */

void __fastcall std::list<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>::~list<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>(
        void **a1)
{
  std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x28);
}
