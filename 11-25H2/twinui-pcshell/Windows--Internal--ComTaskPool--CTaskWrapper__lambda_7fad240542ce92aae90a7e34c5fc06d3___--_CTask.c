/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::_CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___ @ 0x1802E1178
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::_scalar_deleting_destructor_ @ 0x1802E1380 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___--_scala.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::_CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
