/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180063EA4
 * Callers:
 *     ??1CDWriteText@@UEAA@XZ @ 0x18006310C (--1CDWriteText@@UEAA@XZ.c)
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x180063470 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 *     ?EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D5CB8 (-EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     _CDWriteText::CreateTextFormat_::_1_::dtor$4 @ 0x1800EC06B (_CDWriteText--CreateTextFormat_--_1_--dtor$4.c)
 *     _CDWriteText::CreateTextFormat_::_1_::dtor$5 @ 0x1800EC07D (_CDWriteText--CreateTextFormat_--_1_--dtor$5.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::EndAnimationFrameStats_::_1_::dtor$0 @ 0x1800ED517 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--EndAnimationFrameS.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 > 7 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(2 * v1 + 2));
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
