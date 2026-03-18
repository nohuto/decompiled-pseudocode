/*
 * XREFs of ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x180122110
 * Callers:
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802088B0 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802579B0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CVisualTree::GetRootVisualTree(CVisualTree *this)
{
  __int64 v1; // r8
  struct CVisualTree *v2; // r9
  _DWORD *v3; // rdx
  __int64 v4; // rax
  _BYTE *v5; // r10
  __int64 v6; // rcx
  struct CVisualTree **v7; // rax
  struct CVisualTree *result; // rax

  v1 = *((_QWORD *)this + 9);
  v2 = this;
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD **)(v1 + 224);
      if ( (*v3 & 0x8000000) == 0 )
      {
        result = 0LL;
        goto LABEL_7;
      }
      v4 = (unsigned int)v3[1];
      v5 = v3 + 2;
      v6 = 0LL;
      if ( (_DWORD)v4 )
      {
        while ( *v5 != 5 )
        {
          v6 = (unsigned int)(v6 + 1);
          ++v5;
          if ( (unsigned int)v6 >= (unsigned int)v4 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        if ( (unsigned int)v6 >= (unsigned int)v4 )
        {
          v7 = 0LL;
          goto LABEL_6;
        }
      }
      v7 = (struct CVisualTree **)((char *)&v3[2 * v6] + ((v4 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_6:
      result = *v7;
LABEL_7:
      v1 = *(_QWORD *)(v1 + 88);
      if ( !result )
        result = v2;
      v2 = result;
      if ( !v1 )
        return result;
    }
  }
  return this;
}
