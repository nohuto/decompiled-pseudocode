/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::Run @ 0x180221DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::Run(
        __int64 a1)
{
  UwpWindowEventDispatcher::RemovePendingActivationResume(*(RTL_SRWLOCK **)(a1 + 16), *(_DWORD *)(a1 + 24));
}
