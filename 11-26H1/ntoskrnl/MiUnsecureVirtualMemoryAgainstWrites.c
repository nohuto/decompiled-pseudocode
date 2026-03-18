/*
 * XREFs of MiUnsecureVirtualMemoryAgainstWrites @ 0x14095D964
 * Callers:
 *     MiRemoveSecureEntry @ 0x140490630 (MiRemoveSecureEntry.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14095D738 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiSetProtectionOnSection @ 0x140304DE0 (MiSetProtectionOnSection.c)
 */

__int64 __fastcall MiUnsecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  return MiSetProtectionOnSection((__int64)KeGetCurrentThread()->ApcState.Process, a1, a2, a3, 4, 0, &v5, &v4);
}
