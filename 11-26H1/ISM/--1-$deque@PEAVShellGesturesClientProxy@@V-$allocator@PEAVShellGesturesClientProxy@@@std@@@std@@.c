/*
 * XREFs of ??1?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA@XZ @ 0x18007C520
 * Callers:
 *     _dynamic_atexit_destructor_for__ShellGesturesProcessor::s_clients__ @ 0x1801DDE70 (_dynamic_atexit_destructor_for__ShellGesturesProcessor--s_clients__.c)
 * Callees:
 *     ?_Tidy@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXXZ @ 0x18007C550 (-_Tidy@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 */

__int64 __fastcall std::deque<ShellGesturesClientProxy *>::~deque<ShellGesturesClientProxy *>(__int64 *a1)
{
  __int64 v2; // rcx

  std::deque<ShellGesturesClientProxy *>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  return std::_Deallocate<16>(v2, 16LL);
}
