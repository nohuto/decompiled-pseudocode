/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___::Run @ 0x1802E5460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb___::Run(
        __int64 a1)
{
  return LoadDataFromStateRepository(
           *(PCWSTR *)(a1 + 16),
           (HSTRING *)((*(_QWORD *)(a1 + 24) + 8LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 24) >> 64)));
}
