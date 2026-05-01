/*
 * XREFs of ?CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@Uhstring@6@@Z @ 0x18066D8E8
 * Callers:
 *     ?ExitCloudPC@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA_NAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@@Z @ 0x18066E030 (-ExitCloudPC@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA_NAEBV-$sh.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 */

// Hidden C++ exception states: #wind=4
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        void (__fastcall **a3)(char *a1),
        volatile signed __int32 **a4)
{
  volatile signed __int32 *v8; // rax
  std::_Ref_count_base *v9; // rcx
  void (__fastcall **v11)(char *); // [rsp+20h] [rbp-38h]

  v11 = (void (__fastcall **)(char *))operator new(0x280uLL);
  v11[75] = a1;
  v11[76] = 0LL;
  v11[77] = 0LL;
  v11[76] = *a3;
  v11[77] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v8 = *a4;
  *a4 = 0LL;
  v11[78] = (void (__fastcall *)(char *))v8;
  *v11 = winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1;
  *((_DWORD *)v11 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v11 + 592) = 0;
  winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1((char *)v11);
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a4);
  return a2;
}
