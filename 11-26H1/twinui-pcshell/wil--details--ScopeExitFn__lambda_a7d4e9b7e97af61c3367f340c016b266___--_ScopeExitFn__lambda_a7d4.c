/*
 * XREFs of wil::details::ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___::_ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___ @ 0x1805379C8
 * Callers:
 *     _JointResize::OnArrangedWindowResizeStarted_::_1_::dtor$1 @ 0x1806F3AFB (_JointResize--OnArrangedWindowResizeStarted_--_1_--dtor$1.c)
 * Callees:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1800787A8 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1801CC820 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050AF9C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___::_ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    JointResize::DestroyGhostDivider(*(JointResize **)a1);
    JointResize::Cleanup(*(JointResize **)a1);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      *(__int64 **)(a1 + 8),
      0);
  }
}
