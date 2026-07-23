/*
 * XREFs of MiLockVirtualMemoryRevert @ 0x1402E8DB8
 * Callers:
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x1402E8B80 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiUnlockVa @ 0x1404A3E1C (MiUnlockVa.c)
 */

void __fastcall MiLockVirtualMemoryRevert(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // r15

  v1 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFF000uLL;
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 )
  {
    v5 = v4 - 1;
    v6 = v3 + (v4 << 12) - 4096;
    do
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 136), v5) )
      {
        v10 = *(_QWORD *)(a1 + 120);
        v11 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        if ( v10 != v11 )
        {
          if ( v10 )
            MiUnlockPageTableInternal(v1, v10);
          *(_QWORD *)(a1 + 120) = v11;
          MiLockPageTableInternal(v1, ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, 0LL);
        }
        MiUnlockVa(v1, v6);
      }
      if ( (v5 & 0xF) == 0 && (unsigned int)MiLockVirtualMemoryGoodCitizen(a1, 0LL) )
        MiLockWorkingSetShared(v1, v8, v9);
      v6 -= 4096LL;
      --v5;
      --v4;
    }
    while ( v4 );
  }
  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 )
  {
    MiUnlockPageTableInternal(v1, v7);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  LOBYTE(v7) = *(_BYTE *)(a1 + 112);
  MiUnlockWorkingSetShared(v1, v7);
}
