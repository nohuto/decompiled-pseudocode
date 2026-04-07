/*
 * XREFs of ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180059204
 * Callers:
 *     ?OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@Z @ 0x180017690 (-OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180017870 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18003C220 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z @ 0x180059138 (-OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x1800592E8 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CAnimationScheduler::_ShouldTrack(CAnimationScheduler *this, HWND *a2, struct CStoryboard *a3, char a4)
{
  int v4; // ecx
  char v5; // bl
  HWND *i; // rdi

  v4 = *((_DWORD *)a3 + 6);
  v5 = 0;
  if ( v4 )
  {
    if ( v4 != 4 && CStoryboard::HasAnimationComponent(a3, a2[5], 0) )
      return 1;
  }
  else
  {
    for ( i = a2; i; i = (HWND *)i[75] )
    {
      if ( (*(unsigned int (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 112LL))(
             a3,
             *((unsigned int *)i + 186)) != -1 )
      {
        if ( a4
          || ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 120LL))(
                a3,
                *((unsigned int *)i + 186)) & 2) == 0 )
        {
          if ( i == a2 )
            return 1;
          return ((_DWORD)i[93] & 0x10000000) != 0;
        }
        return v5;
      }
    }
  }
  return v5;
}
