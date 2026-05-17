/*
 * XREFs of LdrIsEnclaveAddress @ 0x180110A04
 * Callers:
 *     RtlGuardCheckImageBase @ 0x18004C3D0 (RtlGuardCheckImageBase.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x18004BF20 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x180070D6C (LdrpUnlockAndDereferenceEnclave.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

char __fastcall LdrIsEnclaveAddress(unsigned __int64 a1)
{
  __int64 *v2; // rax
  bool v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rax
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v7, 0, 48);
  v2 = LdrpObtainLockedEnclave(a1, 0);
  v3 = 0;
  v4 = (__int64)v2;
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 14) == 16 )
    {
      v5 = v2[14];
      if ( v5 )
      {
        if ( a1 == *(_QWORD *)(v5 + 184) && (int)ZwQueryVirtualMemory(-1LL, a1, 7LL, v7, 48LL, 0LL) >= 0 )
          v3 = (v7[12] & 0x40) != 0;
      }
    }
    LdrpUnlockAndDereferenceEnclave(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
