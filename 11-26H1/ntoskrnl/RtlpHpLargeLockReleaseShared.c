/*
 * XREFs of RtlpHpLargeLockReleaseShared @ 0x1405311A4
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140637FB0 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpReleaseLockShared @ 0x14034BE40 (RtlpHpReleaseLockShared.c)
 */

void __fastcall RtlpHpLargeLockReleaseShared(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockShared((struct _KTHREAD *)(a1 + 64), *(_DWORD *)a1 & 1, a2);
}
