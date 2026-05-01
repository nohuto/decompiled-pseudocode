/*
 * XREFs of ?Release@?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@AEAAKXZ @ 0x18063BE00
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18063B690 (--1-$com_ptr_t@V-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@Uerr_re.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18063BF80 (-start@-$tip_test@V-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@@tip.c)
 * Callees:
 *     ??1?$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@QEAA@XZ @ 0x18063B6B0 (--1-$merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>::~merged_data<_tip_LaunchRemoteDesktopUriHandlerTest,_tip_LaunchRemoteDesktopUriHandlerTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
