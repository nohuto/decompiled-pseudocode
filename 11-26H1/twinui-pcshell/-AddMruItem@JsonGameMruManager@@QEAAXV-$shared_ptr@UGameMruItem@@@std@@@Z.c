/*
 * XREFs of ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x180317AF0
 * Callers:
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18013CA24 (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x180139BB0 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 *     ?TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18013A820 (-TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18013A938 (-SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x18013C23C (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall JsonGameMruManager::AddMruItem(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 *v4; // rbx
  __int64 *v5; // r15
  __int64 v6; // rax
  __int64 v7; // r9
  const wchar_t *v8; // rcx
  const wchar_t *v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
  const wchar_t *v12; // rcx
  const wchar_t *v13; // r8
  __int64 *v14; // r13
  __int64 *i; // r14
  std::_Ref_count_base *v16; // rcx
  _QWORD *v17; // rcx
  char v18; // dl
  const char *v19; // r9
  std::_Ref_count_base *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v22; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp+10h]

  v23 = a2;
  v2 = a2;
  wil::AcquireSRWLockExclusive(&v22, (RTL_SRWLOCK *)(a1 + 48));
  v4 = *(__int64 **)(a1 + 56);
  v5 = v4 + 2;
  while ( v4 != *(__int64 **)(a1 + 64) )
  {
    v6 = *v2;
    v7 = *(_QWORD *)(*v2 + 56LL);
    if ( v7 )
    {
      v8 = (const wchar_t *)(*v4 + 40);
      v9 = (const wchar_t *)(v6 + 40);
      if ( *(_QWORD *)(v6 + 64) > 7uLL )
        v9 = *(const wchar_t **)v9;
      if ( *(_QWORD *)(*v4 + 64) > 7uLL )
        v8 = *(const wchar_t **)v8;
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(v8, *(_QWORD *)(*v4 + 56), v9, v7) )
        goto LABEL_15;
    }
    v10 = *v2;
    v11 = *(_QWORD *)(*v2 + 88LL);
    if ( !v11 )
      goto LABEL_20;
    v12 = (const wchar_t *)(*v4 + 72);
    v13 = (const wchar_t *)(v10 + 72);
    if ( *(_QWORD *)(v10 + 96) > 7uLL )
      v13 = *(const wchar_t **)v13;
    if ( *(_QWORD *)(*v4 + 96) > 7uLL )
      v12 = *(const wchar_t **)v12;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v12, *(_QWORD *)(*v4 + 88), v13, v11) )
    {
LABEL_15:
      v14 = *(__int64 **)(a1 + 64);
      for ( i = v5; i != v14; i += 2 )
        std::shared_ptr<KBViewInfo>::operator=((__int64 *)((char *)i + (char *)v4 - (char *)v5), i);
      v16 = *(std::_Ref_count_base **)(*(_QWORD *)(a1 + 64) - 8LL);
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      *(_QWORD *)(a1 + 64) -= 16LL;
    }
    else
    {
LABEL_20:
      v4 += 2;
      v5 += 2;
    }
  }
  try
  {
    v17 = *(_QWORD **)(a1 + 64);
    if ( v17 == *(_QWORD **)(a1 + 72) )
    {
      std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo> const &>(
        (__int64 *)(a1 + 56),
        *(char **)(a1 + 64),
        v2);
    }
    else
    {
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v17, v2);
      *(_QWORD *)(a1 + 64) += 16LL;
    }
    JsonGameMruManager::SortNewestToOldest();
    JsonGameMruManager::TrimItemsToMaxSize((unsigned __int8 *)a1);
    JsonGameMruManager::SerializeToJsonFile(a1, v18);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v22);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x92,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v19);
    v2 = v23;
  }
  v20 = (std::_Ref_count_base *)v2[1];
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
}
