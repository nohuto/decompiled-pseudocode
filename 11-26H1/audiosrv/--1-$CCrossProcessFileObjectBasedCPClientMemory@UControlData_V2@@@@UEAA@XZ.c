/*
 * XREFs of ??1?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ @ 0x18015EAB0
 * Callers:
 *     ??_G?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAAPEAXI@Z @ 0x18015EBB0 (--_G-$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1801622B4 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 */

BOOL __fastcall CCrossProcessFileObjectBasedCPClientMemory<ControlData_V2>::~CCrossProcessFileObjectBasedCPClientMemory<ControlData_V2>(
        __int64 a1)
{
  void *v2; // rcx

  *(_QWORD *)a1 = &CCrossProcessFileObjectBasedCPClientMemory<ControlData_V2>::`vftable';
  v2 = *(void **)(a1 + 32);
  if ( v2 )
    AERTUnlockMemory(v2, *(unsigned int *)(a1 + 24));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a1 + 16));
}
