/*
 * XREFs of ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180035520
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800347F0 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180034B04 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt.c)
 *     ?HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ @ 0x180034D90 (-HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ.c)
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180034DF0 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801A97E8 (-IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FC454 (-EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AA5C4 (-EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$.c)
 *     ?StartInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AA770 (-StartInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SnapInteraction::InteractionTracker::OnViewFocused(RTL_SRWLOCK *a1, SnapLayoutHelpers **a2)
{
  char IsSnappedWindow; // si
  _QWORD *Ptr; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r15
  volatile signed __int32 *v8; // r15
  RTL_SRWLOCK *v9; // r14
  char *v10; // rbx
  std::_Ref_count_base *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  SnapLayoutHelpers *v14; // r8
  PVOID v15; // rsi
  __int64 v16; // rdi
  volatile signed __int32 *v17; // rax
  SnapInteraction::InteractionRecord *v18; // rbx
  std::_Ref_count_base *v19; // rdi
  std::_Ref_count_base *v20; // rcx
  __int64 v21; // rax
  char *v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-40h] BYREF
  __int128 v24; // [rsp+30h] [rbp-30h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h]
  RTL_SRWLOCK *v26; // [rsp+A0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v27; // [rsp+A8h] [rbp+48h]

  IsSnappedWindow = SnapLayoutHelpers::IsSnappedWindow(*a2, (struct IApplicationView *)a2);
  AcquireSRWLockExclusive(a1 + 13);
  v27 = a1 + 13;
  Ptr = a1[11].Ptr;
  v6 = (_QWORD *)Ptr[1];
  HIDWORD(v25) = 0;
  v7 = Ptr;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( v6[4] >= (unsigned __int64)*a2 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
    }
    else
    {
      v6 = (_QWORD *)v6[2];
    }
  }
  if ( *((_BYTE *)v7 + 25) || v7 == Ptr || (unsigned __int64)*a2 < v7[4] )
  {
    v23 = 0LL;
    v8 = (volatile signed __int32 *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v9 = 0LL;
  }
  else
  {
    v21 = v7[6];
    if ( v21 )
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    v9 = (RTL_SRWLOCK *)v7[5];
    *(_QWORD *)&v23 = v9;
    v8 = (volatile signed __int32 *)v7[6];
    *((_QWORD *)&v23 + 1) = v8;
  }
  if ( !v9 )
  {
    v10 = (char *)operator new(0x40uLL);
    v26 = (RTL_SRWLOCK *)v10;
    *(_OWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = 1;
    *((_DWORD *)v10 + 3) = 1;
    *(_QWORD *)v10 = &std::_Ref_count_obj2<SnapInteraction::InteractionRecord>::`vftable';
    v9 = (RTL_SRWLOCK *)(v10 + 16);
    *((_QWORD *)v10 + 2) = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v10 + 2);
    *((_WORD *)v10 + 12) = 0;
    v10[40] = 0;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 7) = 0LL;
    *(_QWORD *)&v23 = v10 + 16;
    v11 = (std::_Ref_count_base *)v8;
    v8 = (volatile signed __int32 *)v10;
    *((_QWORD *)&v23 + 1) = v10;
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    AcquireSRWLockExclusive((PSRWLOCK)v10 + 7);
    v26 = (RTL_SRWLOCK *)(v10 + 56);
    if ( IsSnappedWindow == v10[24] )
    {
      if ( v10 != (char *)-56LL )
        ReleaseSRWLockExclusive((PSRWLOCK)v10 + 7);
    }
    else
    {
      v10[24] = IsSnappedWindow;
      if ( v10[25] )
      {
        v22 = v10 + 16;
        if ( IsSnappedWindow )
          SnapInteraction::InteractionRecord::StartInteraction(v22);
        else
          SnapInteraction::InteractionRecord::EndInteraction(v22);
      }
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v26);
    }
    v12 = a1[11].Ptr;
    v13 = (_QWORD *)v12[1];
    v25 = (unsigned __int64)v13;
    if ( !*((_BYTE *)v13 + 25) )
    {
      v14 = *a2;
      do
      {
        *(_QWORD *)&v25 = v13;
        if ( v13[4] >= (unsigned __int64)v14 )
        {
          DWORD2(v25) = 1;
          v12 = v13;
          v13 = (_QWORD *)*v13;
        }
        else
        {
          DWORD2(v25) = 0;
          v13 = (_QWORD *)v13[2];
        }
      }
      while ( !*((_BYTE *)v13 + 25) );
    }
    if ( *((_BYTE *)v12 + 25) || (unsigned __int64)*a2 < v12[4] )
    {
      if ( a1[12].Ptr == (PVOID)0x492492492492492LL )
        std::_Throw_tree_length_error();
      v15 = a1[11].Ptr;
      v24 = (unsigned __int64)&a1[11];
      v16 = std::_Allocate<16,std::_Default_allocate_traits>(56LL);
      *(_QWORD *)(v16 + 32) = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v16 + 32));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(v16 + 40),
        &v23);
      *(_QWORD *)v16 = v15;
      *(_QWORD *)(v16 + 8) = v15;
      *(_QWORD *)(v16 + 16) = v15;
      *(_WORD *)(v16 + 24) = 0;
      v24 = v25;
      std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Insert_node(
        &a1[11].Ptr,
        (__int64)&v24,
        v16);
    }
    else
    {
      std::shared_ptr<FlyoutView>::operator=(v12 + 5, &v23);
    }
  }
  AcquireSRWLockExclusive(v9 + 5);
  v26 = v9 + 5;
  if ( BYTE1(v9[1].Ptr) == 1 )
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v26);
  }
  else
  {
    BYTE1(v9[1].Ptr) = 1;
    if ( LOBYTE(v9[1].Ptr) )
      SnapInteraction::InteractionRecord::StartInteraction(v9);
    if ( v9 != (RTL_SRWLOCK *)-40LL )
      ReleaseSRWLockExclusive(v9 + 5);
  }
  if ( SnapInteraction::InteractionRecord::HasInteraction(v9) )
    SnapInteraction::InteractionTracker::EnsureUpdateTimer(a1);
  v17 = (volatile signed __int32 *)a1[10].Ptr;
  if ( v17 )
    _InterlockedIncrement(v17 + 2);
  v18 = (SnapInteraction::InteractionRecord *)a1[9].Ptr;
  *(_QWORD *)&v24 = v18;
  v19 = (std::_Ref_count_base *)a1[10].Ptr;
  *((_QWORD *)&v24 + 1) = v19;
  if ( v8 )
    _InterlockedIncrement(v8 + 2);
  a1[9].Ptr = v9;
  v20 = (std::_Ref_count_base *)a1[10].Ptr;
  a1[10].Ptr = (PVOID)v8;
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  if ( v18 && v18 != (SnapInteraction::InteractionRecord *)v9 )
    SnapInteraction::InteractionRecord::IsActive(v18, 0);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  if ( v8 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
  if ( a1 != (RTL_SRWLOCK *)-104LL )
    ReleaseSRWLockExclusive(a1 + 13);
}
