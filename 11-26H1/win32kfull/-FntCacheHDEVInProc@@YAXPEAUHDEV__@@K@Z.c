/*
 * XREFs of ?FntCacheHDEVInProc@@YAXPEAUHDEV__@@K@Z @ 0x14031B1A4
 * Callers:
 *     ?GrepEnableFontDriver@@YA_NP6A_JXZK@Z @ 0x14029569C (-GrepEnableFontDriver@@YA_NP6A_JXZK@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1401C62E4 (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall FntCacheHDEVInProc(HDEV a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  HSEMAPHORE v5; // rbx
  struct _GRETHREAD *v6; // rax
  bool v7; // zf
  HSEMAPHORE v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)a2;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  SEMOBJ<25>::SEMOBJ<25>(&v8, v4 + 4864);
  *(_QWORD *)(v4 + 8 * v2 + 19616) = a1;
  v5 = v8;
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
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
}
