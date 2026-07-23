/*
 * XREFs of PspMarkSessionReferenceProcess @ 0x140804DCC
 * Callers:
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 */

__int64 __fastcall PspMarkSessionReferenceProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 744) = a2;
  _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x10000u);
  PspLockProcessListExclusive((__int64)CurrentThread);
  _InterlockedOr((volatile signed __int32 *)(a1 + 2012), 8u);
  v5 = *(_QWORD **)(a2 + 24);
  v6 = a2 + 16;
  v7 = (_QWORD *)(a1 + 560);
  if ( *v5 != v6 )
    __fastfail(3u);
  *v7 = v6;
  v7[1] = v5;
  *v5 = v7;
  *(_QWORD *)(v6 + 8) = v7;
  return PspUnlockProcessListExclusive(CurrentThread);
}
