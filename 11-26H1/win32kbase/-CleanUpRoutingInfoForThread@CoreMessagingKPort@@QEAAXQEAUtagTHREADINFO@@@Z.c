/*
 * XREFs of ?CleanUpRoutingInfoForThread@CoreMessagingKPort@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1401CD8D8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall CoreMessagingKPort::CleanUpRoutingInfoForThread(CoreMessagingKPort *this, PETHREAD *a2)
{
  struct W32_PUSH_LOCK *v4; // rbx
  unsigned int ThreadId; // ebp
  char *v6; // rdi
  char *v7; // rcx

  v4 = (CoreMessagingKPort *)((char *)this + 8);
  ThreadId = (unsigned int)PsGetThreadId(*a2);
  W32AcquirePushLockExclusiveEx(v4);
  v6 = (char *)this + 16;
  v7 = v6 + 16;
  while ( v6 != v7 )
  {
    if ( *(_QWORD *)v6 && *((_DWORD *)v6 + 2) == ThreadId )
    {
      *(_OWORD *)v6 = 0LL;
      a2[170] = (PETHREAD)((unsigned __int64)a2[170] & 0xFFFFFEFFFFFFFFFFuLL);
    }
    v6 += 16;
  }
  W32ReleasePushLockExclusiveEx(v4);
}
