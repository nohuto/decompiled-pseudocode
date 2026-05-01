/*
 * XREFs of ?Reset@Win32AppStateManager@@UEAAXXZ @ 0x18029B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@@Z @ 0x1801BFB0C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ?DeleteAll@ExeDataCache@@QEAAXXZ @ 0x18029B164 (-DeleteAll@ExeDataCache@@QEAAXXZ.c)
 */

void __fastcall Win32AppStateManager::Reset(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v3; // rdi
  __int64 **Ptr; // rbx

  ExeDataCache::DeleteAll(this + 12);
  v2 = this + 7;
  AcquireSRWLockExclusive(this + 7);
  v3 = this + 8;
  Ptr = (__int64 **)this[8].Ptr;
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>,void *>>>(
    (__int64)v3,
    (__int64)v3,
    Ptr[1]);
  Ptr[1] = (__int64 *)Ptr;
  *Ptr = (__int64 *)Ptr;
  Ptr[2] = (__int64 *)Ptr;
  v3[1].Ptr = 0LL;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
