/*
 * XREFs of ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x18040D1E0
 * Callers:
 *     wil::details::lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___::_lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___ @ 0x180409D60 (wil--details--lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___--_lambda_call__lambda_6b2d.c)
 *     _lambda_fc6cce9727cf9f8deae1663544b26742_::operator() @ 0x18040A13C (_lambda_fc6cce9727cf9f8deae1663544b26742_--operator().c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x18040C520 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x180033BDC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x18040DCC8 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall PeoplePaneViewManager::RemovePaneViewInfoForContactId(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  __int64 *Ptr; // rbx
  __int64 *v5; // rsi
  int v6; // eax
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+48h] [rbp+10h] BYREF

  wil::AcquireSRWLockExclusive(&v7, this + 16);
  Ptr = (__int64 *)this[17].Ptr;
  v5 = (__int64 *)this[18].Ptr;
  while ( Ptr != v5 )
  {
    if ( !*(_DWORD *)(*Ptr + 60) )
    {
      LOBYTE(v6) = std::wstring::compare(*Ptr, (__int64)a2);
      if ( !v6 )
        break;
    }
    Ptr += 2;
  }
  if ( Ptr != this[18].Ptr )
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&this[17], &v8, Ptr);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
}
