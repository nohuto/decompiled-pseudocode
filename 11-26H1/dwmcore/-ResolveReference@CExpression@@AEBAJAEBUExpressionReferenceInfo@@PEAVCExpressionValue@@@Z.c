/*
 * XREFs of ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18004BE80
 * Callers:
 *     ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0 (-ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTrackerBase@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18004DCA0 (-CheckTargetsForInteractionSource@CInteractionTrackerBase@@SAXPEBUExpressionReferenceInfo@@PEAVC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x180080DE4 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1801076A8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18016E690 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x180175B10 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpression::ResolveReference(
        CExpression *this,
        const struct ExpressionReferenceInfo *a2,
        struct CExpressionValue *a3,
        const char *a4)
{
  struct CResource *v4; // rsi
  __int64 v6; // rbx
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rbp
  struct CResource *v12; // r14
  int v13; // ebx
  int v14; // r12d
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // ebp
  __int64 v18; // rbx
  __int64 v20; // rdx
  float v21; // xmm6_4
  __int64 Elapsed; // rax
  unsigned int v23; // [rsp+20h] [rbp-48h]
  unsigned int v24; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  if ( *((_DWORD *)this + 55) || CCommonRegistryData::LogExpressionPerfStats )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 816LL) + 128LL;
    QpcStopwatch::Start((QpcStopwatch *)&v26);
    v6 = v26;
  }
  v10 = *((_DWORD *)a2 + 4);
  if ( v10 >= *((_DWORD *)this + 80) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x541,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      a4);
  v11 = *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * v10);
  if ( !v11 )
    goto LABEL_23;
  if ( !g_pComposition
    || GetCurrentThreadId() != CComposition::s_compositionThreadId
    && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
  {
    ModuleFailFastForHRESULT(-2003304313, retaddr);
  }
  v12 = *(struct CResource **)(v11 + 64);
  if ( v12 )
  {
    if ( v6 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v26);
      CExpressionPerformanceCounter::AddDurationSample(v9, 3LL, Elapsed);
    }
    v13 = *(_DWORD *)a2;
    v14 = *((_DWORD *)a2 + 3);
    v15 = *(unsigned int *)a2;
    LODWORD(v15) = v15 & 0x7FFFFFFF;
    v16 = (*(__int64 (__fastcall **)(struct CResource *, __int64, struct CExpressionValue *))(*(_QWORD *)v12 + 136LL))(
            v12,
            v15,
            a3);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B8,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
        (const char *)(unsigned int)v16,
        v23);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B0,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\baseexpression.cpp",
        (const char *)v17,
        v24);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2A38, 2u, v17, 0x559u, 0LL);
    }
    else
    {
      if ( v13 < 0 && *((_DWORD *)a3 + 16) == 18 )
      {
        v21 = *(float *)a3;
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 18;
        *(float *)a3 = v21 * 57.295776;
      }
      if ( v14 == 1 )
      {
        v20 = *((_QWORD *)this + 24);
        if ( v20 )
        {
          if ( *(_BYTE *)(v20 + 4) )
            CExpressionValue::ApplyMaskToValue(a3, (const struct SubchannelMaskInfo *)v20);
        }
      }
      v18 = *((_QWORD *)this + 23);
      v17 = 0;
      if ( v18 )
      {
        if ( !g_pComposition
          || GetCurrentThreadId() != CComposition::s_compositionThreadId
          && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
        {
          ModuleFailFastForHRESULT(-2003304313, retaddr);
        }
        v4 = *(struct CResource **)(v18 + 64);
      }
      CInteractionTrackerBase::CheckTargetsForInteractionSource(a2, v4, v12);
    }
  }
  else
  {
LABEL_23:
    v17 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2A38, 2u, -2147467259, 0x54Cu, 0LL);
  }
  return v17;
}
