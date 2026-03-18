/*
 * XREFs of FindShellFrameThreadFromAssociation @ 0x1401964FC
 * Callers:
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14019612C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 *     _SetThreadQueueMergeSetting @ 0x1402A4B28 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x140196580 (-FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall FindShellFrameThreadFromAssociation(struct tagTHREADINFO *a1)
{
  struct _THREADSASSOCIATION *ShellFrameAppThreadsAssociation; // rax

  ShellFrameAppThreadsAssociation = FindShellFrameAppThreadsAssociation(a1);
  if ( ShellFrameAppThreadsAssociation && *((struct tagTHREADINFO **)ShellFrameAppThreadsAssociation + 3) == a1 )
    return *((_QWORD *)ShellFrameAppThreadsAssociation + 2);
  else
    return 0LL;
}
