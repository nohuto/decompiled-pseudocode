/*
 * XREFs of ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x140151C1C
 * Callers:
 *     xxxSetThreadDesktop @ 0x14011499C (xxxSetThreadDesktop.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     NtUserDelegateInput @ 0x1401518D0 (NtUserDelegateInput.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x140151AA8 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x140151B50 (PackAffectedThreadsFromThreadCleanup.c)
 *     IsShellFrameHangResilient @ 0x140151BD4 (IsShellFrameHangResilient.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     NtUserShellHandwritingDelegateInput @ 0x1402A1350 (NtUserShellHandwritingDelegateInput.c)
 *     _SetThreadQueueMergeSetting @ 0x1402A4B28 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::AreMultipleThreadsAttached(tagQ *this)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 63);
  v2 = 0;
  if ( v1 )
  {
    v2 = 1;
    if ( *(_QWORD *)(v1 + 1688) )
      return 1;
  }
  v3 = *((_QWORD *)this + 64);
  if ( !v3 )
    return 0;
  return (unsigned int)(v2 + 1) > 1 || *(_QWORD *)(v3 + 1696) != 0LL;
}
