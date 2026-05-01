/*
 * XREFs of _lambda_d7e722f97b0ff1a046566d4f834dfe37_::__lambda_d7e722f97b0ff1a046566d4f834dfe37_ @ 0x18010D6A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d7e722f97b0ff1a046566d4f834dfe37___::_CTaskWrapper__lambda_d7e722f97b0ff1a046566d4f834dfe37___ @ 0x18010D4AC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d7e722f97b0ff1a046566d4f834dfe37___--_CTask.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1802BFC48 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x18010DABC (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_d7e722f97b0ff1a046566d4f834dfe37_::__lambda_d7e722f97b0ff1a046566d4f834dfe37_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
