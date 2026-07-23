/*
 * XREFs of MiPruneProcessLargePageCaches @ 0x1402A83C4
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 *     MiWorkingSetManager @ 0x1404B7850 (MiWorkingSetManager.c)
 *     MiDeleteProcessLargePageCache @ 0x1404CA01C (MiDeleteProcessLargePageCache.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeProcessLargePageCache @ 0x140716BA8 (MiFreeProcessLargePageCache.c)
 */

void __fastcall MiPruneProcessLargePageCaches(__int64 a1, int a2)
{
  volatile LONG *v3; // rbp
  _QWORD *v4; // r14
  KIRQL v5; // r15
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax

  if ( !a2 || (++*(_DWORD *)(a1 + 16856), (*(_DWORD *)(a1 + 16856) & 7) == 0) )
  {
    v3 = (volatile LONG *)(a1 + 16832);
    v4 = 0LL;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16832));
    v6 = (_QWORD *)(a1 + 16840);
    while ( 1 )
    {
      v7 = (_QWORD *)*v6;
      if ( (_QWORD *)*v6 == v6 )
        break;
      if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
        __fastfail(3u);
      *v6 = v8;
      v9 = v7;
      *(_QWORD *)(v8 + 8) = v6;
      if ( v4 )
      {
        if ( v7 == v4 )
        {
          v11 = (__int64 *)(a1 + 16840);
          v12 = *v11;
          if ( *(__int64 **)(*v11 + 8) != v11 )
            __fastfail(3u);
          *v7 = v12;
          v7[1] = v11;
          *(_QWORD *)(v12 + 8) = v7;
          *v11 = (__int64)v7;
          break;
        }
      }
      else
      {
        v4 = v7;
      }
      if ( (unsigned int)(*(_DWORD *)(a1 + 16856) - *((_DWORD *)v7 + 6)) >= 8 )
        MiFreeProcessLargePageCache(a1, v7);
      v10 = *(_QWORD **)(a1 + 16848);
      if ( (_QWORD *)*v10 != v6 )
        __fastfail(3u);
      *v9 = v6;
      v9[1] = v10;
      *v10 = v9;
      *(_QWORD *)(a1 + 16848) = v9;
    }
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v5);
  }
}
