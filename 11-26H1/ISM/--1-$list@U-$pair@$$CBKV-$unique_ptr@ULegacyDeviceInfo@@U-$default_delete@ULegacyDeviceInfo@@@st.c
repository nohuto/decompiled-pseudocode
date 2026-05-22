/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800E2090
 * Callers:
 *     _InjectionRawInputProvider::InjectionRawInputProvider_::_1_::dtor$6 @ 0x1801DA113 (_InjectionRawInputProvider--InjectionRawInputProvider_--_1_--dtor$6.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$31 @ 0x1801DA4F0 (_Win32kInterop--Win32kInterop_--_1_--dtor$31.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E1A1C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unique_ptr@ULegacyDeviceInfo@@U-$de.c)
 */

void __fastcall std::list<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>::~list<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned int const,std::unique_ptr<LegacyDeviceInfo>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16>((void *)*a1, (struct std::nothrow_t *)0x20);
}
