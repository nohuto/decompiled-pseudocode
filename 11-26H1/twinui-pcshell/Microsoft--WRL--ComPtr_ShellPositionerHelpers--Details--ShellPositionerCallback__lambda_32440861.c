/*
 * XREFs of Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3244086198da98ac0fb1ddcbac704197_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3244086198da98ac0fb1ddcbac704197_____ @ 0x18008BE60
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197____::_1_::dtor$2 @ 0x1806D0E06 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197____--_1_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008BE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3244086198da98ac0fb1ddcbac704197_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3244086198da98ac0fb1ddcbac704197_____(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
