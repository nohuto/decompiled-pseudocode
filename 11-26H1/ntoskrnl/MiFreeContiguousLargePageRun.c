/*
 * XREFs of MiFreeContiguousLargePageRun @ 0x140706440
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1403D12C8 (MiFreePhysicalPageChain.c)
 *     MiDeleteAweInfoPageRuns @ 0x140705CD0 (MiDeleteAweInfoPageRuns.c)
 *     MiFreeAwePagesFromMdl @ 0x140706390 (MiFreeAwePagesFromMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiFreeLargePageCharges @ 0x1403CE610 (MiFreeLargePageCharges.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiFreeLargePages @ 0x1403D0F00 (MiFreeLargePages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiClearAweLargePageMetadata @ 0x140705C64 (MiClearAweLargePageMetadata.c)
 *     MiFreePhysicalRange @ 0x140706770 (MiFreePhysicalRange.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14070FFD8 (MiCoalesceActivePagesIntoFree.c)
 */

unsigned __int64 __fastcall MiFreeContiguousLargePageRun(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 *v8; // rsi
  __int64 i; // rbx
  unsigned __int64 v10; // r14
  int v11; // edx
  __int64 PfnPageSizeIndex; // r13
  char v13; // al
  unsigned __int64 v14; // r12
  volatile signed __int32 *v15; // r14
  __int64 v16; // rbp
  unsigned __int8 CurrentIrql; // r13
  __int64 v18; // rcx
  unsigned int active; // eax
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 *j; // r8
  unsigned __int64 v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-68h]
  unsigned __int64 v26; // [rsp+38h] [rbp-60h]
  unsigned __int64 v27; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  __int64 v29; // [rsp+50h] [rbp-48h] BYREF
  __int64 v30[8]; // [rsp+58h] [rbp-40h] BYREF
  int v31; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+B0h] [rbp+18h]
  int v33; // [rsp+B8h] [rbp+20h]

  v32 = a3;
  v3 = 0LL;
  v30[0] = 0LL;
  v29 = 0LL;
  v4 = a3;
  v5 = a2;
  v26 = 0LL;
  if ( (*(_DWORD *)(a1 + 8) & 4) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( a3 )
    {
      do
      {
        MiFreePhysicalRange(a1, v5);
        v5 += v6;
        v3 += v6;
      }
      while ( v3 < v4 );
    }
  }
  else
  {
    v7 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
    v25 = v7;
    if ( a3 )
    {
      do
      {
        v8 = (unsigned __int64 *)(48 * v5 - 0x220000000000LL);
        for ( i = (KeFeatureBits & 0x2000000000LL) == 0; ; i = (unsigned int)(i + 1) )
        {
          v10 = MiPageSizes[i];
          v27 = v10;
          if ( ((v10 - 1) & v5) == 0 && v4 >= v10 )
            break;
        }
        PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(48 * v5 - 0x220000000000LL);
        v13 = (v8[5] >> 60) & 7;
        v33 = PfnPageSizeIndex;
        v28 = MiPageSizes[PfnPageSizeIndex];
        if ( v13 == 1 )
        {
          v14 = (unsigned __int64)&v8[6 * v10];
          if ( (unsigned __int64)v8 < v14 )
          {
            v15 = (volatile signed __int32 *)(v8 + 3);
            v16 = 48 * MiPageSizes[PfnPageSizeIndex];
            do
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v11) = 2;
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
              }
              v31 = 0;
              while ( _interlockedbittestandset64(v15, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v31);
                while ( *(__int64 *)v15 < 0 );
              }
              MiClearAweLargePageMetadata((__int64)(v15 - 6));
              _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
              if ( CurrentIrql < 2u )
              {
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                __writecr8(CurrentIrql);
              }
              v15 = (volatile signed __int32 *)((char *)v15 + v16);
            }
            while ( (unsigned __int64)(v15 - 6) < v14 );
            v3 = v26;
            v4 = v32;
            v10 = v27;
            LODWORD(PfnPageSizeIndex) = v33;
          }
          v7 = v25;
        }
        if ( (unsigned int)i <= 1 )
          MiUpdateLargePageBitMap(v7, v5, v10, 0);
        v18 = 0LL;
        if ( (_DWORD)PfnPageSizeIndex != (_DWORD)i )
        {
          while ( 1 )
          {
            active = MiCoalesceActivePagesIntoFree(v18, v5, (unsigned int)i);
            v18 = active;
            if ( active || (_DWORD)i + 1 == (_DWORD)PfnPageSizeIndex )
              break;
            LODWORD(i) = i + 1;
          }
        }
        v20 = MiPageSizes[(unsigned int)i];
        if ( (_DWORD)v18 )
        {
          MiFreeLargePageCharges(v7, v20, 0);
          if ( v7 != *(_QWORD *)(stru_140E2ED08.ThreadLock
                               + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) )
            MiReturnCrossPartitionCharges(v7, 2u, 1, v20);
        }
        else
        {
          v21 = 0LL;
          for ( j = &v8[6 * v20]; v8 < j; v8 += 6 * v28 )
          {
            v23 = (v21 >> 3) ^ (*v8 ^ (v21 >> 3)) & 0xFFFFF00000000001uLL;
            v21 = (unsigned __int64)v8;
            *v8 = v23;
          }
          MiFreeLargePages(v7, v21, v30, &v29, 0);
        }
        v3 += v20;
        v5 += v20;
        v26 = v3;
        v4 -= v20;
        v32 = v4;
      }
      while ( v4 );
    }
  }
  return v3;
}
