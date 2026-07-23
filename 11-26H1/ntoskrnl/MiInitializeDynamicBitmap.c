/*
 * XREFs of MiInitializeDynamicBitmap @ 0x1406F9D64
 * Callers:
 *     MiBuildDynamicRegion @ 0x1406F9C10 (MiBuildDynamicRegion.c)
 *     MiCreatePfnBitMaps @ 0x1408800DC (MiCreatePfnBitMaps.c)
 *     MiInitializeMirroring @ 0x140CFEE64 (MiInitializeMirroring.c)
 *     MiCreateRetpolineBitmap @ 0x140D00E08 (MiCreateRetpolineBitmap.c)
 *     MiInitializePteInfo @ 0x140D05208 (MiInitializePteInfo.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1402A4624 (MiMakeZeroedPageTables.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemCharges @ 0x1404AC8F8 (MiReturnSystemCharges.c)
 *     MiReturnPfnList @ 0x1406FA308 (MiReturnPfnList.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  PVOID v8; // rdx
  unsigned int v9; // r15d
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char *AnyMultiplexedVm; // r12
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rsi
  volatile unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 i; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // [rsp+30h] [rbp-78h]
  ULONG_PTR v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h]
  __int128 v29; // [rsp+48h] [rbp-60h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]

  *(_OWORD *)a1 = 0LL;
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((unsigned __int64)(a3 + 7) >> 15)
     + (((((unsigned __int64)(a3 + 7) >> 3) & 0xFFF) + (unsigned int)(a2 & 0xFFF) + 4095) >> 12);
  if ( (a4 & 1) == 0 )
  {
    result = MiMakeZeroedPageTables((unsigned int)(a2 >> 9) & 0xFFFFFFF8, ((a2 >> 9) & 0xFFFFFFF8) - 8 + 8 * v6, 1, 8);
    if ( !(_DWORD)result )
      return result;
  }
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    v8 = qword_140E36180[0];
    v27 = qword_140E361B0;
  }
  else
  {
    v8 = (PVOID)qword_140E361B8;
    v27 = qword_140E361E8;
  }
  v9 = 0;
  ValidPte = MiMakeValidPte(v5, (__int64)v8, 536870913);
  v11 = 0LL;
  v26 = 17;
  v12 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  if ( !v6 )
    goto LABEL_27;
  do
  {
    if ( v11 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_17;
      if ( v9 )
      {
        MiIncreaseUsedPtes(v14, v11, v9, 6);
        v9 = 0;
      }
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v11);
      LOBYTE(v17) = v26;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v17);
    }
    if ( (a4 & 4) != 0 && (v5 & 0xFFF) == 0 && v6 - v12 >= 0x200 )
    {
      v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v26 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL);
      MiLockPageTableInternal((signed __int64)AnyMultiplexedVm, v19, 0);
      v20 = *(_QWORD *)v18;
      MiTransformValidPteInPlace((volatile __int64 *)v18, v18, v27, 96, 1);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v19);
      LOBYTE(v21) = v26;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v21);
      v11 = 0LL;
      MiInsertPageChainHead((__int64 *)&v29, (__int64 *)(48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL));
      v14 = (*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL;
      v28 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v14);
      v13 = 512LL;
      v5 = (__int64)((v18 << 25) + 0x10000000) >> 16;
      goto LABEL_22;
    }
    v11 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v26 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v13, v15);
    MiLockPageTableInternal((signed __int64)AnyMultiplexedVm, v11, 0);
LABEL_17:
    v14 = v6 - v12;
    v13 = 512 - ((v5 >> 3) & 0x1FF);
    if ( v6 - v12 <= v13 )
      v13 = v6 - v12;
    for ( i = 0LL; i < v13; ++i )
      *(_QWORD *)(v5 + 8 * i) = ValidPte;
    v9 += v13;
    v5 += 8 * v13;
LABEL_22:
    v12 += v13;
  }
  while ( v12 < v6 );
  if ( v11 )
  {
    if ( v9 )
      MiIncreaseUsedPtes(v14, v11, v9, 6);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v11);
    LOBYTE(v24) = v26;
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v24);
  }
LABEL_27:
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a2;
  if ( v30 )
  {
    v25 = MiReturnPfnList(&v29);
    MiReturnSystemCharges(v28, v25, v25, 8);
  }
  return 1LL;
}
