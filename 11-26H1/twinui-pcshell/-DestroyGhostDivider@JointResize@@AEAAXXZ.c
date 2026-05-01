/*
 * XREFs of ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1801CC820
 * Callers:
 *     wil::details::ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___::_ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___ @ 0x1805379C8 (wil--details--ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___--_ScopeExitFn__lambda_a7d4.c)
 *     _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x180537BB8 (_lambda_af26cd4e336a58c3fc15d2bb79fbb070_--operator().c)
 *     ?ObservedKeyDown@JointResize@@UEAAJI@Z @ 0x180538CD0 (-ObservedKeyDown@JointResize@@UEAAJI@Z.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x180538EA0 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180538F90 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall JointResize::DestroyGhostDivider(JointResize *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 192);
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
  }
}
