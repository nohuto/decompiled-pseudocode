/*
 * XREFs of ??$find@U?$find_iid_traits@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UEdgeAnimationRelationshipManager@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802936E4
 * Callers:
 *     ?find_interface@?$implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802936C0 (-find_interface@-$implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>
    && v1[1] == 0x640EADDCDDF08BA8LL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
