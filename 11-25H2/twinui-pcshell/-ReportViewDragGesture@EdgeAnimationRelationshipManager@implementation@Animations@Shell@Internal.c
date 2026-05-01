/*
 * XREFs of ?ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180676AE0
 * Callers:
 *     ?ReportViewDragGesture@?$produce@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UIEdgeAnimationRelationshipManager@34567@@impl@winrt@@UEAAHHHUstruct_WindowsUdk_UI_Input_GestureAnimationData@23@UPoint@Foundation@Windows@3@@Z @ 0x180676AA0 (-ReportViewDragGesture@-$produce@UEdgeAnimationRelationshipManager@implementation@Animations@She.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXUShellAnimationCoordinator@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@AEBUPoint@Foundation@67@@Z @ 0x180675FD8 (-AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 *     ?get@?$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180677764 (-get@-$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA.c)
 */

// Hidden C++ exception states: #wind=1
void winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::ReportViewDragGesture(
        __int64 a1,
        int a2,
        unsigned int *a3,
        __int128 *a4,
        ...)
{
  int v8; // ecx
  __int64 *v9; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v10; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+80h] [rbp+40h] BYREF

  va_start(va, a4);
  if ( *a3 <= 0x10 )
  {
    v8 = 65604;
    if ( _bittest(&v8, *a3) )
    {
      winrt::weak_ref<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::get(a1 + 240, &v10);
      if ( v10 )
      {
        if ( ((*a3 - 2) & 0xFFFFFFFB) == 0 )
        {
          v11 = 16;
          goto LABEL_11;
        }
        if ( *a3 == 16 )
        {
          if ( a2 == 3 )
          {
            v11 = 2;
LABEL_11:
            v9 = v10;
            Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v9);
            winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::AnimateViewHelper(
              a1,
              &v9,
              &v11,
              a4,
              (__int64 *)va);
            goto LABEL_12;
          }
          if ( a2 == 4 )
          {
            v11 = 6;
            goto LABEL_11;
          }
        }
      }
LABEL_12:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
    }
  }
}
