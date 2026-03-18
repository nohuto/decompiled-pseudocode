/*
 * XREFs of _dynamic_atexit_destructor_for__CSyncLockGroup::g_syncLockGroups__ @ 0x1802B9920
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@0@@Z @ 0x180237A1C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@.c)
 */

void dynamic_atexit_destructor_for__CSyncLockGroup::g_syncLockGroups__()
{
  if ( CSyncLockGroup::g_syncLockGroups )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CSyncLockGroup>>>(
      (_QWORD *)CSyncLockGroup::g_syncLockGroups,
      (_QWORD *)xmmword_1803E26A0);
    std::_Deallocate<16>(
      (void *)CSyncLockGroup::g_syncLockGroups,
      (*((_QWORD *)&xmmword_1803E26A0 + 1) - CSyncLockGroup::g_syncLockGroups) & 0xFFFFFFFFFFFFFFF8uLL);
    CSyncLockGroup::g_syncLockGroups = 0LL;
    xmmword_1803E26A0 = 0LL;
  }
}
