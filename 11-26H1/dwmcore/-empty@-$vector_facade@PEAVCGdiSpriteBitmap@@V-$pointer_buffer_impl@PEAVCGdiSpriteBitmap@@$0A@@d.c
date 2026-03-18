/*
 * XREFs of ?empty@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x1800E0098
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

bool __fastcall detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::empty(
        _QWORD *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  v3 = *a1 & 3LL;
  if ( v3 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v4 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_11:
      v5 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 16);
      goto LABEL_12;
    }
    if ( (*(_DWORD *)a1 & 3) == 2LL )
    {
      v4 = 0LL;
LABEL_5:
      v5 = 0LL;
      goto LABEL_12;
    }
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v4 = (unsigned __int64)a1;
  if ( v3 )
  {
    v6 = v3 - 1;
    if ( v6 )
    {
      if ( (unsigned __int64)(v6 - 1) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      goto LABEL_5;
    }
    goto LABEL_11;
  }
  v5 = 1LL;
LABEL_12:
  if ( (*a1 & 3) == 0 )
  {
LABEL_21:
    v1 = (unsigned __int64)a1;
    return v4 + 8 * v5 - v1 == 0;
  }
  switch ( *a1 & 3LL )
  {
    case 1LL:
      v1 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
      break;
    case 2LL:
      break;
    case 3LL:
      goto LABEL_21;
    default:
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  return v4 + 8 * v5 - v1 == 0;
}
