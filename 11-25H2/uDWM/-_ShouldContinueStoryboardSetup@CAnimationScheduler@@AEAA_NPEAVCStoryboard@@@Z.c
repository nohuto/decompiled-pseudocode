/*
 * XREFs of ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18008C1B0
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180027B04 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z @ 0x18006D9D0 (-ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18006DC98 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?CanCoexist@CStoryboard@@SA_NPEAV1@0@Z @ 0x1800C69DC (-CanCoexist@CStoryboard@@SA_NPEAV1@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CAnimationScheduler::_ShouldContinueStoryboardSetup(CAnimationScheduler *this, struct CStoryboard *a2)
{
  __int64 v2; // rbp
  char i; // si
  __int64 v6; // rax
  struct CStoryboard *v7; // rbx

  v2 = 0LL;
  for ( i = 1; (unsigned int)v2 < *((_DWORD *)this + 10); v2 = (unsigned int)(v2 + 1) )
  {
    if ( !i )
      return i;
    v6 = *((_QWORD *)this + 2);
    v7 = *(struct CStoryboard **)(v6 + 8 * v2);
    if ( v7 != a2 && *((_DWORD *)v7 + 6) != 4 )
    {
      if ( CStoryboard::ShouldBlock(*(struct CStoryboard **)(v6 + 8 * v2), a2) )
        goto LABEL_12;
      if ( *((_DWORD *)a2 + 18) != 64
        && ((*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a2 + 64LL))(a2)
         || (*(unsigned __int8 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v7 + 64LL))(v7))
        || CStoryboard::CanCoexist(a2, v7) )
      {
        continue;
      }
      if ( *((_DWORD *)a2 + 16) < *((_DWORD *)v7 + 16) )
LABEL_12:
        i = 0;
      else
        CStoryboard::Abandon((__m128i *)v7);
    }
  }
  return i;
}
