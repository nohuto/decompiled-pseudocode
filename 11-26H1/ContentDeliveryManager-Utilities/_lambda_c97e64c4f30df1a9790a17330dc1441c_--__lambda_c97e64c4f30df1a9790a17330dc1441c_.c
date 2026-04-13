/*
 * XREFs of _lambda_c97e64c4f30df1a9790a17330dc1441c_::__lambda_c97e64c4f30df1a9790a17330dc1441c_ @ 0x18004BE8C
 * Callers:
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_c97e64c4f30df1a9790a17330dc1441c____::_1_::dtor$2 @ 0x1800BA831 (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_c97e64c4f30df1a9790a1733.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$1 @ 0x1800BAD5D (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800BAD5D.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800452F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

__int64 __fastcall lambda_c97e64c4f30df1a9790a17330dc1441c_::__lambda_c97e64c4f30df1a9790a17330dc1441c_(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(
             result,
             a2);
  }
  return result;
}
