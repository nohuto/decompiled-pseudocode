/*
 * XREFs of ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80
 * Callers:
 *     ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0 (-ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18004BE80 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x18004C160 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18004C220 (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18004C290 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJXZ @ 0x18004C450 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJXZ.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x18004CE70 (-InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?CanGetTargetResource@CResourceWeakRef@@KA_NXZ @ 0x18013A9B0 (-CanGetTargetResource@CResourceWeakRef@@KA_NXZ.c)
 *     ?Restore@CExcludeVisualReference@@UEAAJXZ @ 0x180194F10 (-Restore@CExcludeVisualReference@@UEAAJXZ.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 */

bool __fastcall CTreeLock::IsLockedByCurrentThread(CTreeLock *this)
{
  int v1; // ebx
  _DWORD *Value; // rbx
  HANDLE ProcessHeap; // rax
  CThreadContext *v4; // rax
  CThreadContext *v5; // rax

  v1 = *((_DWORD *)this + 2);
  if ( GetCurrentThreadId() == v1 )
    return 1;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    ProcessHeap = GetProcessHeap();
    v4 = (CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x1C0uLL);
    if ( !v4 || (v5 = CThreadContext::CThreadContext(v4), (Value = v5) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      return 0;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v5);
  }
  return Value[10] != 0;
}
