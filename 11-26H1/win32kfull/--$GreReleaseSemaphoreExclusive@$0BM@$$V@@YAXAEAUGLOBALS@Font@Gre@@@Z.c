/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140294034
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<28,>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  struct _GRETHREAD *v2; // rax
  bool v3; // zf

  v1 = *(HSEMAPHORE *)(a1 + 15504);
  EtwTraceGreLockReleaseSemaphore(L"GlyphSet", v1);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    v3 = (*(_QWORD *)v2 & 0xFFFFFFFFEFFFFFFFuLL) == 0;
    *(_QWORD *)v2 &= ~0x10000000uLL;
    if ( v3 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal(v1);
}
