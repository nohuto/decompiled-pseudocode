/*
 * XREFs of MiDeleteBootRange @ 0x1406E827C
 * Callers:
 *     MmFreeBootRegistry @ 0x14086A188 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140CF858C (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiDriverPdeOkToDelete @ 0x1406E85FC (MiDriverPdeOkToDelete.c)
 *     MiUnmapReturnCharges @ 0x140ACA14C (MiUnmapReturnCharges.c)
 */

__int64 __fastcall MiDeleteBootRange(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rbp
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 valid; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  char v13; // r12
  _KPROCESS *v14; // rax
  __int64 v15; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _KPROCESS *v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 result; // rax
  _OWORD v29[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v30; // [rsp+70h] [rbp-38h]
  unsigned __int64 v31; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+10h]

  v32 = a2;
  v2 = a2;
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  v4 = (((a1 - 8 + 8 * a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiDecommitPages(a1, v6, 0, 0LL, 0LL, 32, 0LL, (__int64)v29);
  v9 = *(_QWORD *)&v29[0];
  if ( *(_QWORD *)&v29[0] != v2 )
    v9 = v2;
  *(_QWORD *)&v29[0] = v9;
  valid = 0LL;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v7, v8);
  if ( v11 <= v4 )
  {
    while ( 1 )
    {
      if ( (v11 & 0xFFF) != 0 )
      {
        if ( valid )
          break;
      }
      else if ( valid )
      {
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
      }
      valid = MiLockLowestValidPageTableEx((__int64)AnyMultiplexedVm, v11, &v31, 0);
      if ( valid == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
      valid = 0LL;
      v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_40:
      if ( v11 > v4 )
      {
        v2 = v32;
        if ( valid )
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
        goto LABEL_43;
      }
    }
    v12 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v12 & 1) == 0 )
      {
LABEL_39:
        v11 += 8LL;
        goto LABEL_40;
      }
      if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
      {
        v14 = MiPteHasShadow();
        if ( v14 )
        {
          KernelWaitTime = v14[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v17 = *(_QWORD *)(KernelWaitTime + 8 * ((v11 >> 3) & 0x1FF));
            if ( (v17 & 0x20) != 0 )
              v15 |= 0x20uLL;
            v12 = v15 | 0x42;
            if ( (v17 & 0x42) == 0 )
              v12 = v15;
          }
        }
      }
    }
    if ( (v12 & 1) != 0 )
    {
      MiLockNestedPageTable((signed __int64)AnyMultiplexedVm, v11);
      v18 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v19 = MiPteHasShadow();
        if ( v19 )
        {
          v21 = v19[2].KernelWaitTime;
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 8 * ((v11 >> 3) & 0x1FF));
            if ( (v22 & 0x20) != 0 )
              v20 |= 0x20uLL;
            v18 = v20 | 0x42;
            if ( (v22 & 0x42) == 0 )
              v18 = v20;
          }
        }
      }
      v23 = (v18 >> 12) & 0xFFFFFFFFFFLL;
      if ( (*(_DWORD *)(48 * v23 - 0x220000000000LL + 36) & 0x4000000) != 0 )
        v24 = *(_QWORD *)(48 * v23 - 0x220000000000LL) >> 36;
      else
        v24 = *(_QWORD *)(48 * v23 - 0x220000000000LL + 16) >> 17;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v11);
      if ( (v24 & 0x3FF) == 0 && (unsigned int)MiDriverPdeOkToDelete(v11) )
      {
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
        LOBYTE(v25) = v13;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v25);
        MiReturnSystemVa((__int64)(v11 << 25) >> 16 << 25 >> 16, ((__int64)(v11 << 25) >> 16 << 25 >> 16) + 0x200000);
        valid = 0LL;
        v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v26, v27);
      }
    }
    goto LABEL_39;
  }
LABEL_43:
  LOBYTE(v12) = v13;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v12);
  result = MiUnmapReturnCharges(&MiSystemPartition, v29);
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.320, -v2);
  return result;
}
