/*
 * XREFs of ?RemoveAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801A9358
 * Callers:
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 * Callees:
 *     ?RemoveAnimationFromList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@Z @ 0x18004D0C4 (-RemoveAnimationFromList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV-$vector_facade@PEA.c)
 */

void __fastcall CResource::RemoveAnimationProducer(CResource *this, struct CBaseExpression *a2)
{
  __int64 v3; // r8
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = *((_QWORD *)this + 6);
  v4 = *((_DWORD *)a2 + 45) & 0x7FFFFFFF;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    v6 = *(_QWORD *)(v3 + 16);
    if ( *(_DWORD *)v3 )
    {
      while ( v5 != v6 )
      {
        if ( *(_DWORD *)(v5 + 16) == v4 )
          goto LABEL_8;
        v5 += 24LL;
      }
    }
    else if ( v4 < (unsigned __int64)((v6 - v5) >> 4) )
    {
      v5 += 16LL * v4;
      goto LABEL_8;
    }
    v5 = 0LL;
LABEL_8:
    if ( v5 )
      CAnimationDependencies::RemoveAnimationFromList((__int64)a2, (_QWORD *)(v5 + 8));
  }
}
