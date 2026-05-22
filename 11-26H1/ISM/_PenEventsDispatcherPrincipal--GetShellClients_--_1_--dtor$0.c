/*
 * XREFs of _PenEventsDispatcherPrincipal::GetShellClients_::_1_::dtor$0 @ 0x1801D6025
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18002FD7C (--1-$vector@V-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::GetShellClients_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::~vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>(*(__int64 ***)(a2 + 120));
  }
  return result;
}
