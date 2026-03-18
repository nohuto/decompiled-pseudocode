/*
 * XREFs of ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x14005991C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x140059850 (PackAffectedThreadsFromThreadCleanup.c)
 *     IsShellFrameHangResilient @ 0x1400598D4 (IsShellFrameHangResilient.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x14005AB28 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     NtUserDelegateInput @ 0x140204730 (NtUserDelegateInput.c)
 *     NtUserShellHandwritingDelegateInput @ 0x14023E7A0 (NtUserShellHandwritingDelegateInput.c)
 *     _SetThreadQueueMergeSetting @ 0x1402C2630 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::AreMultipleThreadsAttached(tagQ *this)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 66);
  v2 = 0;
  if ( v1 )
  {
    v2 = 1;
    if ( *(_QWORD *)(v1 + 1688) )
      return 1;
  }
  v3 = *((_QWORD *)this + 67);
  if ( !v3 )
    return 0;
  return (unsigned int)(v2 + 1) > 1 || *(_QWORD *)(v3 + 1696) != 0LL;
}
