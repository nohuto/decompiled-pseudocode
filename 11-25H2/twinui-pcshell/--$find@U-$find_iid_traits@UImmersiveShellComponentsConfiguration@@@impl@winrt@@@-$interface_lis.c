/*
 * XREFs of ??$find@U?$find_iid_traits@UImmersiveShellComponentsConfiguration@@@impl@winrt@@@?$interface_list@UIImmersiveShellCreationBehavior@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UImmersiveShellComponentsConfiguration@@@12@@Z @ 0x1803CF6BC
 * Callers:
 *     ?find_interface@?$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803DCAB0 (-find_interface@-$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBeh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellCreationBehavior>::find<winrt::impl::find_iid_traits<ImmersiveShellComponentsConfiguration>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IImmersiveShellCreationBehavior> && v1[1] == 0x61E38A387BF5D3B2LL )
    return *a1;
  else
    return 0LL;
}
