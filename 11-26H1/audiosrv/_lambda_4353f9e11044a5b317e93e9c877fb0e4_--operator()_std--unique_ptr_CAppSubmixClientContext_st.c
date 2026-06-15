/*
 * XREFs of _lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x180086D98
 * Callers:
 *     ?OnRenderStreamCountChanged@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180063D30 (-OnRenderStreamCountChanged@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 * Callees:
 *     ?EnsureProcessSubmixInSubmixContext@CProcessSubmixManager@@AEAAJAEBV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A9310 (-EnsureProcessSubmixInSubmixContext@CProcessSubmixManager@@AEAAJAEBV-$unique_ptr@VCAppSubmixClie.c)
 *     ?EnsureProcessSubmixNotInSubmixContext@CProcessSubmixManager@@AEAAJAEBV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A94D4 (-EnsureProcessSubmixNotInSubmixContext@CProcessSubmixManager@@AEAAJAEBV-$unique_ptr@VCAppSubmixC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
        __int64 **a1,
        __int64 a2)
{
  int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // r8

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)**a1 + 224LL))(**a1);
  v5 = a1[1];
  v6 = **a1;
  if ( v4 )
    return CProcessSubmixManager::EnsureProcessSubmixInSubmixContext(v5, a2, v6);
  else
    return CProcessSubmixManager::EnsureProcessSubmixNotInSubmixContext(v5, a2, v6);
}
