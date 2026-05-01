/*
 * XREFs of Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3244086198da98ac0fb1ddcbac704197_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3244086198da98ac0fb1ddcbac704197_____ @ 0x18020B1E0
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197____::_1_::dtor$2 @ 0x1806AE682 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_3244086198da98ac0fb1ddcbac704197____--_1_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180038A20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3244086198da98ac0fb1ddcbac704197_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3244086198da98ac0fb1ddcbac704197_____(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
