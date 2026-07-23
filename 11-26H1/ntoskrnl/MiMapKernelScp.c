/*
 * XREFs of MiMapKernelScp @ 0x1404EC740
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140B2132C (MiFinalizeKernelScpForSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x140D07090 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiLockAndIncrementShareCount @ 0x1404CAEE8 (MiLockAndIncrementShareCount.c)
 *     VslMapKernelScpPages @ 0x1404F6D68 (VslMapKernelScpPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiMapKernelScp(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rdx
  ULONG_PTR v7; // r12
  __int64 v8; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  char v11; // r13
  int v13; // eax
  _QWORD *v14; // r12
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  ULONG_PTR v19; // [rsp+30h] [rbp-48h]
  char v20; // [rsp+90h] [rbp+18h]
  _QWORD *Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x20000) != 0 )
  {
    v13 = VslMapKernelScpPages();
    if ( v13 < 0 )
      KeBugCheckEx(0x1Au, 0x51514uLL, BugCheckParameter2, v13, 0LL);
  }
  v6 = (unsigned int)(HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget)) >> 12;
  v7 = BugCheckParameter2
     + ((a2
       + (unsigned int)v6
       + (((HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget)) & 0xFFF) != 0)) << 12);
  v19 = v7;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Object = stru_140E2D2D0.WaitBlock[1].Object;
  v9 = 0LL;
  v20 = MiLockWorkingSetShared((__int64)&unk_140E36F80, v6, a3);
  v11 = v20;
  if ( *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] )
  {
    v14 = Object;
    while ( 1 )
    {
      v15 = v14[v9 + 6];
      v16 = v8 + 8 * v9;
      if ( !v3 )
        goto LABEL_11;
      if ( (v16 & 0xFFF) == 0 )
        break;
LABEL_12:
      v17 = *(_QWORD *)v16;
      MiLockAndIncrementShareCount(v15);
      *(_QWORD *)v16 = MiMakeValidPte(v8 + 8 * v9, v15, 3) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
      if ( v17 )
      {
        v18 = 48 * MiGetContainingPageTable(v8 + 8 * v9);
        LODWORD(Object) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 - 0x220000000000LL + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&Object);
          while ( *(__int64 *)(v18 - 0x220000000000LL + 24) < 0 );
        }
        v10 = (*(_QWORD *)(v18 - 0x220000000000LL + 24) + 1LL) ^ (*(_QWORD *)(v18 - 0x220000000000LL + 24) ^ (*(_QWORD *)(v18 - 0x220000000000LL + 24) + 1LL)) & 0xC000000000000000uLL;
        *(_QWORD *)(v18 - 0x220000000000LL + 24) = v10;
        _InterlockedAnd64((volatile signed __int64 *)(v18 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        MiIncreaseUsedPtes(0x900000000000000LL, v3, 1u, 6);
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] )
      {
        v7 = v19;
        v11 = v20;
        if ( v3 )
          MiUnlockPageTableInternal((__int64)&unk_140E36F80, v3);
        goto LABEL_3;
      }
    }
    MiUnlockPageTableInternal((__int64)&unk_140E36F80, v3);
LABEL_11:
    v3 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((signed __int64)&unk_140E36F80, v3, 0);
    goto LABEL_12;
  }
LABEL_3:
  LOBYTE(v10) = v11;
  MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v10);
  return v7;
}
