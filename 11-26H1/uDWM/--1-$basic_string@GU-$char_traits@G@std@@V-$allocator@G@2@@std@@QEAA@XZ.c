/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000C160
 * Callers:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x18000C5B4 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 *     ??1CDWriteText@@UEAA@XZ @ 0x18006AF7C (--1CDWriteText@@UEAA@XZ.c)
 *     ?EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180089D4C (-EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     _CDWriteText::CreateTextFormat_::_1_::dtor$4 @ 0x1800E6F1C (_CDWriteText--CreateTextFormat_--_1_--dtor$4.c)
 *     _CDWriteText::CreateTextFormat_::_1_::dtor$5 @ 0x1800E6F2E (_CDWriteText--CreateTextFormat_--_1_--dtor$5.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::EndAnimationFrameStats_::_1_::dtor$0 @ 0x1800E839E (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--EndAnimationFrameS.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[3];
  if ( v1 > 7 )
    std::_Deallocate<16>(*a1, 2 * v1 + 2);
  result = 0LL;
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
