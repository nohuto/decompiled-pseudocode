/*
 * XREFs of ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x14016EDD0
 * Callers:
 *     DestroyThreadsMessages @ 0x140093F10 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x140094860 (FreeMessageList.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x14016EB64 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     RedistributeDeferredMsgsOnQueue @ 0x14021C7E0 (RedistributeDeferredMsgsOnQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveQMsgFromDeferList(struct tagMLIST *a1, struct tagQMSG *a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  if ( v2 )
    *v2 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  if ( *((struct tagQMSG **)a1 + 3) == a2 )
    *((_QWORD *)a1 + 3) = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  *(_QWORD *)a2 = 0LL;
}
