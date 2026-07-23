/*
 * XREFs of DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0
 * Callers:
 *     VfPtFreePoolNotification @ 0x140C4AF8C (VfPtFreePoolNotification.c)
 *     VfDriverUnloadImage @ 0x140C4CD98 (VfDriverUnloadImage.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403C2BE0 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1404144B0 (RtlLookupElementGenericTableFullAvl.c)
 *     DifAvlRealSuccessor @ 0x140488EC8 (DifAvlRealSuccessor.c)
 *     RtlGetElementGenericTableAvl @ 0x1404C3EA0 (RtlGetElementGenericTableAvl.c)
 *     DifObjTrkGetPluginContext @ 0x14064EA8C (DifObjTrkGetPluginContext.c)
 *     DifObjTrkIsExceptionPluginId @ 0x14064EC0C (DifObjTrkIsExceptionPluginId.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x140650D4C (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x140650E04 (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     DifAvlRealPredecessor @ 0x140650E74 (DifAvlRealPredecessor.c)
 *     MmGetVaTypeForVerifier @ 0x1406F8520 (MmGetVaTypeForVerifier.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall DifObjTrkQeuryInvokeDeleteRange(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int VaTypeForVerifier; // eax
  __int64 v9; // rdx
  _RTL_AVL_TABLE *v10; // rsi
  unsigned int *v11; // rbx
  __int64 *v12; // r12
  unsigned int *v13; // rdi
  _QWORD *v14; // rax
  unsigned int v15; // r11d
  unsigned __int64 v16; // r14
  _QWORD *v17; // rbx
  unsigned __int64 v18; // r15
  __int64 v19; // r12
  unsigned int v20; // r11d
  __int64 v21; // rbx
  unsigned int v22; // r11d
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // r14
  unsigned int *PluginContext; // rax
  unsigned int NumberGenericTableElements; // eax
  PVOID ElementGenericTableAvl; // rax
  unsigned __int64 v29; // rdi
  _RTL_BALANCED_LINKS *Parent; // rbx
  unsigned __int64 v31; // r12
  _RTL_BALANCED_LINKS *LeftChild; // r13
  _WORD v33[2]; // [rsp+20h] [rbp-40h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+24h] [rbp-3Ch] BYREF
  PVOID NodeOrParent; // [rsp+28h] [rbp-38h] BYREF
  __int64 v36; // [rsp+30h] [rbp-30h]
  _RTL_AVL_TABLE *v37; // [rsp+38h] [rbp-28h]
  __int64 Buffer; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-18h]
  unsigned __int64 v40; // [rsp+50h] [rbp-10h]

  v36 = a3;
  Buffer = 0LL;
  v33[0] = 0;
  if ( DifObjTrkInitialized )
  {
    if ( a1 )
    {
      if ( a2 )
      {
        if ( a1 >= 0xFFFF800000000000uLL )
        {
          VaTypeForVerifier = MmGetVaTypeForVerifier(a1);
          if ( VaTypeForVerifier != 5 )
          {
            v10 = (_RTL_AVL_TABLE *)&stru_140E27C48.Spare35[15 * VaTypeForVerifier];
            v37 = v10;
            if ( v10->NumberGenericTableElements )
            {
              v39 = a1;
              v40 = a1 + a2;
              if ( (_RTL_BALANCED_LINKS *)(a1 + a2) > v10[1].BalancedRoot.Parent
                && (_RTL_BALANCED_LINKS *)a1 <= v10[1].BalancedRoot.LeftChild )
              {
                DifAcquireSpinLockAtDpcLevelSafe(v33, v9, &stru_140E27C48.InGlobalUpdateVpThreadPriorityList);
                if ( DifObjTrkInitialized )
                {
                  NodeOrParent = 0LL;
                  SearchResult = TableEmptyTree;
                  v11 = (unsigned int *)RtlLookupElementGenericTableFullAvl(v10, &Buffer, &NodeOrParent, &SearchResult);
                  if ( v11 )
                  {
                    v12 = &qword_140E282D8;
                    NodeOrParent = &qword_140E282D8;
                    memset_0(&qword_140E282D8, 0, 0xA0uLL);
                    v13 = v11 - 8;
                    if ( !(unsigned __int8)DifObjTrkIsExceptionPluginId(*v11, a3, a4) )
                      qword_140E282D8 = (__int64)(v11 - 8);
                    v14 = DifAvlRealSuccessor((_QWORD *)v11 - 4);
                    v16 = v40;
                    v17 = v14;
                    v18 = v39;
                    if ( v14 )
                    {
                      v19 = v36;
                      do
                      {
                        if ( v15 > 0x14 || v18 > v17[5] || v16 < v17[6] )
                          break;
                        if ( !(unsigned __int8)DifObjTrkIsExceptionPluginId(*((unsigned int *)v17 + 8), v19, a4) )
                        {
                          if ( v20 == 20 )
                            break;
                          *((_QWORD *)&stru_140E27C48 + v20 + 210) = v17;
                        }
                        v17 = DifAvlRealSuccessor(v17);
                      }
                      while ( v17 );
                      v10 = v37;
                      v12 = &qword_140E282D8;
                    }
                    v21 = DifAvlRealPredecessor(v13);
                    if ( v21 )
                    {
                      v23 = v36;
                      do
                      {
                        if ( v22 > 0x14 || v18 > *(_QWORD *)(v21 + 40) || v16 < *(_QWORD *)(v21 + 48) )
                          break;
                        if ( !(unsigned __int8)DifObjTrkIsExceptionPluginId(*(unsigned int *)(v21 + 32), v23, a4) )
                        {
                          if ( v22 == 20 )
                            break;
                          *((_QWORD *)&stru_140E27C48 + v22 + 210) = v21;
                        }
                        v21 = DifAvlRealPredecessor(v21);
                      }
                      while ( v21 );
                      v10 = v37;
                      v12 = &qword_140E282D8;
                    }
                    if ( v22 )
                    {
                      v24 = v22;
                      do
                      {
                        v25 = *v12;
                        if ( *v12 )
                        {
                          PluginContext = (unsigned int *)DifObjTrkGetPluginContext(*(unsigned int *)(v25 + 32));
                          if ( PluginContext )
                          {
                            if ( *((_QWORD *)PluginContext + 1) )
                              guard_dispatch_icall_no_overrides(*(_QWORD *)(v25 + 40), *PluginContext);
                          }
                        }
                        NumberGenericTableElements = v10->NumberGenericTableElements;
                        if ( NumberGenericTableElements == 1 )
                        {
                          RtlDeleteElementGenericTableAvlEx((__int64)v10, v25);
                          --dword_140E28378;
                          v10[1].BalancedRoot.LeftChild = 0LL;
                          v10[1].BalancedRoot.Parent = 0LL;
                        }
                        else if ( NumberGenericTableElements == 2 )
                        {
                          RtlDeleteElementGenericTableAvlEx((__int64)v10, v25);
                          --dword_140E28378;
                          ElementGenericTableAvl = RtlGetElementGenericTableAvl(v10, 0);
                          v10[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 2);
                          v10[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 1);
                        }
                        else
                        {
                          v29 = *(_QWORD *)(v25 + 40);
                          Parent = v10[1].BalancedRoot.Parent;
                          v31 = *(_QWORD *)(v25 + 48);
                          LeftChild = v10[1].BalancedRoot.LeftChild;
                          RtlDeleteElementGenericTableAvlEx((__int64)v10, v25);
                          --dword_140E28378;
                          if ( v29 <= (unsigned __int64)Parent )
                            v10[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(
                                                                                              v10,
                                                                                              0)
                                                                                + 1);
                          if ( v31 >= (unsigned __int64)LeftChild )
                            v10[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(
                                                                                                 v10,
                                                                                                 v10->NumberGenericTableElements
                                                                                               - 1)
                                                                                   + 1);
                          v12 = (__int64 *)NodeOrParent;
                        }
                        NodeOrParent = ++v12;
                        --v24;
                      }
                      while ( v24 );
                    }
                  }
                }
                DifReleaseSpinLockFromDpcLevelSafe(v33, &stru_140E27C48.InGlobalUpdateVpThreadPriorityList);
              }
            }
          }
        }
      }
    }
  }
}
