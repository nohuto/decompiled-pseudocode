/*
 * XREFs of ?empty@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x1800DFF9C
 * Callers:
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

bool __fastcall detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::empty(
        _QWORD *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  v3 = *a1 & 3LL;
  if ( v3 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v4 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_7:
      v5 = *(_QWORD *)(detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1) - 16);
      goto LABEL_8;
    }
    if ( (*(_DWORD *)a1 & 3) == 2LL )
    {
      v4 = 0LL;
LABEL_5:
      v5 = 0LL;
      goto LABEL_8;
    }
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v4 = (unsigned __int64)a1;
  if ( v3 )
  {
    v7 = v3 - 1;
    if ( v7 )
    {
      if ( (unsigned __int64)(v7 - 1) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      goto LABEL_5;
    }
    goto LABEL_7;
  }
  v5 = 1LL;
LABEL_8:
  if ( (*a1 & 3) == 0 )
  {
LABEL_20:
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
      goto LABEL_20;
    default:
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  return v4 + 8 * v5 - v1 == 0;
}
