/*
 * XREFs of PspDetachSession @ 0x1404B05B0
 * Callers:
 *     PsDetachSession @ 0x140619E00 (PsDetachSession.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     PsQuitNextSession @ 0x140A94380 (PsQuitNextSession.c)
 */

__int64 __fastcall PspDetachSession(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  int v6; // eax
  int v7; // r8d
  __int64 v8; // r8

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 744);
  PspLockProcessListExclusive((__int64)CurrentThread);
  v6 = *(_DWORD *)(v4 + 4);
  v7 = *(_DWORD *)(v4 + 52) - 1;
  *(_DWORD *)(v4 + 52) = v7;
  if ( (v6 & 2) == 0 || v7 )
    v4 = 0LL;
  PspUnlockProcessListExclusive(CurrentThread);
  KiUnstackDetachProcess(a2, 0);
  if ( v4 )
    KeSignalGate(v4 + 56, 1LL, v8);
  return PsQuitNextSession(a1);
}
