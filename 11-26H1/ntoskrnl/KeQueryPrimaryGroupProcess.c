/*
 * XREFs of KeQueryPrimaryGroupProcess @ 0x14045BF08
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x14045BFC0 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x14045C064 (KiReleaseProcessLockShared.c)
 */

__int64 __fastcall KeQueryPrimaryGroupProcess(__int64 a1, _WORD *a2)
{
  __int64 v4; // rdx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  KiAcquireProcessLockShared(a1, &v6);
  LOBYTE(v4) = v6;
  *a2 = *(_WORD *)(a1 + 416);
  return KiReleaseProcessLockShared(a1, v4);
}
