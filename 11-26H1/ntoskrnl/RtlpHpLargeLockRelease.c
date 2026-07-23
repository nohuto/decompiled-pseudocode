/*
 * XREFs of RtlpHpLargeLockRelease @ 0x140356624
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140353E20 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x14035645C (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpLargeLockRelease(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 64), *(_DWORD *)a1 & 1, a2);
}
