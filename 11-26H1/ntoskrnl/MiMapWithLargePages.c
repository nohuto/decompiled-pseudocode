/*
 * XREFs of MiMapWithLargePages @ 0x1402A1BE4
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x1402A1EFC (MiMapContiguousMemoryLarge.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiWriteLargePte @ 0x1402A0630 (MiWriteLargePte.c)
 *     MiFinishPageTableForLargePage @ 0x1402A1A9C (MiFinishPageTableForLargePage.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiGetLargePteAddress @ 0x14042D440 (MiGetLargePteAddress.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x1404BCA10 (MiLockWorkingSetExclusiveAtDpc.c)
 */

void __fastcall MiMapWithLargePages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6,
        int a7)
{
  int v10; // ecx
  int v11; // ebx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r10
  __int64 v14; // r8
  bool v15; // zf
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned __int64 LargePteAddress; // rdi
  __int64 v19; // r8
  __int64 v20; // r14
  int v21; // ebx
  unsigned __int64 v22; // r12
  unsigned __int8 CurrentIrql; // al
  KIRQL v24; // si
  unsigned __int64 v25; // rsi
  __int64 PteShadow; // rax
  __int64 v27; // rdx
  KIRQL v28; // al
  unsigned __int64 *v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int64 ValidPte; // rax
  __int64 v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  __int64 v34; // [rsp+30h] [rbp-10h]
  int v35; // [rsp+38h] [rbp-8h]
  int v36; // [rsp+3Ch] [rbp-4h]
  __int64 v37; // [rsp+80h] [rbp+40h]
  char v39[8]; // [rsp+A8h] [rbp+68h]

  v36 = 0;
  v10 = MiLargePageShifts[a5];
  v11 = a6 & 7;
  v12 = a4 >> v10;
  v13 = a4 >> v10 << v10;
  v37 = MiPageSizes[a5];
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= qword_140E2D920 && ((*(_QWORD *)(48 * a3 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    if ( (*(_DWORD *)(48 * a3 - 0x21FFFFFFFFE0LL) & 0xC00000) == 0 )
    {
      v11 |= 8u;
      goto LABEL_7;
    }
    v15 = (*(_DWORD *)(48 * a3 - 0x21FFFFFFFFE0LL) & 0xC00000) == 0x800000;
  }
  else
  {
    if ( !a7 )
    {
      v11 |= 0x10u;
      goto LABEL_7;
    }
    v15 = a7 == 2;
  }
  if ( v15 )
    v11 |= 0x18u;
LABEL_7:
  v16 = v11 | 0xA0000000;
  if ( a4 % MiPageSizes[a5] )
  {
    v29 = (unsigned __int64 *)(v14 + 8 * v13);
    v30 = v14 + 8 * a4;
    ValidPte = MiMakeValidPte(0LL, v13 + a3, v16);
    while ( (unsigned __int64)v29 < v30 )
    {
      *v29 = ValidPte;
      v14 = 0xFFF0000000000FFFuLL;
      ValidPte = (ValidPte + 4096) ^ ((ValidPte + 4096) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      ++v29;
    }
  }
  LargePteAddress = MiGetLargePteAddress(a2, a5, v14);
  v32 = a1;
  v20 = 0LL;
  v34 = 0LL;
  v21 = v16 | 0x4000000;
  v35 = 0;
  v33 = 0LL;
  v22 = LargePteAddress + 8 * MiPtesToSupportLargePageSizes[a5] * v12;
  CurrentIrql = KeGetCurrentIrql();
  if ( a5 )
  {
    if ( CurrentIrql == 2 )
    {
      v24 = 17;
      v39[0] = 17;
      MiLockWorkingSetSharedAtDpc(a1);
      goto LABEL_11;
    }
    v28 = MiLockWorkingSetShared(a1);
    goto LABEL_26;
  }
  if ( CurrentIrql != 2 )
  {
    v28 = MiLockWorkingSetExclusive(a1, v17, v19);
LABEL_26:
    v39[0] = v28;
    v24 = v28;
    goto LABEL_11;
  }
  v24 = 17;
  v39[0] = 17;
  MiLockWorkingSetExclusiveAtDpc(a1);
LABEL_11:
  if ( LargePteAddress < v22 )
  {
    v25 = a2;
    do
    {
      if ( a5 )
      {
        if ( !v20 || (LargePteAddress & 0xFFF) == 0 )
        {
          MiFinishPageTableForLargePage((__int64)&v32);
          v20 = ((LargePteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v33 = v20;
          MiLockPageTableInternal(a1, v20, 0LL);
        }
      }
      else if ( (LargePteAddress & 0xFFF) == 0 )
      {
        MiFinishPageTableForLargePage((__int64)&v32);
        v20 = v33;
      }
      ++v34;
      PteShadow = *(_QWORD *)LargePteAddress;
      if ( LargePteAddress >= 0xFFFFF6FB7DBED000uLL && LargePteAddress <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(LargePteAddress, *(_QWORD *)LargePteAddress);
      if ( !PteShadow )
        ++v35;
      MiWriteLargePte(v25, a3, a5, v21);
      a3 += v37;
      v25 += v37 << 12;
      LargePteAddress += 8 * MiPtesToSupportLargePageSizes[a5];
    }
    while ( LargePteAddress < v22 );
    v24 = v39[0];
  }
  MiFinishPageTableForLargePage((__int64)&v32);
  LOBYTE(v27) = v24;
  if ( a5 )
    MiUnlockWorkingSetShared(a1, v27);
  else
    MiUnlockWorkingSetExclusive(a1, v24);
}
