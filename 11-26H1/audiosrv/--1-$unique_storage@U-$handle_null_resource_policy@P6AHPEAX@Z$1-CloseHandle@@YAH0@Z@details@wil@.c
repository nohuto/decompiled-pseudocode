/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800788EC
 * Callers:
 *     ??1CAudioDGProcess@@QEAA@XZ @ 0x1800D74B4 (--1CAudioDGProcess@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x18010EF34 (--1CSebNotifier@@QEAA@XZ.c)
 *     ??1CSectionBasedCrossProcessMemory@@QEAA@XZ @ 0x180110E00 (--1CSectionBasedCrossProcessMemory@@QEAA@XZ.c)
 *     _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::operator() @ 0x180155450 (_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--operator().c)
 *     ??1?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ @ 0x18015EAB0 (--1-$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessFileObjectBasedCrossProcessMemory@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18015ECB0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessFileObjectBasedCrossPro.c)
 *     ?SerializeForRPC@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT_CROSSPROCESS_MEMORY@@@Z @ 0x18015F7F0 (-SerializeForRPC@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT.c)
 *     ?SerializeForRPC@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x18015F900 (-SerializeForRPC@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     __lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::operator()_::_1_::dtor$0 @ 0x18016C0EA (__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
  {
    if ( v1 != (void *)-1LL )
      return CloseHandle(v1);
  }
  return result;
}
