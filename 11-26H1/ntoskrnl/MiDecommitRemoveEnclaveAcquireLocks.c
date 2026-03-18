/*
 * XREFs of MiDecommitRemoveEnclaveAcquireLocks @ 0x140341128
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x140306820 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403182D0 (MiWorkingSetIsContended.c)
 *     MiDecommitRemoveEnclaveReleaseLocks @ 0x14052E654 (MiDecommitRemoveEnclaveReleaseLocks.c)
 */

void __fastcall MiDecommitRemoveEnclaveAcquireLocks(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  KIRQL v8; // r8

  if ( (a2 & 0x78) == 0
    && a2 != *(_QWORD *)(a1 + 32)
    && (MiWorkingSetIsContended(*(_QWORD *)(a1 + 56), 0)
     || KeShouldYieldProcessor()
     || (v4 = *(_QWORD *)(a1 + 40)) != 0 && (unsigned int)MiPageTableLockIsContended(*(_QWORD *)(a1 + 56), v4)) )
  {
    MiDecommitRemoveEnclaveReleaseLocks(a1, 1LL);
    MiLockWorkingSetShared(*(_QWORD *)(a1 + 56), v5, v6);
  }
  if ( !*(_QWORD *)(a1 + 40) || (a2 & 0xFFF) == 0 )
  {
    MiDecommitRemoveEnclaveReleaseLocks(a1, 0LL);
    v7 = *(_QWORD *)(a1 + 80);
    v8 = *(_BYTE *)(a1 + 64);
    *(_QWORD *)(a1 + 40) = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(a2, (*(_DWORD *)(v7 + 48) >> 10) & 0x7F, v8, 0);
  }
}
