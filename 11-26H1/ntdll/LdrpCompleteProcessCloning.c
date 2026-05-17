/*
 * XREFs of LdrpCompleteProcessCloning @ 0x18015DDF8
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x1800FBB94 (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  int LoaderEvents; // eax
  __int64 v2; // rcx

  if ( a1 )
  {
    qword_1801CB670 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_1801CB66C = 1;
    dword_1801CB668 = -2;
    qword_1801CB678 = 0LL;
    qword_1801C58B8 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_1801C58B0 = -2;
    dword_1801C58B4 = 1;
    qword_1801C58C0 = 0LL;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess(-1LL, (unsigned int)LoaderEvents);
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v2, 13, 0);
  return LdrpDropLastInProgressCount();
}
