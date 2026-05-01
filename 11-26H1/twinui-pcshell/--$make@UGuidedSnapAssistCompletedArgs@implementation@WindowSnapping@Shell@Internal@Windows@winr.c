/*
 * XREFs of ??$make@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEAW4SnapAssistUsage@34567@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@@winrt@@YA?A_PAEAW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@0@$$QEAU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@0@@Z @ 0x1805A5F98
 * Callers:
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x1800E2890 (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@AEBW4SnapAssistUsage@23456@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@6@@Z @ 0x1805BD948 (--0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,enum winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistUsage &,winrt::array_view<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId const>>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+50h] [rbp+8h]

  v8 = operator new(0x38uLL);
  v7 = *a3;
  winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs::GuidedSnapAssistCompletedArgs(
    v8,
    a2,
    &v7);
  *v8 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs>::`vftable';
  *a1 = v8 + 2;
  return a1;
}
