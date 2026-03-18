/*
 * XREFs of MiFreeContiguousPages @ 0x1403C3858
 * Callers:
 *     MmFreeContiguousMemory @ 0x140344580 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14034A28C (MiAllocateContiguousMemory.c)
 *     MiFindContiguousPagesLarge @ 0x1403C97BC (MiFindContiguousPagesLarge.c)
 *     MiQuarantineBadPage @ 0x1406F15B8 (MiQuarantineBadPage.c)
 *     MmRemovePhysicalMemory @ 0x140867460 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1408681C4 (MiRemoveMdlPages.c)
 *     MiCreatePagefileMemoryExtents @ 0x14087E204 (MiCreatePagefileMemoryExtents.c)
 *     MiDeletePageFileMemoryExtents @ 0x14087E544 (MiDeletePageFileMemoryExtents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x1402DC710 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     MiResidentPageDangleFree @ 0x1403C36CC (MiResidentPageDangleFree.c)
 *     MiFreeLargePageCharges @ 0x1403C4704 (MiFreeLargePageCharges.c)
 *     MiFreeLargePageMemory @ 0x1403C52E8 (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageBitMap @ 0x1403C5418 (MiUpdateLargePageBitMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFreeContiguousPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rsi
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v11; // r11
  int v12; // r12d
  unsigned int v13; // r12d
  __int64 v14; // r8
  unsigned __int64 ThreadLock; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int8 v18; // di
  int v19; // ecx
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp+10h]
  unsigned int v26; // [rsp+70h] [rbp+18h]

  v3 = 0;
  v4 = -1LL;
  v5 = 0LL;
  v25 = -1LL;
  v6 = 0LL;
  v8 = BugCheckParameter2;
  v9 = 48 * BugCheckParameter2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v11 = 2LL;
  v12 = 22;
  if ( CurrentIrql != 2 )
    v12 = 6;
  v13 = a3 | v12;
  v26 = v13;
  while ( 1 )
  {
    v14 = v6;
    if ( (v8 & 0x1FF) != 0 || a2 < 0x200 || !(unsigned int)MiResidentPageDangleFree(v8, 1) )
    {
      ThreadLock = stru_140E2EB88.ThreadLock;
      v6 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
      if ( v14 )
        v6 = v14;
      v16 = v8 & 0xFFFFFFFFFFFFFE00uLL;
      if ( v4 != (v8 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v25 = v8 & 0xFFFFFFFFFFFFFE00uLL;
        v17 = 4LL;
        if ( CurrentIrql != (_BYTE)v11 )
          v17 = v3;
        MiUpdateLargePageBitMap(v6, v16, 512LL, v17);
        v3 = 0;
        v11 = 2LL;
      }
      if ( CurrentIrql == (_BYTE)v11 )
      {
        v18 = 17;
        v24 = v3;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v9 + 24) < 0 );
          v13 = v26;
        }
      }
      else
      {
        v18 = KeGetCurrentIrql();
        if ( v18 != (_BYTE)v11 )
          __writecr8(v11);
        if ( KiIrqlFlags != v3 )
        {
          LOBYTE(v16) = v11;
          LOBYTE(ThreadLock) = v18;
          KiRaiseIrqlProcessIrqlFlags(ThreadLock, v16);
        }
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        v13 = v26;
      }
      v19 = *(_DWORD *)(v9 + 32) ^ (unsigned __int16)(*(_DWORD *)(v9 + 32) ^ (*(_DWORD *)(v9 + 32) - 1));
      *(_DWORD *)(v9 + 32) = v19;
      if ( (_WORD)v19 == 1 )
        ++v5;
      if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
      if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
        MiBadShareCount(v9);
      v23 = *(_QWORD *)(v9 + 24);
      *(_QWORD *)(v9 + 24) = ((v23 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v23 ^ ((v23 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
      if ( (v23 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v9, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v18 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
        __writecr8(v18);
      }
      v4 = v25;
      v20 = 48LL;
      result = -1LL;
      v22 = 1LL;
    }
    else
    {
      if ( !v6 )
        v6 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
      MiFreeLargePageMemory(v8);
      v20 = 24576LL;
      result = -512LL;
      v22 = 512LL;
    }
    v3 = 0;
    a2 += result;
    if ( !a2 )
      break;
    v9 += v20;
    v11 = 2LL;
    v8 += v22;
  }
  if ( v5 )
    return MiFreeLargePageCharges(v6, v5, v13, 1LL);
  return result;
}
