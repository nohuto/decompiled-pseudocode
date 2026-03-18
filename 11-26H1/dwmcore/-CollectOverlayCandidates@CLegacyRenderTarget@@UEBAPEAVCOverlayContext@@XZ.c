/*
 * XREFs of ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x180170B60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct COverlayContext *__fastcall CLegacyRenderTarget::CollectOverlayCandidates(CLegacyRenderTarget *this)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  HANDLE CurrentThread; // rax
  BOOL v15; // eax
  __int64 v16[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 CycleTime; // [rsp+70h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 5) )
    return 0LL;
  v3 = *((_QWORD *)this + 3);
  if ( !v3 )
    return 0LL;
  v4 = *(_QWORD *)(v3 + 4120);
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(v3 + 4128) - v4) >> 3);
  if ( v5 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v16, v4, v5);
    *(_QWORD *)(v3 + 4128) += -40 * v6;
  }
  v7 = 0LL;
  v8 = 0LL;
  if ( g_pComposition )
    v8 = *((_QWORD *)g_pComposition + 110);
  if ( *(_QWORD *)(v3 + 120) == v8 )
  {
    v9 = 0LL;
    if ( g_pComposition )
      v9 = *((_QWORD *)g_pComposition + 110);
    if ( *(_QWORD *)(v3 + 2664) != v9 )
    {
      v10 = *(_BYTE *)(v3 + 2436);
      v11 = *(_QWORD *)(v3 + 4056);
      v12 = (*(_QWORD *)(v3 + 4064) - v11) >> 3;
      v16[0] = v12;
      if ( v12 == -1 || (v16[1] = v11) == 0 && v12 )
      {
LABEL_25:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      if ( v10 )
      {
        if ( v3 == -2420 )
          goto LABEL_25;
      }
      else if ( v3 == -132 && *(_DWORD *)(v3 + 128) )
      {
        goto LABEL_25;
      }
      v13 = COcclusionContext::Compute((COcclusionContext *)(v3 + 2648), (struct CVisualTree *)v3, (__int64)v16);
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x9Au, 0LL);
    }
    CycleTime = 0LL;
    if ( ::CycleTime )
    {
      CurrentThread = GetCurrentThread();
      v15 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v7 = CycleTime;
      if ( v15 )
        qword_1803DE3E8 += CycleTime - ::CycleTime;
    }
    ::CycleTime = v7;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0xA1u, 0LL);
  }
  return (CLegacyRenderTarget *)((char *)this + 56);
}
