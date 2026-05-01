/*
 * XREFs of ?Reset@UwpAppStateManager@@UEAAXXZ @ 0x18054ECB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@1@@Z @ 0x180209828 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_180209828.c)
 */

void __fastcall UwpAppStateManager::Reset(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  _QWORD *Ptr; // rbx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 7;
  wil::AcquireSRWLockExclusive(&v3, this + 6);
  Ptr = v1->Ptr;
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>>>(
    (__int64)v1,
    (__int64)v1,
    *((__int64 **)v1->Ptr + 1));
  Ptr[1] = Ptr;
  *Ptr = Ptr;
  Ptr[2] = Ptr;
  v1[1].Ptr = 0LL;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v3);
}
