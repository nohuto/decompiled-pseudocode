/*
 * XREFs of ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x18022AA50
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180094DA8 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@I.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rdx
  _BYTE v8[16]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+78h] [rbp-8h]
  int v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = a2;
  *a4 = 1;
  *((_BYTE *)this + 660) = 0;
  *((_BYTE *)this + 544) = 0;
  v5 = (RTL_SRWLOCK *)((char *)this + 536);
  AcquireSRWLockExclusive((PSRWLOCK)this + 67);
  LOBYTE(v9[0]) = 0;
  *(_WORD *)((char *)v9 + 1) = 0;
  BYTE3(v9[0]) = 0;
  memset_0((char *)v9 + 4, 0, 0x48uLL);
  v6 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Try_emplace<unsigned int const &,>(
                    (__int64)this + 472,
                    (__int64)v8,
                    &v12);
  *(_OWORD *)(v6 + 20) = v9[0];
  *(_OWORD *)(v6 + 36) = v9[1];
  *(_OWORD *)(v6 + 52) = v9[2];
  *(_OWORD *)(v6 + 68) = v9[3];
  *(_QWORD *)(v6 + 84) = v10;
  *(_DWORD *)(v6 + 92) = v11;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return 0LL;
}
