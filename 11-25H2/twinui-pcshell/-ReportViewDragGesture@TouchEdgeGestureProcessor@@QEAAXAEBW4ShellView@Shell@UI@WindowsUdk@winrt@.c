/*
 * XREFs of ?ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUShellViewGestureReportedArgs@3456@@Z @ 0x1805716A8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs___lambda_81777c60ccc5db889236df1644364211___::Invoke @ 0x180569B80 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180569B80.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1801F229C (-IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?AnimationData@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18035DAB0 (-AnimationData@-$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationP.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGestureReportedArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18056EBD4 (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGestureR.c)
 *     ?ReportViewDragGesture@?$consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager@UIEdgeAnimationRelationshipManager@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4EdgeLocation@Animations@Shell@Internal@Windows@3@AEBW4ShellView@6UI@WindowsUdk@3@AEBUGestureAnimationData@Input@UI@WindowsUdk@3@AEBUPoint@Foundation@83@@Z @ 0x180571640 (-ReportViewDragGesture@-$consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipMan.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchEdgeGestureProcessor::ReportViewDragGesture(
        __int64 **this,
        const enum winrt::WindowsUdk::UI::Shell::ShellView *a2,
        const struct winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs *a3)
{
  __int64 **v6; // rbx
  __int64 *v7; // rax
  __int128 *v8; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs<winrt::WindowsUdk::UI::Shell::IShellViewGestureReportedArgs>::InvocationPoint(
    (__int64 *)a3,
    &v13);
  v12 = !TouchEdgeGestureProcessor::IsBottomGesture(
           (TouchEdgeGestureProcessor *)this,
           (const struct winrt::Windows::Foundation::Point *)&v13)
      + 3;
  v6 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                     this + 14,
                     &v10);
  v7 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
         (__int64 **)a3,
         &v9);
  v8 = (__int128 *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties<winrt::WindowsUdk::UI::Shell::IShellViewAnimationProperties>::AnimationData(
                     v7,
                     v11);
  winrt::impl::consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager<winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>::ReportViewDragGesture(
    v6,
    (unsigned int *)&v12,
    (unsigned int *)a2,
    v8,
    &v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
}
