/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___::_CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___ @ 0x180522898
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___::_scalar_deleting_destructor_ @ 0x1805228C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D8604 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___::_CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
