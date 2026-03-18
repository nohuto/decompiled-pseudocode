/*
 * XREFs of ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18016D708
 * Callers:
 *     ?OnSuspendAnimationsChanged@CChannelContext@@QEAAXXZ @ 0x18016D678 (-OnSuspendAnimationsChanged@CChannelContext@@QEAAXXZ.c)
 * Callees:
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ??$emplace@AEAPEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEAPEAVCBaseExpression@@@Z @ 0x18010E66C (--$emplace@AEAPEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E7B4 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18016DA20 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?ShrinkExpressionList@CExpressionManager@@CAXAEAV?$DynArray@PEAVCBaseExpression@@$00@@@Z @ 0x18016DB10 (-ShrinkExpressionList@CExpressionManager@@CAXAEAV-$DynArray@PEAVCBaseExpression@@$00@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??$_Emplace@AEBI@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@AEBI@Z @ 0x18020CDD4 (--$_Emplace@AEBI@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAA-A.c)
 */

void __fastcall CExpressionManager::SuspendAnimations(CExpressionManager *this, int a2, char a3, char a4)
{
  __int64 i; // rdi
  __int64 v7; // rax
  struct CBaseExpression *v8; // rcx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdi
  _QWORD *v12; // r14
  struct CBaseExpression *v13; // rcx
  int v14; // eax
  struct CBaseExpression *v15; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int8 v16[16]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  int v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = a2;
  if ( a3 )
  {
    if ( a4 )
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Emplace<unsigned int const &>(
        (char *)this + 368,
        v16,
        &v19);
    }
    else
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v7 = 32LL * *((unsigned int *)this + 51);
        if ( (unsigned int)i >= *(_DWORD *)((char *)this + v7 + 232) )
          break;
        v8 = *(struct CBaseExpression **)(*(_QWORD *)((char *)this + v7 + 208) + 8 * i);
        v15 = v8;
        if ( v8 && *((_DWORD *)v8 + 44) == a2 )
        {
          v9 = DynArray<CBaseExpression *,1>::AddMultipleAndSet((char *)this + 336, &v15);
          if ( v9 < 0 )
            ModuleFailFastForHRESULT(v9, retaddr);
          *(_QWORD *)(*((_QWORD *)this + 4 * *((unsigned int *)this + 51) + 26) + 8 * i) = 0LL;
          if ( (*((_BYTE *)v15 + 217) & 1) != 0 )
            CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(this, v15);
        }
      }
      *((_BYTE *)this + 418) = 1;
    }
  }
  else
  {
    v10 = *((_DWORD *)this + 90);
    if ( v10 )
    {
      v11 = 0LL;
      v12 = (_QWORD *)((char *)this + 336);
      while ( (unsigned int)v11 < v10 )
      {
        v13 = *(struct CBaseExpression **)(*v12 + 8 * v11);
        v15 = v13;
        if ( v13 && *((_DWORD *)v13 + 44) == a2 )
        {
          v14 = DynArray<CBaseExpression *,1>::AddMultipleAndSet(
                  (char *)this + 32 * *((unsigned int *)this + 51) + 208,
                  &v15);
          if ( v14 < 0 )
            ModuleFailFastForHRESULT(v14, retaddr);
          *(_QWORD *)(*v12 + 8 * v11) = 0LL;
          if ( (*((_BYTE *)v15 + 217) & 1) != 0 )
          {
            *(_QWORD *)v16 = v15;
            std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * &>(
              (_QWORD *)this + 62,
              (__int64)v17,
              v16);
          }
        }
        v11 = (unsigned int)(v11 + 1);
      }
      CExpressionManager::ShrinkExpressionList(v12);
      *((_BYTE *)this + 418) = 1;
      CExpressionManager::Invalidate(this);
    }
  }
}
