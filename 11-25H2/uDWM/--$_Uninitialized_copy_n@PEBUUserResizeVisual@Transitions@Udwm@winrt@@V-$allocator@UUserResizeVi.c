/*
 * XREFs of ??$_Uninitialized_copy_n@PEBUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEBU1234@_KPEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800DCF08
 * Callers:
 *     ??$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@_K@Z @ 0x1800DCB04 (--$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisua.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800DCC4C (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 *     ??$construct@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@?$_Default_allocator_traits@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@SAXAEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@1@QEAUUserResizeVisual@Transitions@Udwm@winrt@@AEBU3456@@Z @ 0x1800DD024 (--$construct@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@-$_Default_allocator_traits@V-$.c)
 */

winrt::Udwm::Transitions::AnimationCompletedHandler *__fastcall std::_Uninitialized_copy_n<winrt::Udwm::Transitions::UserResizeVisual const *>(
        __int64 a1,
        __int64 a2,
        winrt::Udwm::Transitions::AnimationCompletedHandler *a3)
{
  winrt::Udwm::Transitions::AnimationCompletedHandler *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    v5 = a1 - (_QWORD)a3;
    do
    {
      std::_Default_allocator_traits<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>::construct<winrt::Udwm::Transitions::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual const &>(
        a1,
        v3,
        (char *)v3 + v5);
      v3 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)((char *)v3 + 8);
      --v4;
    }
    while ( v4 );
  }
  std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v3, v3);
  return v3;
}
