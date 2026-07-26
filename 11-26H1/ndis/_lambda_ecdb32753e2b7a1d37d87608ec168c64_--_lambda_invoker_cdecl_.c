/*
 * XREFs of _lambda_ecdb32753e2b7a1d37d87608ec168c64_::_lambda_invoker_cdecl_ @ 0x140144EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall lambda_ecdb32753e2b7a1d37d87608ec168c64_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  Ndis::BindEngine *p_BindEngine; // rbx

  p_BindEngine = &a1->BindState.Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  p_BindEngine->m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, (enum CallRunMode)(LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) != 0), 0);
}
