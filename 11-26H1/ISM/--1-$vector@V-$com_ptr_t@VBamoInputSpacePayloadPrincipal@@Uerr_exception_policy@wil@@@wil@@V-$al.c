/*
 * XREFs of ??1?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18002FD7C
 * Callers:
 *     _PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged_::_1_::dtor$0 @ 0x1801D5FD7 (_PenEventsDispatcherPrincipal--NotifyHotkeyRegistrationChanged_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::GetShellClients_::_1_::dtor$0 @ 0x1801D6025 (_PenEventsDispatcherPrincipal--GetShellClients_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::NotifyTipToGlass_::_1_::dtor$0 @ 0x1801D6064 (_PenEventsDispatcherPrincipal--NotifyTipToGlass_--_1_--dtor$0.c)
 *     _DeviceDockServer::DeviceDockServer_::_1_::dtor$1 @ 0x1801D714A (_DeviceDockServer--DeviceDockServer_--_1_--dtor$1.c)
 *     _SystemContextManager::ProcessInputConfigMessage_::_1_::dtor$0 @ 0x1801D7826 (_SystemContextManager--ProcessInputConfigMessage_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$4 @ 0x1801DC935 (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$4.c)
 *     _PenEventsDispatcherPrincipal::GetClientsForProcess_::_1_::dtor$0 @ 0x1801DC947 (_PenEventsDispatcherPrincipal--GetClientsForProcess_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18002E88C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::~vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>(
        __int64 **a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(v2, a1[1]);
    result = std::_Deallocate<16>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
