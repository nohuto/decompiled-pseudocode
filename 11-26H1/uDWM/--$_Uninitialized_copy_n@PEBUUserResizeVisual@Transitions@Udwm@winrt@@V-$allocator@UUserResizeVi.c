/*
 * XREFs of ??$_Uninitialized_copy_n@PEBUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEBU1234@_KPEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800D9CF4
 * Callers:
 *     ??$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@_K@Z @ 0x1800D97A8 (--$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisua.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800D98FC (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 *     ??$construct_at@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEBU1234@@Z @ 0x1800D9DD0 (--$construct_at@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@std@@YAPEAUUserResizeVisual@.c)
 */

__int64 *__fastcall std::_Uninitialized_copy_n<winrt::Udwm::Transitions::UserResizeVisual const *>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    v5 = a1 - (_QWORD)a3;
    do
    {
      std::construct_at<winrt::Udwm::Transitions::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual const &>(
        v3,
        (char *)v3 + v5);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v3, v3);
  return v3;
}
