/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x14018BBBC
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x140300174 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<2>(Gre::Base *a1)
{
  __int64 v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *(_QWORD *)Gre::Base::Globals(a1);
  EtwTraceGreLockReleaseSemaphore(L"GreLock", v1 + 1144);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 10))-- == 1 )
      *(_QWORD *)v2 &= ~4uLL;
    if ( !*(_QWORD *)v2 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)(v1 + 1144));
}
