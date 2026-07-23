/*
 * XREFs of MiScanPagefiles @ 0x1402A72EC
 * Callers:
 *     MiModifiedWriterPeriodicTick @ 0x1402A7214 (MiModifiedWriterPeriodicTick.c)
 *     MiWorkingSetManager @ 0x1404B7850 (MiWorkingSetManager.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     MiFreePageFileHashPfns @ 0x1404AC10C (MiFreePageFileHashPfns.c)
 */

void __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // edi
  KIRQL v6; // bp
  unsigned int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  volatile LONG *v10; // rcx

  v1 = *(_DWORD *)(a1 + 22296);
  if ( v1 )
  {
    v3 = (_QWORD *)(a1 + 22304);
    v4 = v1;
    do
    {
      MiFreePageFileHashPfns(*v3++);
      --v4;
    }
    while ( v4 );
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, 0x420uLL) )
  {
    v5 = *(_DWORD *)(a1 + 22296);
    if ( v5 )
    {
      if ( *(_QWORD *)(a1 + 23456) )
      {
        v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1232));
        if ( !*(_QWORD *)(a1 + 1112) )
        {
          v7 = *(_DWORD *)(a1 + 1120);
          if ( v7 >= 0x1E )
          {
            v8 = 0LL;
            while ( 1 )
            {
              v9 = *(_QWORD *)(a1 + 8 * v8 + 22304);
              if ( (*(_BYTE *)(v9 + 172) & 0x50) == 0 )
              {
                if ( *(_DWORD *)(v9 + 12) )
                  break;
              }
              v8 = (unsigned int)(v8 + 1);
              if ( (unsigned int)v8 >= v5 )
              {
                if ( *(_BYTE *)(a1 + 803) )
                {
                  *(_BYTE *)(a1 + 803) = 0;
                  *(_DWORD *)(a1 + 1120) = 0;
                  if ( PsReferencePartitionSafe(*(_QWORD *)(a1 + 256)) )
                  {
                    *(_QWORD *)(a1 + 1112) = a1;
                    *(_QWORD *)(a1 + 1104) = MiScanPagefileSpace;
                    *(_QWORD *)(a1 + 1088) = 0LL;
                    ExQueueWorkItemToPartition(a1 + 1088);
                  }
                }
                break;
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 1120) = v7 + 1;
          }
        }
        v10 = (volatile LONG *)(a1 + 1232);
        if ( v6 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        else
          ExReleaseSpinLockExclusive(v10, v6);
      }
    }
  }
}
