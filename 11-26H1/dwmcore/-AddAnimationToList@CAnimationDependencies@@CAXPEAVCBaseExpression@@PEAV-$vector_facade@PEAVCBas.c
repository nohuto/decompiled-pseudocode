/*
 * XREFs of ?AddAnimationToList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@Z @ 0x18004D3B0
 * Callers:
 *     ?AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E554 (-AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?AddAnimationConsumer@CResource@@QEAAXPEAVCBaseExpression@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018F990 (-AddAnimationConsumer@CResource@@QEAAXPEAVCBaseExpression@@UDCOMPOSITION_PROPERTY_ID@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEBAPEAPEAVCCompositionSurfaceBitmap@@XZ @ 0x18004D970 (-last@-$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEBAPEAPEAVCCompositionS.c)
 *     ?reserve_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAPEAPEAVCBaseExpression@@_K0@Z @ 0x18004DA10 (-reserve_region@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CAnimationDependencies::AddAnimationToList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v5; // r8
  unsigned __int64 v7; // rcx
  _QWORD *result; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a2;
  v3 = 0LL;
  v5 = *a2 & 3LL;
  if ( v5 )
  {
    if ( (*(_DWORD *)a2 & 3) == 1LL )
    {
      v7 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_9:
      v7 += 8LL * *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_10;
    }
    if ( (*(_DWORD *)a2 & 3) == 2LL )
    {
      v7 = 0LL;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)a2 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v7 = (unsigned __int64)a2;
  if ( !v5 )
  {
    v7 = (unsigned __int64)(a2 + 1);
LABEL_27:
    result = a2;
    goto LABEL_11;
  }
  if ( v5 == 1 )
    goto LABEL_9;
  if ( (unsigned __int64)(v5 - 2) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_5:
  if ( v5 == 1 )
  {
LABEL_10:
    result = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_11;
  }
  if ( v5 != 2 )
    goto LABEL_27;
  result = 0LL;
LABEL_11:
  while ( result != (_QWORD *)v7 && *result != a1 )
    ++result;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v9 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_19;
    }
    if ( v5 == 2 )
    {
      v9 = 0LL;
      goto LABEL_20;
    }
  }
  v9 = (unsigned __int64)a2;
  if ( !v5 )
  {
    v3 = 1LL;
    goto LABEL_20;
  }
  v12 = v5 - 1;
  if ( !v12 )
  {
LABEL_19:
    v3 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    goto LABEL_20;
  }
  if ( (unsigned __int64)(v12 - 1) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_20:
  if ( result == (_QWORD *)(v9 + 8 * v3) )
  {
    v10 = detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(a2);
    v11 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a2);
    *(_QWORD *)detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::reserve_region(
                 a2,
                 (v10 - v11) >> 3,
                 1LL) = a1;
    return (_QWORD *)detail::pointer_buffer_impl<CBaseExpression *,0>::first(a2);
  }
  return result;
}
