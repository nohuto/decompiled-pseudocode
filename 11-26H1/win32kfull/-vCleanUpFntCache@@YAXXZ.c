/*
 * XREFs of ?vCleanUpFntCache@@YAXXZ @ 0x140296BF8
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x14020E860 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1401C62E4 (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1401C6398 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 */

void __fastcall vCleanUpFntCache(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _GRETHREAD *v6; // rax
  bool v7; // zf
  HSEMAPHORE v8; // [rsp+30h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(a1, a2);
  if ( *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 20312LL) )
  {
    SEMOBJ<25>::SEMOBJ<25>(&v8, *(_QWORD *)(SessionState + 96) + 4864LL);
    vCleanUpFntCacheInternal(v4, v3, v5);
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore(L"FntCache", v8);
      v6 = GreGetCurrentThreadCrossSessionCheck();
      if ( v6 )
      {
        v7 = (*(_QWORD *)v6 & 0xFFFFFFFFFDFFFFFFuLL) == 0;
        *(_QWORD *)v6 &= ~0x2000000uLL;
        if ( v7 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v8);
    }
  }
}
