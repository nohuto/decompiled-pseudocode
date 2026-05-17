/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x18008C9F4
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x18008B400 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x180150868 (RtlpHpUnlockHeapManagerForClone.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlpCSparseBitmapUnlock(__int64 a1)
{
  bool v1; // zf
  volatile signed __int64 *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( v1 )
    return RtlReleaseSRWLockExclusive(v2);
  else
    return RtlReleaseSRWLockShared(v2);
}
