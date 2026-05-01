/*
 * XREFs of ?ReportViewDragGesture@?$produce@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UIEdgeAnimationRelationshipManager@34567@@impl@winrt@@UEAAHHHUstruct_WindowsUdk_UI_Input_GestureAnimationData@23@UPoint@Foundation@Windows@3@@Z @ 0x18069D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069D630 (-ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>::ReportViewDragGesture(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  try
  {
    winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::ReportViewDragGesture(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v3);
  }
  return result;
}
