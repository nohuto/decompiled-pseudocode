/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___ @ 0x1802971AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_358e99305f92347d1d7773659819cb56___::_scalar_deleting_destructor_ @ 0x180297170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_358e99305f92347d1d7773659819cb56___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_scalar_deleting_destructor_ @ 0x18047BA40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___--_scala.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___::_CTaskWrapper__lambda_1f254b9d55396987f0765b6e37247d78___(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
