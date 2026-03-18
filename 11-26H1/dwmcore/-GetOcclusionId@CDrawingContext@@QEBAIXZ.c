/*
 * XREFs of ?GetOcclusionId@CDrawingContext@@QEBAIXZ @ 0x1800780D0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::GetOcclusionId(CDrawingContext *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 7937) && (v1 = *((_QWORD *)this + 995)) != 0 )
    return *(unsigned int *)(v1 + 1096);
  else
    return 0LL;
}
