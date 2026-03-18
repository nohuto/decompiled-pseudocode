/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18009FD9C
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?EndWalk@CPreComputeSubTreeContext@@AEAAXJ@Z @ 0x18016F1F0 (-EndWalk@CPreComputeSubTreeContext@@AEAAXJ@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  char *Value; // rbx
  CThreadContext *v1; // rax
  CThreadContext *v2; // rax

  Value = (char *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( Value )
    goto LABEL_2;
  v1 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
  if ( v1 )
  {
    v2 = CThreadContext::CThreadContext(v1);
    Value = (char *)v2;
    if ( v2 )
    {
      TlsSetValue(CThreadContext::s_dwTlsIndex, v2);
LABEL_2:
      detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::pop_back(Value + 32);
      return;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
}
