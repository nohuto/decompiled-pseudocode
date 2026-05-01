/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18063B690
 * Callers:
 *     ??1?$test_watcher@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063B72C (--1-$test_watcher@V-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip.c)
 *     ?Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18063B8D0 (-Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18063BF80 (-start@-$tip_test@V-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@AEAAKXZ @ 0x18063BE00 (-Release@-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>::Release(v1);
  return result;
}
