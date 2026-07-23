/*
 * XREFs of MiAbsorbPossibleEngineChanges @ 0x1404E5460
 * Callers:
 *     MiInitializeZeroEngines @ 0x140B2A06C (MiInitializeZeroEngines.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     MiUpdateEngineConfiguration @ 0x1404F2374 (MiUpdateEngineConfiguration.c)
 *     MiUpdateEngineAffinities @ 0x1404F725C (MiUpdateEngineAffinities.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiAbsorbPossibleEngineChanges(_SLIST_HEADER *a1, int *a2)
{
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  __int64 *v8; // rsi
  volatile LONG *v9; // r14
  KIRQL v10; // al
  unsigned int v11; // r8d
  KIRQL v12; // cl
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // ebp

  memset_0(a1, 0, 0x60uLL);
  InitializeSListHead(a1 + 4);
  v4 = *a2;
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 17) + 56LL);
  *((_DWORD *)&a1[1].HeaderX64 + 1) = v5;
  v6 = *(_QWORD *)(384 * v5 + qword_140E2D838 + 376);
  if ( !(_DWORD)v4 )
  {
    *((_BYTE *)a2 + 39) = 1;
    BYTE1(a1->Alignment) = 1;
    v7 = KeNumberProcessors_0;
    *((_DWORD *)&a1->HeaderX64 + 2) = *(unsigned __int16 *)(v6 + 18);
    *((_DWORD *)&a1->HeaderX64 + 3) = v7;
    LOBYTE(a1->Alignment) = 1;
LABEL_3:
    MiUpdateEngineConfiguration(a1, a2);
    return 1LL;
  }
  if ( (*(_DWORD *)(v6 + 36) & 1) != 0 )
  {
    *((_BYTE *)a2 + 39) = 1;
    v8 = &qword_140E2D818;
    BYTE1(a1->Alignment) = 1;
  }
  else
  {
    v8 = *(__int64 **)(384 * v5 + qword_140E2D838 + 376);
  }
  v9 = (volatile LONG *)(v6 + 64);
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v6 + 64));
  v11 = KeNumberProcessors_0;
  v12 = v10;
  v13 = v4;
  *((_DWORD *)&a1->HeaderX64 + 1) = *((unsigned __int16 *)v8 + 8);
  v14 = *((unsigned __int16 *)v8 + v4 + 9);
  v15 = v11;
  if ( v14 < v11 )
    v15 = v14;
  if ( *((unsigned __int16 *)v8 + v13 + 12) < v11 )
    v11 = *((unsigned __int16 *)v8 + v13 + 12);
  *((_DWORD *)&a1->HeaderX64 + 3) = v11;
  if ( v12 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v9);
  else
    ExReleaseSpinLockShared(v9, v12);
  *((_DWORD *)&a1->HeaderX64 + 2) = v15;
  if ( v15 && (unsigned int)MiUpdateEngineAffinities(a1, a2, v8) )
  {
    if ( *((_QWORD *)a2 + 12) )
      return 1LL;
    goto LABEL_3;
  }
  return 0LL;
}
