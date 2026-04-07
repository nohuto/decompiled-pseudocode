/*
 * XREFs of ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800C8558
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180050C10 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18006DC98 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_NotifyStoryboardTimeout@CStoryboard@@IEAAXXZ @ 0x1800CA1E4 (-_NotifyStoryboardTimeout@CStoryboard@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStoryboard::OnStoryboardTimeout(__m128i *this)
{
  int v1; // edi

  v1 = 0;
  if ( !this[1].m128i_i32[2] )
  {
    this[4].m128i_i8[12] = 1;
    if ( !this[4].m128i_i8[4] )
    {
      CStoryboard::_NotifyStoryboardTimeout((CStoryboard *)this);
LABEL_6:
      CStoryboard::Abandon(this);
      return (unsigned int)v1;
    }
    v1 = (*(__int64 (__fastcall **)(__m128i *))(this->m128i_i64[0] + 96))(this);
    if ( v1 < 0 )
      goto LABEL_6;
  }
  return (unsigned int)v1;
}
