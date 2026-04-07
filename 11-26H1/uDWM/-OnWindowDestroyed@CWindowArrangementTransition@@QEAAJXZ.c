/*
 * XREFs of ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x1800DE5CC
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007FEC0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18005E508 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x18009598C (-Hide@CAcrylicSheet@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowDestroyed(CWindowArrangementTransition *this)
{
  CAcrylicSheet *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax

  v2 = *(CAcrylicSheet **)(*(_QWORD *)this + 536LL);
  if ( v2 )
  {
    CAcrylicSheet::StopAnimations(*(CAcrylicSheet **)(*(_QWORD *)this + 536LL));
    CAcrylicSheet::Hide(v2, v3, v4);
  }
  result = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
