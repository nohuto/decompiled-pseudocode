/*
 * XREFs of ?IsGraphWalkRootInProgress@CThreadContext@@SA_NPEBX@Z @ 0x18009FFD8
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18009F950 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

bool __fastcall CThreadContext::IsGraphWalkRootInProgress(const void *a1)
{
  const void **v2; // rbx
  __int64 *v3; // rdi
  unsigned __int64 v4; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  if ( (int)CThreadContext::GetCurrent(&v7) < 0 )
    return (char)v2;
  v3 = (__int64 *)((char *)v7 + 32);
  v4 = detail::pointer_buffer_impl<CVisual *,0>::last((__int64 *)v7 + 4);
  if ( (*v3 & 3) != 0 )
  {
    if ( (*v3 & 3) == 1 )
    {
      v2 = (const void **)(*v3 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_8;
    }
    if ( (*v3 & 3) == 2 )
      goto LABEL_8;
    if ( (*v3 & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v2 = (const void **)v3;
LABEL_8:
  while ( v2 != (const void **)v4 && *v2 != a1 )
    ++v2;
  LOBYTE(v2) = v2 != (const void **)detail::pointer_buffer_impl<CVisual *,0>::last(v3);
  return (char)v2;
}
