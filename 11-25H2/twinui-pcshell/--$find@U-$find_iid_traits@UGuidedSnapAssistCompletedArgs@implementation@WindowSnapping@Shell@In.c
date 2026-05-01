/*
 * XREFs of ??$find@U?$find_iid_traits@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180582238
 * Callers:
 *     ?find_interface@?$implements@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180585960 (-find_interface@-$implements@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>
    && v1[1] == 0x885286788338E3B5uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
