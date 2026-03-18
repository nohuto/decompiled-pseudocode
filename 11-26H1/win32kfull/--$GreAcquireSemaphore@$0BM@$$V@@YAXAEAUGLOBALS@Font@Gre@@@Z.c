/*
 * XREFs of ??$GreAcquireSemaphore@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1402955B8
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BM@@@YAXXZ @ 0x140102008 (--$GrepAcquireLockValidate@$0BM@@@YAXXZ.c)
 */

__int64 __fastcall GreAcquireSemaphore<28,>(__int64 a1)
{
  HSEMAPHORE v1; // rbx

  v1 = *(HSEMAPHORE *)(a1 + 15504);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GlyphSet", v1, 0LL);
  GreAcquireSemaphoreInternal(v1);
  return GrepAcquireLockValidate<28>();
}
