/*
 * XREFs of ?AddAnimationConsumer@CResource@@QEAAXPEAVCBaseExpression@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018F990
 * Callers:
 *     ?RegisterSourceDependencies@CExpression@@AEAAJXZ @ 0x18018F8E0 (-RegisterSourceDependencies@CExpression@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018FAAC (-EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPE.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@QEAAAEAVCSparseDependency@CSparseAnimationDependencySet@@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18022BD44 (--$emplace_back@AEAUDCOMPOSITION_PROPERTY_ID@@@-$vector@VCSparseDependency@CSparseAnimationDepen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CResource::AddAnimationConsumer(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  int v7; // eax
  const char *v8; // r9
  _QWORD *v9; // rax
  __int64 i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)a1[6];
  if ( !v3 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 176LL))(a1);
    if ( a1[6] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x135,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\AnimationHelper.h",
        v8);
    if ( v7 )
    {
      v9 = operator new(0x20uLL);
      v3 = v9;
      if ( v9 )
      {
        *(_DWORD *)v9 = 1;
LABEL_6:
        v9[1] = 0LL;
        v9[2] = 0LL;
        v9[3] = 0LL;
LABEL_7:
        a1[6] = v3;
        goto LABEL_8;
      }
    }
    else
    {
      v9 = operator new(0x20uLL);
      v3 = v9;
      if ( v9 )
      {
        *(_DWORD *)v9 = 0;
        goto LABEL_6;
      }
    }
    v3 = 0LL;
    goto LABEL_7;
  }
LABEL_8:
  if ( *(_DWORD *)v3 )
  {
    v13 = a3;
    for ( i = v3[1]; i != v3[2]; i += 24LL )
    {
      if ( *(_DWORD *)(i + 16) == a3 )
      {
        if ( i )
          return CAnimationDependencies::AddAnimationToList(a2, (_QWORD *)i);
        break;
      }
    }
    std::vector<CSparseAnimationDependencySet::CSparseDependency>::emplace_back<DCOMPOSITION_PROPERTY_ID &>(
      v3 + 1,
      &v13);
    i = v3[2] - 24LL;
  }
  else
  {
    i = CFullAnimationDependencySet::EnsureDependency(v3, a3);
  }
  return CAnimationDependencies::AddAnimationToList(a2, (_QWORD *)i);
}
