/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x18004CE70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(
        CExpression *this,
        const struct ExpressionWalkContext *a2,
        __int64 a3,
        const char *a4)
{
  unsigned int i; // ebp
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // eax
  const char *v13; // rcx
  CBaseExpression **v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  CBaseExpression **v17; // rdi
  _QWORD *v18; // rdx
  CBaseExpression *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = 0; i < *((_DWORD *)this + 81); ++i )
  {
    v7 = 28LL * i;
    v8 = *(unsigned int *)(v7 + *((_QWORD *)this + 38) + 16);
    if ( (unsigned int)v8 >= *((_DWORD *)this + 80) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x18F,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
        a4);
    v9 = *(_QWORD *)(*((_QWORD *)this + 37) + 8 * v8);
    if ( !v9 )
      continue;
    if ( !g_pComposition
      || GetCurrentThreadId() != CComposition::s_compositionThreadId
      && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
    {
      ModuleFailFastForHRESULT(-2003304313, retaddr);
    }
    v10 = *(_QWORD *)(v9 + 64);
    if ( !v10 )
      continue;
    v11 = *(_QWORD *)(v10 + 48);
    v12 = *(_DWORD *)(v7 + *((_QWORD *)this + 38)) & 0x7FFFFFFF;
    if ( !v11 )
      goto LABEL_32;
    v13 = *(const char **)(v11 + 8);
    if ( *(_DWORD *)v11 )
    {
      while ( v13 != *(const char **)(v11 + 16) )
      {
        if ( *((_DWORD *)v13 + 4) == v12 )
          goto LABEL_22;
        v13 += 24;
      }
    }
    else
    {
      a4 = *(const char **)(v11 + 8);
      if ( v12 < (unsigned __int64)((__int64)(*(_QWORD *)(v11 + 16) - (_QWORD)v13) >> 4) )
      {
        v13 = &a4[16 * v12];
        goto LABEL_22;
      }
    }
    v13 = 0LL;
LABEL_22:
    if ( v13 )
    {
      v18 = v13 + 8;
      goto LABEL_24;
    }
LABEL_32:
    v18 = &CAnimationDependency::EmptyList;
LABEL_24:
    v19 = (CBaseExpression *)*v18;
    v20 = *v18 & 3LL;
    if ( v20 )
    {
      if ( (*(_DWORD *)v18 & 3) == 1LL )
      {
        v14 = (CBaseExpression **)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_13:
        v15 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_14:
        v16 = *(_QWORD *)(detail::pointer_buffer_impl<CBaseExpression *,0>::first(v18) - 16);
        goto LABEL_15;
      }
      if ( (*(_DWORD *)v18 & 3) == 2LL )
      {
        v14 = 0LL;
LABEL_28:
        v15 = 0LL;
LABEL_29:
        v16 = 0LL;
        goto LABEL_15;
      }
      if ( (*(_DWORD *)v18 & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v14 = (CBaseExpression **)v18;
    if ( v20 )
    {
      if ( v20 == 1 )
        goto LABEL_13;
      if ( v20 == 2 )
        goto LABEL_28;
    }
    v15 = (unsigned __int64)v18;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_14;
      if ( (unsigned __int64)(v21 - 1) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      goto LABEL_29;
    }
    v16 = 1LL;
LABEL_15:
    v17 = (CBaseExpression **)(v15 + 8 * v16);
    while ( v14 != v17 )
      CBaseExpression::InsertInOrder(*v14++, a2);
  }
}
