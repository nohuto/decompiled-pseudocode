/*
 * XREFs of ?ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069D630
 * Callers:
 *     ?ReportViewDragGesture@?$produce@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UIEdgeAnimationRelationshipManager@34567@@impl@winrt@@UEAAHHHUstruct_WindowsUdk_UI_Input_GestureAnimationData@23@UPoint@Foundation@Windows@3@@Z @ 0x18069D5F0 (-ReportViewDragGesture@-$produce@UEdgeAnimationRelationshipManager@implementation@Animations@She.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXUShellAnimationCoordinator@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@AEBUPoint@Foundation@67@@Z @ 0x18069CDDC (-AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 *     ?get@?$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18069E1D4 (-get@-$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA.c)
 */

// Hidden C++ exception states: #wind=1
void winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::ReportViewDragGesture(
        __int64 a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
        ...)
{
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+80h] [rbp+40h] BYREF

  va_start(va, a4);
  if ( *a3 == 2 || *a3 == 16 || *a3 == 6 )
  {
    winrt::weak_ref<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::get(a1 + 240, &v9);
    if ( v9 )
    {
      if ( *a3 == 2 || *a3 == 6 )
      {
        v10 = 16;
        goto LABEL_13;
      }
      if ( *a3 == 16 )
      {
        if ( a2 == 3 )
        {
          v10 = 2;
LABEL_13:
          v8 = v9;
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v8);
          winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::AnimateViewHelper(
            a1,
            &v8,
            &v10,
            a4,
            (__int64)va);
          goto LABEL_14;
        }
        if ( a2 == 4 )
        {
          v10 = 6;
          goto LABEL_13;
        }
      }
    }
LABEL_14:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  }
}
