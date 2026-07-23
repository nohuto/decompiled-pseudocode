/*
 * XREFs of MiFaultInPagedPool @ 0x1402E8708
 * Callers:
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiProtectInitialVaAttributes @ 0x140313660 (MiProtectInitialVaAttributes.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 */

__int64 __fastcall MiFaultInPagedPool(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  char v6; // bp
  __int64 v7; // rdx

  result = MiGetSystemRegionType(a1);
  if ( (_DWORD)result != 4 )
  {
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = MiLockWorkingSetShared((__int64)&unk_140E37200, v3, 0xFFFFF68000000000uLL);
    MiLockPageTableInternal(&unk_140E37200, v5, 0LL);
    if ( (*(_QWORD *)v4 & 0x201LL) == 0x201 )
      MiCopyOnWrite(a1, v4, -1, 4, 0LL);
    MiUnlockPageTableInternal((__int64)&unk_140E37200, v5);
    LOBYTE(v7) = v6;
    MiUnlockWorkingSetShared((__int64)&unk_140E37200, v7);
    return *(_QWORD *)a1;
  }
  return result;
}
