/*
 * XREFs of MiSignalLargePageRebuild @ 0x1402A7770
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiWakeLargePageRebuild @ 0x140259E64 (MiWakeLargePageRebuild.c)
 *     MiNodeFreeZeroPages @ 0x14028E530 (MiNodeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x1402A8AC0 (MiPageCombiningActive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v9; // r12
  unsigned __int8 v10; // r15
  unsigned __int64 j; // rbp
  unsigned __int64 v12; // r9
  __int64 *v13; // r11
  __int64 *v14; // r10
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0x10) == 0 )
  {
    result = MiPageCombiningActive();
    if ( !(_DWORD)result )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v3) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v3, 2LL);
      }
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v6 = *(_QWORD *)(a1 + 16) + 56320LL * i;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 14140));
        if ( !*(_BYTE *)(v6 + 4153) && (*(_BYTE *)(v6 + 4152))-- == 1 )
        {
          v9 = 0LL;
          v10 = 0;
          for ( j = (-(__int64)(*(_BYTE *)(v6 + 4155) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
                v10 < (unsigned __int8)byte_140E2D898;
                ++v10 )
          {
            LOBYTE(v7) = v10;
            v9 += MiNodeFreeZeroPages(v6, v7, 0);
          }
          if ( v9 < j )
            goto LABEL_23;
          if ( (MiFlags & 0x30) == 0 )
            goto LABEL_23;
          v12 = 0LL;
          v13 = MiPageSizes;
          v14 = (__int64 *)(v6 + 16);
          v15 = 3LL;
          do
          {
            v16 = *(v14 - 1);
            v17 = *v14;
            v14 += 128;
            v18 = *v13++ * (v16 + v17);
            v12 += v18;
            --v15;
          }
          while ( v15 );
          if ( v12 >> 3 >= v9 || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL) )
          {
LABEL_23:
            *(_BYTE *)(v6 + 4154) = 8;
            *(_BYTE *)(v6 + 4152) = 8;
          }
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 14140));
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
