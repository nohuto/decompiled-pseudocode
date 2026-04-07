/*
 * XREFs of ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x1800312F4
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180028368 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031018 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CAnimationScheduler::ShouldSnapshot(__int64 a1, __int16 a2, _DWORD *a3)
{
  char v3; // di
  unsigned int i; // ebx
  _DWORD *v8; // rcx

  v3 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8LL * i);
    if ( a3 != v8
      && v8[6] != 4
      && ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v8 + 120LL))(v8, a2 & 0xFFF) & 1) != 0 )
    {
      return 1;
    }
  }
  return v3;
}
