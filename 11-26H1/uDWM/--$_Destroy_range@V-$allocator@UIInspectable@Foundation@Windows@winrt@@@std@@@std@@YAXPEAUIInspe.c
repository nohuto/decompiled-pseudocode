/*
 * XREFs of ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x18008C9C4
 * Callers:
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18002E86C (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180087E70 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1800D9D50 (--$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Fou.c)
 *     ??1_Reallocation_guard@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1800DA720 (--1_Reallocation_guard@-$vector@UIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectab.c)
 *     ?_Change_array@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUIInspectable@Foundation@Windows@winrt@@_K1@Z @ 0x1800DCBD8 (-_Change_array@-$vector@UIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Found.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
