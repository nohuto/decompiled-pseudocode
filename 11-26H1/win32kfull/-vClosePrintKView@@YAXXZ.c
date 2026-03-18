/*
 * XREFs of ?vClosePrintKView@@YAXXZ @ 0x140328130
 * Callers:
 *     ?MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z @ 0x1400CF540 (-MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnmapFontFileInKernel@@YAXPEAX@Z @ 0x1400CEF7C (-vUnmapFontFileInKernel@@YAXPEAX@Z.c)
 *     ??0?$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140215EE4 (--0-$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall vClosePrintKView(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 i; // rbx
  void *v4; // rcx
  HSEMAPHORE v5; // rbx
  struct _GRETHREAD *v6; // rax
  bool v7; // zf
  HSEMAPHORE v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<23>::SEMOBJ<23>(&v8, v2 + 4864);
  for ( i = *(_QWORD *)(v2 + 24008); i; i = *(_QWORD *)(i + 32) )
  {
    if ( !*(_DWORD *)(i + 12) )
    {
      v4 = *(void **)(i + 16);
      if ( v4 )
      {
        vUnmapFontFileInKernel(v4);
        *(_QWORD *)(i + 16) = 0LL;
      }
    }
  }
  v5 = v8;
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PrintKView", v8);
    v6 = GreGetCurrentThreadCrossSessionCheck();
    if ( v6 )
    {
      v7 = (*(_QWORD *)v6 & 0xFFFFFFFFFF7FFFFFuLL) == 0;
      *(_QWORD *)v6 &= ~0x800000uLL;
      if ( v7 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
}
