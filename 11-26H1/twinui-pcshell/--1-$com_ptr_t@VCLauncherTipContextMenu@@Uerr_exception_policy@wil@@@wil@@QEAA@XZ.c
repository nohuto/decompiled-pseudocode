/*
 * XREFs of ??1?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1802C67B4
 * Callers:
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_::__lambda_d6b4118795ae303e935bbd5b6ca0014f_ @ 0x18018A8F8 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_--__lambda_d6b4118795ae303e935bbd5b6ca0014f_.c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_::__lambda_190ccd1a8be9aac816201cee4203407b_ @ 0x1806007A4 (_lambda_190ccd1a8be9aac816201cee4203407b_--__lambda_190ccd1a8be9aac816201cee4203407b_.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$0 @ 0x180700406 (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180063C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180063C60.c)
 */

__int64 __fastcall wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,ILauncherTipContextMenu,ILauncherTipContextMenuSettingChangeListener,ILauncherTipContextMenuMigration>::Release(
             v2,
             a2);
  return result;
}
