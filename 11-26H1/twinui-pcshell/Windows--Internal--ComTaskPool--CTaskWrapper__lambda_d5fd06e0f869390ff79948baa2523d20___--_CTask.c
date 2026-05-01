/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___::_CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___ @ 0x1802DA65C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___::_scalar_deleting_destructor_ @ 0x1802DA920 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___--_scala.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___::_CTaskWrapper__lambda_d5fd06e0f869390ff79948baa2523d20___(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
