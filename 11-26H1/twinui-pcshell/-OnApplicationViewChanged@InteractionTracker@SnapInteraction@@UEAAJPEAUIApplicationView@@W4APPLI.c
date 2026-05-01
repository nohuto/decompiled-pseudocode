/*
 * XREFs of ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800347F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180034018 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180035520 (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E1FA4 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@U-$com_ptr@UIApplicationView@@@winrt@@V-$shared_ptr@VI.c)
 *     ?EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AA5C4 (-EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SnapInteraction::InteractionTracker::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        _QWORD *Ptr)
{
  unsigned __int64 v6; // rbx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  __int64 result; // rax
  PVOID *v11; // r8
  __int64 *v12; // rcx
  PVOID *v13; // rdi
  char v14; // dl
  __int64 *v15; // rax
  RTL_SRWLOCK *v16; // rcx
  __int64 *v17; // rdx
  _QWORD *v18; // rcx
  char v19; // r8
  __int64 *v20; // rax
  std::_Ref_count_base *v21; // rsi
  __int64 v22; // rdi
  PVOID v23; // rax
  __int64 v24; // rax
  RTL_SRWLOCK *v25[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v28; // [rsp+88h] [rbp+10h] BYREF

  try
  {
    v6 = 0LL;
    v28 = 0LL;
    if ( a2 )
    {
      v6 = a2;
      v28 = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    }
    v7 = a3 - 1;
    if ( v7 && (v8 = v7 - 1) != 0 )
    {
      v9 = v8 - 5;
      if ( !v9 )
      {
        SnapInteraction::InteractionTracker::OnViewFocused(a1, &v28);
        v6 = v28;
        goto LABEL_8;
      }
      if ( v9 != 2 )
        goto LABEL_8;
      AcquireSRWLockExclusive(a1 + 13);
      v25[1] = a1 + 13;
      Ptr = a1[11].Ptr;
      v17 = (__int64 *)Ptr[1];
      HIDWORD(v26) = 0;
      v18 = Ptr;
      if ( !*((_BYTE *)v17 + 25) )
      {
        do
        {
          if ( v17[4] >= v6 )
          {
            v19 = 0;
            v18 = v17;
          }
          else
          {
            v19 = 1;
          }
          v20 = v17 + 2;
          if ( !v19 )
            v20 = v17;
          v17 = (__int64 *)*v20;
        }
        while ( !*(_BYTE *)(*v20 + 25) );
      }
      if ( v18 == Ptr || *((_BYTE *)v18 + 25) || v6 < v18[4] )
      {
        v26 = 0LL;
        v21 = (std::_Ref_count_base *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
        v22 = 0LL;
      }
      else
      {
        v24 = v18[6];
        if ( v24 )
          _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
        v22 = v18[5];
        *(_QWORD *)&v26 = v22;
        v21 = (std::_Ref_count_base *)v18[6];
        *((_QWORD *)&v26 + 1) = v21;
      }
      if ( v22 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)(v22 + 40));
        v25[0] = (RTL_SRWLOCK *)(v22 + 40);
        if ( *(_BYTE *)(v22 + 9) )
        {
          *(_BYTE *)(v22 + 9) = 0;
          if ( *(_BYTE *)(v22 + 8) )
            SnapInteraction::InteractionRecord::EndInteraction(v22);
          if ( v22 != -40 )
            ReleaseSRWLockExclusive((PSRWLOCK)(v22 + 40));
        }
        else
        {
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v25);
        }
      }
      if ( (PVOID)v22 == a1[9].Ptr )
        std::shared_ptr<PeoplePaneViewInfo>::reset(&a1[9].Ptr);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      if ( a1 == (RTL_SRWLOCK *)-104LL )
        goto LABEL_8;
      v16 = a1 + 13;
    }
    else
    {
      AcquireSRWLockExclusive(a1 + 13);
      v11 = (PVOID *)a1[11].Ptr;
      v12 = (__int64 *)v11[1];
      HIDWORD(v26) = 0;
      v13 = v11;
      if ( !*((_BYTE *)v12 + 25) )
      {
        do
        {
          if ( v12[4] >= v6 )
          {
            v14 = 0;
            v13 = (PVOID *)v12;
          }
          else
          {
            v14 = 1;
          }
          v15 = v12 + 2;
          if ( !v14 )
            v15 = v12;
          v12 = (__int64 *)*v15;
        }
        while ( !*(_BYTE *)(*v15 + 25) );
      }
      if ( v13 != v11 && !*((_BYTE *)v13 + 25) && v6 >= (unsigned __int64)v13[4] )
      {
        v23 = a1[9].Ptr;
        if ( v23 && v23 == v13[5] )
          std::shared_ptr<PeoplePaneViewInfo>::reset(&a1[9].Ptr);
        std::_Tree<std::_Tmap_traits<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>,std::less<winrt::com_ptr<IApplicationView>>,std::allocator<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>,0>>::_Erase_unchecked(
          &a1[11],
          v13);
      }
      if ( a1 == (RTL_SRWLOCK *)-104LL )
        goto LABEL_8;
      v16 = a1 + 13;
    }
    ReleaseSRWLockExclusive(v16);
LABEL_8:
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v28);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDD,
                           (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
                           (const char *)Ptr);
  }
  return result;
}
