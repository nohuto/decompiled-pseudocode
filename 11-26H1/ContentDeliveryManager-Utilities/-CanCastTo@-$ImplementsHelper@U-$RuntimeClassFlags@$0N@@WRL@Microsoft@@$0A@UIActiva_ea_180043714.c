/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180043714
 * Callers:
 *     ??$CreateActivationFactory@VSubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800416D0 (--$CreateActivationFactory@VSubscriptionManagerFactory@Internal@TargetedContent@ContentManagemen.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044B80 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Mi.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D304 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     InlineIsEqualGUID @ 0x180033BD0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        struct _GUID *a2)
{
  void **v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned int v7; // r9d
  bool v8; // zf
  _QWORD *v9; // r8

  if ( InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *v3 = (void *)v4;
    return 0LL;
  }
  else
  {
    v6 = v4 + 8;
    result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), a2, v3);
    v7 = -2147467262;
    v8 = (_DWORD)result == -2147467262;
    if ( (_DWORD)result == -2147467262 )
    {
      if ( InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *v9 = v6 + 32;
        result = 0LL;
      }
      else
      {
        result = v7;
      }
      v8 = (_DWORD)result == v7;
    }
    if ( v8 )
      return v7;
  }
  return result;
}
