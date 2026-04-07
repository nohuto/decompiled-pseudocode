/*
 * XREFs of ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180044D14
 * Callers:
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x1800446FC (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z @ 0x180044B6C (-OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z.c)
 *     ?OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@Z @ 0x180044C38 (-OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18008F730 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180044DF8 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
             *((unsigned int *)i + 170)) != -1 )
      {
        if ( a4
          || ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 120LL))(
                a3,
                *((unsigned int *)i + 170)) & 2) == 0 )
        {
          if ( i == a2 )
            return 1;
          return ((_DWORD)i[85] & 0x10000000) != 0;
        }
        return v5;
      }
    }
  }
  return v5;
}
