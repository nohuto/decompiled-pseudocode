/*
 * XREFs of ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x18003EC8C
 * Callers:
 *     ?Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800FE870 (-Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FEF40 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUS.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@6@Z @ 0x1800FF7F4 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDesc.c)
 * Callees:
 *     ?allocate@?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@_K@Z @ 0x18003F6D4 (-allocate@-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@QEAAPEAU-$_Tree_node@U-$.c)
 */

// Hidden C++ exception states: #wind=1
CResourcePriorityTracker *__fastcall CResourcePriorityTracker::CResourcePriorityTracker(
        CResourcePriorityTracker *this,
        int a2)
{
  __int64 v4; // rax

  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v4 = std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>::allocate();
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 5) = v4;
  *((_DWORD *)this + 14) = a2;
  return this;
}
