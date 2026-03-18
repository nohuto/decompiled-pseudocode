/*
 * XREFs of ?GetUniqueShaderCache@CRenderingTechniqueFragment@@QEBAPEAVCShaderCache@@XZ @ 0x18015A698
 * Callers:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x18015A544 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

struct CShaderCache *__fastcall CRenderingTechniqueFragment::GetUniqueShaderCache(CRenderingTechniqueFragment *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int i; // ecx
  __int64 v5; // rax
  __int64 v6; // rax

  v1 = *((_QWORD *)this + 4);
  v2 = *((_QWORD *)this + 1);
  v3 = (*((_QWORD *)this + 5) - v1) >> 4;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned int)v3 )
      return (struct CShaderCache *)v2;
    v5 = *(_QWORD *)(v1 + 16LL * i + 8);
    if ( v5 )
      break;
LABEL_7:
    ;
  }
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
    return 0LL;
  if ( !v2 )
  {
    v2 = v6;
    goto LABEL_7;
  }
  if ( v6 == v2 )
    goto LABEL_7;
  return 0LL;
}
