/*
 * XREFs of _lambda_b77313e954014d84b78f3886c1783ac6_::__lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x1806816F8
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18001C58C (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___::_CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___ @ 0x180681738 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___--_CTask.c)
 * Callees:
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180020F84 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_b77313e954014d84b78f3886c1783ac6_::__lambda_b77313e954014d84b78f3886c1783ac6_(__int64 a1)
{
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)(a1 + 32));
  WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1);
}
