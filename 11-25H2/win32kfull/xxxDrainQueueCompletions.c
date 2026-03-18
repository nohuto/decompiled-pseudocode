/*
 * XREFs of xxxDrainQueueCompletions @ 0x140020480
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x1400205D8 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140289A34 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 */

void __fastcall xxxDrainQueueCompletions(unsigned __int64 a1, __int64 a2)
{
  const struct tagTHREADINFO **CurrentThreadNonPaged; // rax
  const struct tagTHREADINFO *v4; // rbx
  int v5; // edi
  struct tagWND *v6; // rcx
  int v7; // [rsp+28h] [rbp-50h]
  struct _FILE_IO_COMPLETION_INFORMATION v8; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+88h] [rbp+10h] BYREF
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  CurrentThreadNonPaged = (const struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  v9 = 0;
  memset(&v8, 0, sizeof(v8));
  v10 = 0LL;
  v5 = 0;
  ZwSetIoCompletionEx(*((_QWORD *)v4 + 202), *((_QWORD *)v4 + 206), 0LL, -2147483647LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    if ( (unsigned int)ZwRemoveIoCompletionEx(*((_QWORD *)v4 + 202), &v8, 1LL, &v9, &v10, v7) )
      break;
    if ( ((__int64)v8.ApcContext & 0x80000000) != 0 )
    {
      if ( LODWORD(v8.ApcContext) != 0x80000000 )
        break;
      v5 = 1;
    }
    else
    {
      if ( v8.ApcContext >= (PVOID)2 || (v6 = (struct tagWND *)*((_QWORD *)v4 + (__int64)v8.ApcContext + 207)) == 0LL )
      {
        BroadcastCoreMessagingApcContextError(v4, (unsigned __int64)v8.ApcContext);
        break;
      }
      xxxHandleCoreMessagingQueueCompletion(v6, &v8, a1);
    }
  }
  if ( v5 )
    ZwAssociateWaitCompletionPacket(
      *((_QWORD *)v4 + 205),
      *((_QWORD *)v4 + 202),
      *((_QWORD *)v4 + 204),
      0LL,
      0xFFFFFFFF80000000uLL,
      0,
      0LL,
      0LL);
}
