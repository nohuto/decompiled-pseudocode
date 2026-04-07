/*
 * XREFs of ?Update@CGaussianBlurEffectProxy@@QEAAJMII@Z @ 0x1800B60B0
 * Callers:
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B0D68 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGaussianBlurEffectProxy::Update(CGaussianBlurEffectProxy *this, float a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 568LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a3,
           1LL,
           0);
}
