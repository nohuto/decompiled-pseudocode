/*
 * XREFs of ?DeleteAll@ExeDataCache@@QEAAXXZ @ 0x1802A2890
 * Callers:
 *     ?Reset@Win32AppStateManager@@UEAAXXZ @ 0x1802A2810 (-Reset@Win32AppStateManager@@UEAAXXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x180236FE0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@-.c)
 */

void __fastcall ExeDataCache::DeleteAll(PSRWLOCK SRWLock)
{
  __int64 **Ptr; // rbx

  AcquireSRWLockExclusive(SRWLock);
  Ptr = (__int64 **)SRWLock[1].Ptr;
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,ExeData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
    (__int64)&SRWLock[1],
    (__int64)&SRWLock[1],
    Ptr[1]);
  Ptr[1] = (__int64 *)Ptr;
  *Ptr = (__int64 *)Ptr;
  Ptr[2] = (__int64 *)Ptr;
  SRWLock[2].Ptr = 0LL;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
