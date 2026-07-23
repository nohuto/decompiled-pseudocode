/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x18006FE30
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x18006E838 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x180150718 (RtlpHpUnlockHeapManagerForClone.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpCSparseBitmapUnlock(__int64 a1)
{
  bool v1; // zf
  _RTL_SRWLOCK *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (_RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( v1 )
    RtlReleaseSRWLockExclusive(v2);
  else
    RtlReleaseSRWLockShared(v2);
}
