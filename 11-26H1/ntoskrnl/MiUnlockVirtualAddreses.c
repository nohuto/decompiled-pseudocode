/*
 * XREFs of MiUnlockVirtualAddreses @ 0x1404A3C98
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140A06230 (NtUnlockVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x1402E8B80 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiVadPagesTradable @ 0x14035E780 (MiVadPagesTradable.c)
 *     MiUnlockVa @ 0x1404A3E1C (MiUnlockVa.c)
 */

void __fastcall MiUnlockVirtualAddreses(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 NextVad; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 104);
  v5 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFF000uLL;
  v6 = 0LL;
  v7 = 0LL;
  *(_BYTE *)(a1 + 112) = MiLockWorkingSetShared(v4, a2, a3);
  while ( v5 <= *(_QWORD *)(a1 + 72) )
  {
    if ( v5 > v6 || !v7 )
    {
      if ( v7 )
        NextVad = MiGetNextVad(v7);
      else
        NextVad = (__int64)MiLocateAddress(v5);
      v7 = NextVad;
      if ( !MiVadPagesTradable(NextVad) )
        break;
      v6 = (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12;
    }
    v8 = *(_QWORD *)(a1 + 120);
    if ( v8 != ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v8 )
        MiUnlockPageTableInternal(v4, v8);
      *(_QWORD *)(a1 + 120) = MiLockLowestValidPageTableEx(v4, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v14, 0);
    }
    MiUnlockVa(v4, v5);
    v5 += 4096LL;
    if ( (v5 & 0xF000) == 0 && (unsigned int)MiLockVirtualMemoryGoodCitizen(a1, 0LL) )
      MiLockWorkingSetShared(v4, v12, v13);
  }
  v9 = *(_QWORD *)(a1 + 120);
  if ( v9 )
  {
    MiUnlockPageTableInternal(v4, v9);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  LOBYTE(v9) = *(_BYTE *)(a1 + 112);
  MiUnlockWorkingSetShared(v4, v9);
}
