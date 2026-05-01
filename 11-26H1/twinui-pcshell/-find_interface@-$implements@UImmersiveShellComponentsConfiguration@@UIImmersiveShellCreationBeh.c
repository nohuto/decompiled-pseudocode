/*
 * XREFs of ?find_interface@?$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803E58F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UImmersiveShellComponentsConfiguration@@@impl@winrt@@@?$interface_list@UIImmersiveShellCreationBehavior@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UImmersiveShellComponentsConfiguration@@@12@@Z @ 0x1803D9338 (--$find@U-$find_iid_traits@UImmersiveShellComponentsConfiguration@@@impl@winrt@@@-$interface_lis.c)
 */

__int64 __fastcall winrt::implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 8;
  return winrt::impl::interface_list<IImmersiveShellCreationBehavior>::find<winrt::impl::find_iid_traits<ImmersiveShellComponentsConfiguration>>(v3);
}
