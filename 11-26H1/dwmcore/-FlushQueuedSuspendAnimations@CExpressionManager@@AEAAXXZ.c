/*
 * XREFs of ?FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ @ 0x18016D8C0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E7B4 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18016DA20 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x18016DAD0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CExpressionManager::FlushQueuedSuspendAnimations(CExpressionManager *this)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rbx
  int v4; // ebp
  unsigned int i; // edi
  __int64 v6; // rcx
  __int64 v7; // r14
  struct CBaseExpression *v8; // rcx
  int v9; // eax
  __int64 **v10; // rcx
  __int64 *k; // rcx
  __int64 *j; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CBaseExpression *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)**((_QWORD **)this + 46);
  while ( !*((_BYTE *)v2 + 25) )
  {
    v4 = *((_DWORD *)v2 + 7);
    for ( i = 0; ; ++i )
    {
      v6 = 32LL * *((unsigned int *)this + 51);
      if ( i >= *(_DWORD *)((char *)this + v6 + 232) )
        break;
      v7 = 8LL * i;
      v8 = *(struct CBaseExpression **)(v7 + *(_QWORD *)((char *)this + v6 + 208));
      v14 = v8;
      if ( v8 && *((_DWORD *)v8 + 44) == v4 )
      {
        v9 = DynArray<CBaseExpression *,1>::AddMultipleAndSet((char *)this + 336, &v14);
        if ( v9 < 0 )
          ModuleFailFastForHRESULT(v9, retaddr);
        *(_QWORD *)(v7 + *((_QWORD *)this + 4 * *((unsigned int *)this + 51) + 26)) = 0LL;
        if ( (*((_BYTE *)v14 + 217) & 1) != 0 )
          CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(this, v14);
      }
    }
    *((_BYTE *)this + 418) = 1;
    v10 = (__int64 **)v2[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( j = (__int64 *)v2[1]; !*((_BYTE *)j + 25); j = (__int64 *)j[1] )
      {
        if ( v2 != (__int64 *)j[2] )
          break;
        v2 = j;
      }
      v2 = j;
    }
    else
    {
      v2 = (__int64 *)v2[2];
      for ( k = *v10; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v2 = k;
    }
  }
  v3 = (_QWORD *)*((_QWORD *)this + 46);
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    (char *)this + 368,
    (char *)this + 368,
    v3[1]);
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  *((_QWORD *)this + 47) = 0LL;
}
