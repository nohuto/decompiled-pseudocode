/*
 * XREFs of LdrIsEnclaveAddress @ 0x180110594
 * Callers:
 *     RtlGuardCheckImageBase @ 0x180036950 (RtlGuardCheckImageBase.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800364A0 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800911BC (LdrpUnlockAndDereferenceEnclave.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

char __fastcall LdrIsEnclaveAddress(PVOID BaseAddress)
{
  __int64 *v2; // rax
  bool v3; // bl
  char *v4; // rdi
  __int64 v5; // rax
  _BYTE MemoryInformation[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(MemoryInformation, 0, 48);
  v2 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 0);
  v3 = 0;
  v4 = (char *)v2;
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 14) == 16 )
    {
      v5 = v2[14];
      if ( v5 )
      {
        if ( BaseAddress == *(PVOID *)(v5 + 184)
          && ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryRegionInformationEx,
               MemoryInformation,
               0x30uLL,
               0LL) >= 0 )
        {
          v3 = (MemoryInformation[12] & 0x40) != 0;
        }
      }
    }
    LdrpUnlockAndDereferenceEnclave(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
