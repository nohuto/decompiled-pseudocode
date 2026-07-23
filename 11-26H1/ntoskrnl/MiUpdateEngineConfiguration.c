/*
 * XREFs of MiUpdateEngineConfiguration @ 0x1404F2374
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x1404E5460 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x140712EB8 (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUpdateEngineConfiguration(__int64 a1, __int64 a2)
{
  void *v3; // rsi
  int v5; // eax
  volatile LONG *v6; // rcx
  KIRQL v7; // bp
  __int64 v8; // rcx
  __int64 i; // r10
  __int64 v10; // r11
  __int64 v11; // r8
  __int64 **v12; // rdx
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // r9
  __int64 v16; // rax
  __int64 **v17; // rcx
  __int64 v18; // rcx
  volatile LONG *v19; // rcx

  v3 = *(void **)(a2 + 96);
  *(_DWORD *)(a2 + 128) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a1 + 24) + 16LL * *(unsigned int *)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 80);
  v6 = (volatile LONG *)(*(_QWORD *)(a2 + 184) + 14200LL);
  *(_DWORD *)(a2 + 64) = v5;
  v7 = ExAcquireSpinLockExclusive(v6);
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a2 + 88);
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(a1 + 48);
      v11 = 48 * i;
      v12 = (__int64 **)(48 * i + v8 + 16);
      if ( *v12 )
      {
        while ( 1 )
        {
          v13 = *v12;
          if ( *v12 == (__int64 *)v12 )
            break;
          if ( (__int64 **)v13[1] != v12 || (v14 = (__int64 *)*v13, *(__int64 **)(*v13 + 8) != v13) )
            __fastfail(3u);
          *v12 = v14;
          v15 = v13;
          v14[1] = (__int64)v12;
          v16 = v11 + v10 + 16;
          v17 = *(__int64 ***)(v16 + 8);
          if ( *v17 != (__int64 *)v16 )
            __fastfail(3u);
          *v15 = v16;
          v15[1] = (__int64)v17;
          *v17 = v15;
          *(_QWORD *)(v16 + 8) = v15;
          ++*(_DWORD *)(v11 + v10 + 32);
        }
        v8 = *(_QWORD *)(a2 + 88);
      }
    }
  }
  v18 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 48);
  v19 = (volatile LONG *)(v18 + 14200);
  *(_QWORD *)(a2 + 120) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 132) = *(_DWORD *)(a1 + 12);
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v19);
  else
    ExReleaseSpinLockExclusive(v19, v7);
  if ( !*(_QWORD *)(a2 + 496) )
    *(_QWORD *)(a2 + 496) = MiAllocateZeroPageDecisionTraceBuffer(
                              *(_QWORD *)(*(_QWORD *)(a2 + 136) + 48LL),
                              *(unsigned int *)(*(_QWORD *)(a2 + 136) + 56LL));
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
