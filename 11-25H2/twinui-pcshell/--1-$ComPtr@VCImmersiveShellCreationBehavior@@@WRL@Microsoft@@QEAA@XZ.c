/*
 * XREFs of ??1?$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@QEAA@XZ @ 0x1803CFDD4
 * Callers:
 *     _Microsoft::WRL::Details::Make_CImmersiveShellCreationBehavior__::_1_::dtor$0 @ 0x1806B7D4A (_Microsoft--WRL--Details--Make_CImmersiveShellCreationBehavior__--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_CImmersiveShellCreationBehavior__::_1_::dtor$0 @ 0x1806C0AC6 (_wil--MakeOrThrow_CImmersiveShellCreationBehavior__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImmersiveShellCreationBehavior@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801FAF30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_1801FAF30.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CImmersiveShellCreationBehavior>::~ComPtr<CImmersiveShellCreationBehavior>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::Release(
             result,
             a2);
  }
  return result;
}
