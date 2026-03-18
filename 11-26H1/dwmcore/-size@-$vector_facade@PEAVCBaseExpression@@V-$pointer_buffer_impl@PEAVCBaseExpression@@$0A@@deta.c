/*
 * XREFs of ?size@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18004E0E0
 * Callers:
 *     ?RemoveAnimationFromList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@Z @ 0x18004D0C4 (-RemoveAnimationFromList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV-$vector_facade@PEA.c)
 *     ?reserve_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAPEAPEAVCBaseExpression@@_K0@Z @ 0x18004DA10 (-reserve_region@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@.c)
 *     ?erase_unchecked@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCBaseExpression@@@2@V?$basic_iterator@QEAVCBaseExpression@@@2@0@Z @ 0x18004DE78 (-erase_unchecked@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression.c)
 *     ?clear_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18004F234 (-clear_region@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$.c)
 *     ?clear@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAAXXZ @ 0x18004F388 (-clear@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 *     ??$swap_generic@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18022BE1C (--$swap_generic@V-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::size(
        __int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 & 3;
  if ( v3 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v4 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_6:
      v2 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_7;
    }
    if ( (*(_DWORD *)a1 & 3) == 2LL )
    {
      v4 = 0LL;
      goto LABEL_12;
    }
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v4 = (unsigned __int64)a1;
  if ( !v3 )
  {
    v2 = 1LL;
    goto LABEL_16;
  }
  if ( v3 == 1 )
    goto LABEL_6;
  if ( (unsigned __int64)(v3 - 2) > 1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_12:
  v7 = v3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v5 = 0LL;
      return (__int64)(v4 + 8 * v2 - v5) >> 3;
    }
    if ( v8 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_16:
    v5 = (unsigned __int64)a1;
    return (__int64)(v4 + 8 * v2 - v5) >> 3;
  }
LABEL_7:
  v5 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  return (__int64)(v4 + 8 * v2 - v5) >> 3;
}
