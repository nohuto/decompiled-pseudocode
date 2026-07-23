/*
 * XREFs of MiFreeContiguousPages @ 0x1403CD758
 * Callers:
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     MiFindContiguousPagesLarge @ 0x1403D366C (MiFindContiguousPagesLarge.c)
 *     MiQuarantineBadPage @ 0x1406F6228 (MiQuarantineBadPage.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14086E5A4 (MiRemoveMdlPages.c)
 *     MiCreatePagefileMemoryExtents @ 0x140884604 (MiCreatePagefileMemoryExtents.c)
 *     MiDeletePageFileMemoryExtents @ 0x140884944 (MiDeletePageFileMemoryExtents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiResidentPageDangleFree @ 0x1403CD5CC (MiResidentPageDangleFree.c)
 *     MiFreeLargePageCharges @ 0x1403CE610 (MiFreeLargePageCharges.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFreeContiguousPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // r14
  __int64 v6; // rbp
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rdi
  __int64 CurrentIrql; // rsi
  unsigned __int64 v11; // r11
  int v12; // r12d
  volatile signed __int32 *v13; // rbx
  __int64 result; // rax
  unsigned int v15; // r12d
  __int64 v16; // r8
  unsigned __int64 ThreadLock; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int8 v20; // si
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned int v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp+10h]
  unsigned int v28; // [rsp+80h] [rbp+18h]
  __int64 v29; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v4 = -1LL;
  v5 = 0LL;
  v27 = -1LL;
  v6 = 0LL;
  v8 = BugCheckParameter2;
  v9 = 48 * BugCheckParameter2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v29 = CurrentIrql;
  v11 = 2LL;
  v12 = 22;
  v13 = (volatile signed __int32 *)(v9 + 24);
  if ( (_BYTE)CurrentIrql != 2 )
    v12 = 6;
  LODWORD(result) = 1;
  v15 = a3 | v12;
  v28 = v15;
  do
  {
    v16 = v6;
    if ( (v8 & 0x1FF) != 0 || a2 < 0x200 || !(unsigned int)MiResidentPageDangleFree(v8, result) )
    {
      ThreadLock = stru_140E2ED08.ThreadLock;
      v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
      if ( v16 )
        v6 = v16;
      v18 = v8 & 0xFFFFFFFFFFFFFE00uLL;
      if ( v4 != (v8 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v27 = v8 & 0xFFFFFFFFFFFFFE00uLL;
        v19 = 4LL;
        if ( (_BYTE)CurrentIrql != (_BYTE)v11 )
          v19 = v3;
        MiUpdateLargePageBitMap(v6, v18, 512LL, v19);
        v3 = 0;
        v11 = 2LL;
      }
      if ( (_BYTE)CurrentIrql == (_BYTE)v11 )
      {
        v20 = 17;
        v26 = v3;
        while ( _interlockedbittestandset64(v13, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v26);
          while ( *(__int64 *)v13 < 0 );
          v15 = v28;
        }
      }
      else
      {
        v20 = KeGetCurrentIrql();
        if ( v20 != (_BYTE)v11 )
          __writecr8(v11);
        if ( KiIrqlFlags != v3 )
        {
          LOBYTE(v18) = v11;
          LOBYTE(ThreadLock) = v20;
          KiRaiseIrqlProcessIrqlFlags(ThreadLock, v18);
        }
        v26 = 0;
        while ( _interlockedbittestandset64(v13, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v26);
          while ( *(__int64 *)v13 < 0 );
        }
        v15 = v28;
      }
      v21 = *(_DWORD *)(v9 + 32) ^ (unsigned __int16)(*(_DWORD *)(v9 + 32) ^ (*(_DWORD *)(v9 + 32) - 1));
      *(_DWORD *)(v9 + 32) = v21;
      if ( (_WORD)v21 == 1 )
        ++v5;
      if ( (*(_QWORD *)v13 & 0x4000000000000000LL) == 0 )
        *(_QWORD *)v13 |= 0x4000000000000000uLL;
      if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
        MiBadShareCount(v9);
      v25 = (*(_QWORD *)v13 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)v13 = v25 ^ (*(_QWORD *)v13 ^ v25) & 0xC000000000000000uLL;
      if ( !v25 )
        MiPfnShareCountIsZero(v9, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v20 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
        __writecr8(v20);
      }
      LOBYTE(CurrentIrql) = v29;
      v22 = 48LL;
      v23 = -1LL;
      v24 = 1LL;
    }
    else
    {
      if ( !v6 )
        v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
      MiFreeLargePageMemory(v8);
      v22 = 24576LL;
      v23 = -512LL;
      v24 = 512LL;
    }
    v4 = v27;
    v3 = 0;
    v9 += v22;
    v13 = (volatile signed __int32 *)((char *)v13 + v22);
    v8 += v24;
    result = 1LL;
    v11 = 2LL;
    a2 += v23;
  }
  while ( a2 );
  if ( v5 )
    return MiFreeLargePageCharges(v6, v5, v15, v27);
  return result;
}
