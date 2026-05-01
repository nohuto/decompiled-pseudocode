/*
 * XREFs of _lambda_634a8efdf62851cb3d468a5f6e943be4_::__lambda_634a8efdf62851cb3d468a5f6e943be4_ @ 0x1806BECB0
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1806BE740 (CreationThreadDispatcher--RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___::_CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___ @ 0x1806BED6C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_634a8efdf62851cb3d468a5f6e943be4_::__lambda_634a8efdf62851cb3d468a5f6e943be4_(__int64 a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 24));
  return lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_(a1);
}
