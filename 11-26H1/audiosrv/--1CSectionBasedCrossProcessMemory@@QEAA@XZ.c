/*
 * XREFs of ??1CSectionBasedCrossProcessMemory@@QEAA@XZ @ 0x180110E00
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL@Microsoft@@UEAA@XZ @ 0x180110D48 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180111300 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WR.c)
 *     ??1?$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAA@XZ @ 0x18015EAF0 (--1-$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAA@XZ.c)
 *     ??1?$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAA@XZ @ 0x18015EB30 (--1-$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAA@XZ.c)
 *     ??1?$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ @ 0x18015EB70 (--1-$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@XUmapview_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1801148DC (-reset@-$unique_ptr@XUmapview_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 */

void __fastcall CSectionBasedCrossProcessMemory::~CSectionBasedCrossProcessMemory(void **this)
{
  wistd::unique_ptr<void,wil::mapview_deleter>::reset(this + 3, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this + 2);
}
