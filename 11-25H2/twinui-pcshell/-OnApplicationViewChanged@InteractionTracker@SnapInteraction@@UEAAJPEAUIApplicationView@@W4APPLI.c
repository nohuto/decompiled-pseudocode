/*
 * XREFs of ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028450
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180027DAC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18002893C (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180155F8C (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@U-$com_ptr@UIApplicationView@@@winrt@@V-$shared_ptr@VI.c)
 *     ?EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180586668 (-EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SnapInteraction::InteractionTracker::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        unsigned __int64 a2,
        int a3,
        const char *a4)
{
  unsigned __int64 v6; // rbx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  __int64 result; // rax
  PVOID *v11; // rcx
  PVOID *v12; // rax
  PVOID *v13; // rdi
  RTL_SRWLOCK *v14; // rcx
  _QWORD *Ptr; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  std::_Ref_count_base *v18; // rsi
  __int64 v19; // rdi
  PVOID v20; // rax
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+30h] [rbp-48h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v26; // [rsp+88h] [rbp+10h] BYREF

  try
  {
    v6 = 0LL;
    v26 = 0LL;
    if ( a2 )
    {
      v6 = a2;
      v26 = a2;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 8LL))(a2);
    }
    v7 = a3 - 1;
    if ( v7 && (v8 = v7 - 1) != 0 )
    {
      v9 = v8 - 5;
      if ( !v9 )
      {
        SnapInteraction::InteractionTracker::OnViewFocused(a1, &v26);
        v6 = v26;
        goto LABEL_8;
      }
      if ( v9 != 2 )
        goto LABEL_8;
      AcquireSRWLockExclusive(a1 + 13);
      v22[1] = a1 + 13;
      Ptr = a1[11].Ptr;
      v16 = (_QWORD *)Ptr[1];
      *(_QWORD *)&v23 = v16;
      HIDWORD(v23) = 0;
      v17 = Ptr;
      v24 = Ptr;
      while ( !*((_BYTE *)v16 + 25) )
      {
        if ( v16[4] < v6 )
        {
          v16 = (_QWORD *)v16[2];
        }
        else
        {
          v17 = v16;
          v24 = v16;
          v16 = (_QWORD *)*v16;
        }
      }
      if ( v17 == Ptr || *((_BYTE *)v17 + 25) || v6 < v17[4] )
      {
        v23 = 0LL;
        v18 = (std::_Ref_count_base *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
        v19 = 0LL;
      }
      else
      {
        v21 = v17[6];
        if ( v21 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
          v6 = v26;
        }
        v19 = v17[5];
        *(_QWORD *)&v23 = v19;
        v18 = (std::_Ref_count_base *)v17[6];
        *((_QWORD *)&v23 + 1) = v18;
      }
      if ( v19 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)(v19 + 40));
        v22[0] = v19 + 40;
        if ( *(_BYTE *)(v19 + 9) )
        {
          *(_BYTE *)(v19 + 9) = 0;
          if ( *(_BYTE *)(v19 + 8) )
            SnapInteraction::InteractionRecord::EndInteraction(v19);
          if ( v19 != -40 )
            ReleaseSRWLockExclusive((PSRWLOCK)(v19 + 40));
        }
        else
        {
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)v22);
        }
      }
      if ( (PVOID)v19 == a1[9].Ptr )
        std::shared_ptr<PeoplePaneViewInfo>::reset(&a1[9].Ptr);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      if ( a1 == (RTL_SRWLOCK *)-104LL )
        goto LABEL_8;
      v14 = a1 + 13;
    }
    else
    {
      AcquireSRWLockExclusive(a1 + 13);
      v11 = (PVOID *)a1[11].Ptr;
      v12 = (PVOID *)v11[1];
      v13 = v11;
      while ( !*((_BYTE *)v12 + 25) )
      {
        if ( (unsigned __int64)v12[4] < v6 )
        {
          v12 = (PVOID *)v12[2];
        }
        else
        {
          v13 = v12;
          v12 = (PVOID *)*v12;
        }
      }
      if ( v13 != v11 && !*((_BYTE *)v13 + 25) && v6 >= (unsigned __int64)v13[4] )
      {
        v20 = a1[9].Ptr;
        if ( v20 && v20 == v13[5] )
          std::shared_ptr<PeoplePaneViewInfo>::reset(&a1[9].Ptr);
        std::_Tree<std::_Tmap_traits<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>,std::less<winrt::com_ptr<IApplicationView>>,std::allocator<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>,0>>::_Erase_unchecked(
          &a1[11],
          v13);
      }
      if ( a1 == (RTL_SRWLOCK *)-104LL )
        goto LABEL_8;
      v14 = a1 + 13;
    }
    ReleaseSRWLockExclusive(v14);
LABEL_8:
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v26);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDD,
                           (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
                           a4);
  }
  return result;
}
