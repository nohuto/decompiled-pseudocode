/*
 * XREFs of MiAllowProtectionChange @ 0x1402E8CA4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MiCheckResetDiscardVirtualMemory @ 0x140AAF800 (MiCheckResetDiscardVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiArbitraryCodeBlocked @ 0x140ABDF28 (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v8; // r13
  int v9; // ebp
  __int64 v10; // r15
  unsigned int v11; // ebx
  int v12; // edi
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  unsigned __int8 v16; // r12
  char v17; // al
  bool v18; // zf
  __int128 v20; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-38h]

  v8 = a2;
  v20 = 0LL;
  v21 = 0LL;
  v9 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    a2 = 768LL;
    if ( (*(_DWORD *)(a3 + 48) & 0x300) == 0x300 && (*(_DWORD *)(a3 + 48) & 0xE0) != 0 )
      return 3221225541LL;
  }
  v10 = a1 + 1024;
  v11 = 0;
  v12 = 0;
  v13 = MiLockWorkingSetShared(a1 + 1024, a2, a3);
  v16 = v13;
  while ( a5 <= a6 )
  {
    MiQueryAddressState(a5, a6, v16, a3, 0LL, (__int64)&v20);
    v17 = 0;
    if ( DWORD2(v20) != -1 )
      v17 = BYTE8(v20);
    if ( (v17 & 2) != 0 )
      v18 = (a4 & 4) == 0;
    else
      v18 = v9 == 0;
    if ( !v18 )
    {
      v12 = 1;
      break;
    }
    a5 = v21;
  }
  LOBYTE(v14) = v16;
  MiUnlockWorkingSetShared(v10, v14);
  if ( v12 )
    return (unsigned int)MiArbitraryCodeBlocked(v8);
  return v11;
}
