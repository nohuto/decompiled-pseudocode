/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__&_::_CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__&_ @ 0x18030EAA0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__&_::_scalar_deleting_destructor_ @ 0x18030EBD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__-_--_scal.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CECA8 (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080____::_CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080____(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
