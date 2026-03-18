/*
 * XREFs of ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180026CB8
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1801A91B4 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180026DF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18015DB70 (-Grow@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CHitTestContext::HitTestTreeWalk(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // eax
  char v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_DWORD *)(a1 + 216) = a5;
  *(float *)(a1 + 80) = a3;
  *(float *)(a1 + 84) = a4;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  v7 = *(_QWORD *)(a1 + 128);
  if ( v7 != *(_QWORD *)(a1 + 136) )
    *(_QWORD *)(a1 + 136) = v7;
  v8 = a1 + 168;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  if ( *(_DWORD *)(a1 + 176) == *(_DWORD *)(a1 + 180)
    && (v15 = a1 - 88, v14 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Grow(a1 + 168), v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v14,
      v8);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)v8 + 4LL * *(unsigned int *)(v8 + 8)) = 0;
    v9 = *(_DWORD *)(v8 + 20);
    if ( v9 <= ++*(_DWORD *)(v8 + 8) )
      v9 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 20) = v9;
  }
  v10 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 64) = a2;
  v11 = CVisualTreeIterator::WalkSubtree<CHitTestContext>((int)a1 + 8, *(_QWORD *)(a2 + 72), v10, a1, v15);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x22Cu, 0LL);
  return v12;
}
