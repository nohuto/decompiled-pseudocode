/*
 * XREFs of ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C
 * Callers:
 *     ?InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x18004CE70 (-InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CBaseExpression@@SAXAEBUExpressionWalkContext@@PEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18004D690 (-InsertExpressionsInOrderForTarget@CBaseExpression@@SAXAEBUExpressionWalkContext@@PEAVCResource@.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180080090 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CConditionalExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x18026C050 (-InsertDependenciesInOrder@CConditionalExpression@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x180279D50 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?AddSortedAnimation@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18016C8B0 (-AddSortedAnimation@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, const struct ExpressionWalkContext *a2)
{
  char v4; // cl
  unsigned int v5; // eax
  CBaseExpression **v6; // rbp
  CBaseExpression **i; // rdi
  __int64 TargetResource; // rax
  __int64 v9; // r8

  if ( (int)++*((_DWORD *)this + 39) <= 1 )
  {
    if ( *((_QWORD *)this + 20) == *(_QWORD *)a2 )
    {
      if ( !*((_BYTE *)a2 + 8) || (*((_BYTE *)this + 216) & 4) != 0 )
        goto LABEL_20;
    }
    else
    {
      *((_QWORD *)this + 20) = *(_QWORD *)a2;
    }
    v4 = *((_BYTE *)this + 216) ^ (*((_BYTE *)this + 216) ^ (4 * *((_BYTE *)a2 + 8))) & 4;
    v5 = CBaseExpression::s_recursionLevel;
    *((_BYTE *)this + 216) = v4;
    if ( v5 <= 0x10 )
    {
      CBaseExpression::s_recursionLevel = v5 + 1;
      if ( (v4 & 0x10) == 0 )
      {
        v6 = (CBaseExpression **)*((_QWORD *)this + 30);
        for ( i = (CBaseExpression **)*((_QWORD *)this + 29); i != v6; ++i )
        {
          if ( (*((_BYTE *)*i + 216) & 0x20) != 0 )
            CBaseExpression::InsertInOrder(*i, a2);
        }
      }
      if ( *((_DWORD *)this + 53) == 68 )
      {
        TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*((_QWORD *)this + 23));
        if ( TargetResource )
        {
          v9 = *((unsigned int *)this + 45);
          LODWORD(v9) = v9 & 0x7FFFFFFF;
          (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *, __int64))(*(_QWORD *)TargetResource
                                                                                         + 224LL))(
            TargetResource,
            a2,
            v9);
        }
      }
      (*(void (__fastcall **)(CBaseExpression *, const struct ExpressionWalkContext *))(*(_QWORD *)this + 208LL))(
        this,
        a2);
      if ( (*((_BYTE *)this + 216) & 2) != 0 )
        CExpressionManager::AddSortedAnimation(*(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL), this);
      --CBaseExpression::s_recursionLevel;
    }
  }
LABEL_20:
  --*((_DWORD *)this + 39);
}
