/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1401F09D4
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400CAEE0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserReassociateQueueEventCompletionPacket @ 0x14029BFC0 (NtUserReassociateQueueEventCompletionPacket.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall ReassociateQueueEventCompletionPacket(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrent(a1, a2);
  ZwAssociateWaitCompletionPacket(
    *((_QWORD *)v2 + 205),
    *((_QWORD *)v2 + 202),
    *((_QWORD *)v2 + 204),
    0LL,
    0xFFFFFFFF80000000uLL,
    0,
    0LL,
    0LL);
  return 1LL;
}
