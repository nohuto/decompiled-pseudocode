/*
 * XREFs of ?ReportViewDragGesture@?$produce@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UIEdgeAnimationRelationshipManager@34567@@impl@winrt@@UEAAHHHUstruct_WindowsUdk_UI_Input_GestureAnimationData@23@UPoint@Foundation@Windows@3@@Z @ 0x180676AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180676AE0 (-ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>::ReportViewDragGesture(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  _DWORD v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = a3;
  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  try
  {
    winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::ReportViewDragGesture(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v5);
  }
  return result;
}
