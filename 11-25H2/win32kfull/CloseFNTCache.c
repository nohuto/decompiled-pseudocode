/*
 * XREFs of CloseFNTCache @ 0x14030404C
 * Callers:
 *     xxxLW_LoadFonts @ 0x140147F80 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B5D5C (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     EngCloseFNTCache @ 0x1403040D4 (EngCloseFNTCache.c)
 */

void __fastcall CloseFNTCache(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _GRETHREAD *v5; // rax
  bool v6; // zf
  HSEMAPHORE v7; // [rsp+30h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(a1, a2);
  SEMOBJ<25>::SEMOBJ<25>(&v7, *(_QWORD *)(SessionState + 96) + 4872LL);
  EngCloseFNTCache(v4, v3);
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"FntCache", v7);
    v5 = GreGetCurrentThreadCrossSessionCheck();
    if ( v5 )
    {
      v6 = (*(_QWORD *)v5 & 0xFFFFFFFFFDFFFFFFuLL) == 0;
      *(_QWORD *)v5 &= ~0x2000000uLL;
      if ( v6 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v7);
  }
}
