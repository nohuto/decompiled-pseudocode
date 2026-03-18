/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14007BCFC
 * Callers:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x14007C15C (-vSynchronizeDriver@@YAXK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x140300174 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<8,PDEVOBJ>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *(HSEMAPHORE *)(a1 + 48);
  EtwTraceGreLockReleaseSemaphore(L"DevLock", v1);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 16))-- == 1 )
      *(_QWORD *)v2 &= ~0x100uLL;
    if ( !*(_QWORD *)v2 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal(v1);
}
