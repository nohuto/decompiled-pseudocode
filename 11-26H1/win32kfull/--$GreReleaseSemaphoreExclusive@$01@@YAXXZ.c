/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x1401D02B8
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14030F0E8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$01@@YAXXZ @ 0x14006BBF4 (--$GrepReleaseLockValidate@$01@@YAXXZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<2>(Gre::Base *a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)Gre::Base::Globals(a1);
  EtwTraceGreLockReleaseSemaphore(L"GreLock", v1 + 1144);
  GrepReleaseLockValidate<2>();
  GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)(v1 + 1144));
}
