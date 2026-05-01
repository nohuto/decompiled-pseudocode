/*
 * XREFs of ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x18031B510
 * Callers:
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1802136EC (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18005D260 (-SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005D480 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18005D4C0 (-TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x18005D5B4 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800F2370 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UGameMruItem@@@std@@@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UGameMruItem@@@1@QEAV21@AEBV21@@Z @ 0x1801C458C (--$_Emplace_reallocate@AEBV-$shared_ptr@UGameMruItem@@@std@@@-$vector@V-$shared_ptr@UGameMruItem.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall JsonGameMruManager::AddMruItem(__int64 a1, __int64 **a2)
{
  __int64 **v2; // rsi
  __int64 *v4; // rbx
  __int64 *v5; // r15
  __int64 *v6; // rcx
  __int64 *v7; // r10
  _WORD *v8; // r8
  _QWORD *v9; // rcx
  _WORD *v10; // r8
  _QWORD *v11; // rcx
  __int64 *v12; // r13
  __int64 *i; // r14
  std::_Ref_count_base *v14; // rcx
  char v15; // dl
  const char *v16; // r9
  std::_Ref_count_base *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 **v20; // [rsp+58h] [rbp+10h]

  v20 = a2;
  v2 = a2;
  wil::AcquireSRWLockExclusive(&v19, (RTL_SRWLOCK *)(a1 + 48));
  v4 = *(__int64 **)(a1 + 56);
  v5 = v4 + 2;
  while ( 1 )
  {
    v6 = *(__int64 **)(a1 + 64);
    if ( v4 == v6 )
      break;
    v7 = *v2;
    if ( (*v2)[7] )
    {
      v8 = v7 + 5;
      v9 = (_QWORD *)(*v4 + 40);
      if ( (unsigned __int64)v7[8] > 7 )
        v8 = *(_WORD **)v8;
      if ( *(_QWORD *)(*v4 + 64) > 7uLL )
        v9 = (_QWORD *)*v9;
      if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v9, *(_QWORD *)(*v4 + 56), v8, v7[7]) )
        goto LABEL_15;
    }
    if ( !v7[11] )
      goto LABEL_20;
    v10 = v7 + 9;
    v11 = (_QWORD *)(*v4 + 72);
    if ( (unsigned __int64)v7[12] > 7 )
      v10 = *(_WORD **)v10;
    if ( *(_QWORD *)(*v4 + 96) > 7uLL )
      v11 = (_QWORD *)*v11;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v11, *(_QWORD *)(*v4 + 88), v10, v7[11]) )
    {
LABEL_15:
      v12 = *(__int64 **)(a1 + 64);
      for ( i = v5; i != v12; i += 2 )
        std::shared_ptr<KBViewInfo>::operator=((__int64 *)((char *)i + (char *)v4 - (char *)v5), i);
      v14 = *(std::_Ref_count_base **)(*(_QWORD *)(a1 + 64) - 8LL);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
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
    if ( v6 == *(__int64 **)(a1 + 72) )
    {
      std::vector<std::shared_ptr<GameMruItem>>::_Emplace_reallocate<std::shared_ptr<GameMruItem> const &>(
        (char **)(a1 + 56),
        *(char **)(a1 + 64),
        v2);
    }
    else
    {
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v6, v2);
      *(_QWORD *)(a1 + 64) += 16LL;
    }
    JsonGameMruManager::SortNewestToOldest();
    JsonGameMruManager::TrimItemsToMaxSize((unsigned __int8 *)a1);
    JsonGameMruManager::SerializeToJsonFile(a1, v15);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x92,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v16);
    v2 = v20;
  }
  v17 = (std::_Ref_count_base *)v2[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
}
