/*
 * XREFs of ?AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E554
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18010E310 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAXPEAVCResource@@@Z @ 0x180191BA4 (-RegisterIndirectTarget@CBaseExpression@@QEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018FAAC (-EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPE.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@QEAAAEAVCSparseDependency@CSparseAnimationDependencySet@@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18022BD44 (--$emplace_back@AEAUDCOMPOSITION_PROPERTY_ID@@@-$vector@VCSparseDependency@CSparseAnimationDepen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResource::AddAnimationProducer(CResource *this, struct CBaseExpression *a2)
{
  _QWORD *v2; // rbx
  int v5; // eax
  const char *v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 6);
  if ( !v2 )
  {
    v5 = (*(__int64 (__fastcall **)(CResource *))(*(_QWORD *)this + 176LL))(this);
    if ( *((_QWORD *)this + 6) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x135,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\AnimationHelper.h",
        v6);
    if ( v5 )
    {
      v7 = operator new(0x20uLL);
      v2 = v7;
      if ( v7 )
      {
        *(_DWORD *)v7 = 1;
LABEL_6:
        v7[1] = 0LL;
        v7[2] = 0LL;
        v7[3] = 0LL;
LABEL_7:
        *((_QWORD *)this + 6) = v2;
        goto LABEL_8;
      }
    }
    else
    {
      v7 = operator new(0x20uLL);
      v2 = v7;
      if ( v7 )
      {
        *(_DWORD *)v7 = 0;
        goto LABEL_6;
      }
    }
    v2 = 0LL;
    goto LABEL_7;
  }
LABEL_8:
  v8 = *((unsigned int *)a2 + 45);
  LODWORD(v8) = v8 & 0x7FFFFFFF;
  if ( *(_DWORD *)v2 )
  {
    v11 = v8;
    for ( i = v2[1]; i != v2[2]; i += 24LL )
    {
      if ( *(_DWORD *)(i + 16) == (_DWORD)v8 )
      {
        if ( i )
          goto LABEL_15;
        break;
      }
    }
    std::vector<CSparseAnimationDependencySet::CSparseDependency>::emplace_back<DCOMPOSITION_PROPERTY_ID &>(
      v2 + 1,
      &v11);
    i = v2[2] - 24LL;
  }
  else
  {
    i = CFullAnimationDependencySet::EnsureDependency(v2, v8);
  }
LABEL_15:
  CAnimationDependencies::AddAnimationToList((__int64)a2, (_QWORD *)(i + 8));
}
