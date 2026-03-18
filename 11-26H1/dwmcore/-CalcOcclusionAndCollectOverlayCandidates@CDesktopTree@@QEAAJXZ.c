/*
 * XREFs of ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180170DE0
 * Callers:
 *     ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x180170B20 (-CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopTree::CalcOcclusionAndCollectOverlayCandidates(CDesktopTree *this)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  CDesktopTree *v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  HANDLE CurrentThread; // rax
  BOOL v14; // eax
  __int64 v16[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 CycleTime; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 515);
  v2 = 0LL;
  v3 = this;
  v4 = 0;
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 516) - v1) >> 3);
  if ( v5 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v16, v1, v5);
    *((_QWORD *)v3 + 516) += -40 * v6;
  }
  v7 = 0LL;
  if ( g_pComposition )
    v7 = *((_QWORD *)g_pComposition + 110);
  if ( *((_QWORD *)v3 + 15) == v7 )
  {
    v8 = 0LL;
    if ( g_pComposition )
      v8 = *((_QWORD *)g_pComposition + 110);
    if ( *((_QWORD *)v3 + 333) != v8 )
    {
      v9 = *((_BYTE *)v3 + 2436);
      v10 = *((_QWORD *)v3 + 507);
      v11 = (*((_QWORD *)v3 + 508) - v10) >> 3;
      v16[0] = v11;
      if ( v11 == -1 || (v16[1] = v10) == 0 && v11 )
      {
LABEL_22:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      if ( v9 )
      {
        if ( v3 == (CDesktopTree *)-2420LL )
          goto LABEL_22;
      }
      else if ( v3 == (CDesktopTree *)-132LL && MEMORY[0xFFFFFFFFFFFFFFFC] )
      {
        goto LABEL_22;
      }
      v12 = COcclusionContext::Compute((CDesktopTree *)((char *)v3 + 2648), v3, (__int64)v16);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x9Au, 0LL);
    }
    CycleTime = 0LL;
    if ( ::CycleTime )
    {
      CurrentThread = GetCurrentThread();
      v14 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v2 = CycleTime;
      if ( v14 )
        qword_1803DE3E8 += CycleTime - ::CycleTime;
    }
    ::CycleTime = v2;
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0xA1u, 0LL);
  }
  return v4;
}
