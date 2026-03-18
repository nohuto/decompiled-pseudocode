/*
 * XREFs of KeQueryPrimaryGroupProcess @ 0x140462F48
 * Callers:
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x140463000 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x1404630A4 (KiReleaseProcessLockShared.c)
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
