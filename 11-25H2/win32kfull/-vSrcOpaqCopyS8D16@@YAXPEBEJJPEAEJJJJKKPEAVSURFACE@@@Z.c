/*
 * XREFs of ?vSrcOpaqCopyS8D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1403008A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F14D0 (-vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ??0?$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400F3004 (--0-$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall vSrcOpaqCopyS8D16(
        const unsigned __int8 *a1,
        __int64 a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  int v13; // esi
  __int64 SessionState; // rax
  HSEMAPHORE v16; // rbx
  struct _GRETHREAD *v17; // rax
  bool v18; // zf
  HSEMAPHORE v19; // [rsp+60h] [rbp-18h] BYREF

  v13 = a2;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  SEMOBJ<24>::SEMOBJ<24>(&v19, *(_QWORD *)(SessionState + 96) + 4872LL);
  vSrcOpaqCopyS8D16Unsafe(a1, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  v16 = v19;
  if ( v19 )
  {
    EtwTraceGreLockReleaseSemaphore(L"EUDC2", v19);
    v17 = GreGetCurrentThreadCrossSessionCheck();
    if ( v17 )
    {
      v18 = (*(_QWORD *)v17 & 0xFFFFFFFFFEFFFFFFuLL) == 0;
      *(_QWORD *)v17 &= ~0x1000000uLL;
      if ( v18 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v16);
  }
}
