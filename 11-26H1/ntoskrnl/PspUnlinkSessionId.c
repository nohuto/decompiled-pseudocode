/*
 * XREFs of PspUnlinkSessionId @ 0x140804EB4
 * Callers:
 *     PspReleaseReferenceToSession @ 0x140B01E0C (PspReleaseReferenceToSession.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 */

__int64 __fastcall PspUnlinkSessionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  v3 = a1 + 80;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 8) != v3 || (v5 = *(_QWORD **)(a1 + 88), *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    RtlAvlRemoveNode((unsigned __int64 *)&NormalizationListLock.WaitBlock[0].SparePtr, a1 + 96);
  }
  return PspUnlockProcessListExclusive(CurrentThread);
}
