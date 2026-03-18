/*
 * XREFs of ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x140300150
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::TmpSrcThreadCleanup(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax

  CurrentThread = GreGetCurrentThread(a1, a2);
  if ( CurrentThread )
    *((_QWORD *)CurrentThread + 41) = 0LL;
}
