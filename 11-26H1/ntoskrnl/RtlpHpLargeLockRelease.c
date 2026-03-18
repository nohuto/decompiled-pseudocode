/*
 * XREFs of RtlpHpLargeLockRelease @ 0x14035487C
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140351D9C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x1403546B4 (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14034D300 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpLargeLockRelease(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 64), *(_DWORD *)a1 & 1, a2);
}
