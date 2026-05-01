/*
 * XREFs of _lambda_00240b7ecf0f21591ff2c0aa4694bf15_::__lambda_00240b7ecf0f21591ff2c0aa4694bf15_ @ 0x1805B6934
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x1805B6744 (CreationThreadDispatcher--RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::_CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___ @ 0x1805B698C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall lambda_00240b7ecf0f21591ff2c0aa4694bf15_::__lambda_00240b7ecf0f21591ff2c0aa4694bf15_(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *this)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(this);
}
