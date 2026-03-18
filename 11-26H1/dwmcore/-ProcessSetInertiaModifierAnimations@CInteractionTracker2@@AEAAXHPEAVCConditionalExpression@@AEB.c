/*
 * XREFs of ?ProcessSetInertiaModifierAnimations@CInteractionTracker2@@AEAAXHPEAVCConditionalExpression@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z @ 0x180274EB0
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::ProcessSetInertiaModifierAnimations(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // rcx
  void *v8; // rax
  CExpressionManager *v9; // rcx

  v4 = a2;
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=(&a1[a2 + 88], a3);
  operator delete((void *)a1[v4 + 92]);
  a1[v4 + 92] = 0LL;
  *((_DWORD *)a1 + v4 + 192) = (__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 2;
  v7 = (__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 2;
  if ( v7 )
  {
    v8 = operator new[](saturated_mul(v7, 4uLL));
    a1[v4 + 92] = v8;
    memcpy_0(v8, *(const void **)a4, (*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1) )
  {
    v9 = *(CExpressionManager **)(a1[3] + 816LL);
    *((_BYTE *)v9 + 418) = 1;
    CExpressionManager::Invalidate(v9);
  }
}
