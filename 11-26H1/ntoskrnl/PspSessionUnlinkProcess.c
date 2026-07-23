/*
 * XREFs of PspSessionUnlinkProcess @ 0x140804E54
 * Callers:
 *     PspDereferenceSessionFinal @ 0x140B4C914 (PspDereferenceSessionFinal.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 */

__int64 __fastcall PspSessionUnlinkProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  v4 = (_QWORD *)(a2 + 560);
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  return PspUnlockProcessListExclusive(CurrentThread);
}
