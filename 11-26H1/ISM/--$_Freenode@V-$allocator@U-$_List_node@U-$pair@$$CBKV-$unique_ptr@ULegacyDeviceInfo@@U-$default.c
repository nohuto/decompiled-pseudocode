/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A334
 * Callers:
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180053950 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E1A1C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unique_ptr@ULegacyDeviceInfo@@U-$de.c)
 *     ?OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E28B8 (-OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x18008A840 (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(a2 + 24);
  return std::_Deallocate<16>(a2, 32LL);
}
