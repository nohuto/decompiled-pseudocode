/*
 * XREFs of MiModwriterConfigureMode @ 0x1403FFEC0
 * Callers:
 *     MiGatherPagefilePages @ 0x1403FFDF8 (MiGatherPagefilePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403FEA88 (MiPageFileLargestBitmapsRun.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404D0E00 (MiIsStoreVirtualPagefileFull.c)
 *     MiPageFileNoFreeSpace @ 0x14050BDA8 (MiPageFileNoFreeSpace.c)
 */

__int64 __fastcall MiModwriterConfigureMode(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  KIRQL v9; // al
  volatile LONG *v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  int v14; // r12d
  KIRQL v15; // al
  volatile LONG *v16; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(v1 + 64);
  v4 = *(_QWORD *)(v3 + 224);
  if ( !*(_DWORD *)(v3 + 12) )
  {
    MiPageFileNoFreeSpace(*(_QWORD *)(v1 + 64), *(_QWORD *)(a1 + 24));
    return 3221225473LL;
  }
  *(_QWORD *)(v1 + 104) = 0LL;
  v6 = 0LL;
  *(_DWORD *)(v1 + 112) = 131120;
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_QWORD *)(v1 + 144) = 0LL;
  v7 = 88LL * (*(_WORD *)(v3 + 172) & 0xF);
  if ( (*(_WORD *)(v3 + 172) & 0x40) != 0 )
  {
    v6 = *(_QWORD *)(v7 + v4 + 4624);
    v8 = 0LL;
    if ( v6 )
    {
      *(_DWORD *)a1 |= 2u;
      goto LABEL_19;
    }
  }
  else
  {
    v8 = *(_QWORD *)(v7 + v4 + 4624);
  }
  if ( *(_DWORD *)(v4 + 1296) )
  {
    v8 = 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 172) & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(v4 + 4496);
      if ( v6 )
        *(_DWORD *)a1 |= 2u;
    }
    else
    {
      v6 = *(_QWORD *)(v4 + 4368);
      if ( !v6 )
      {
        if ( (unsigned int)MiIsStoreVirtualPagefileFull(v4) )
        {
          v6 = *(_QWORD *)(88LL * *(unsigned int *)(v4 + 1300) + v4 + 4624);
          if ( !v6 )
            v6 = *(_QWORD *)(v4 + 4496);
        }
      }
    }
    if ( v8 )
      goto LABEL_24;
  }
  if ( !v6 )
  {
LABEL_20:
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 200));
    *(_BYTE *)(v3 + 174) |= 1u;
    v10 = (volatile LONG *)(v3 + 200);
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    else
      ExReleaseSpinLockExclusive(v10, v9);
    *(_QWORD *)v1 = 2575857425LL;
    return 3221225473LL;
  }
LABEL_19:
  if ( (*(_BYTE *)(v3 + 172) & 0x10) != 0 )
    goto LABEL_20;
LABEL_24:
  if ( *(_DWORD *)(v4 + 1300) != -1 )
    *(_DWORD *)a1 |= 4u;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    if ( v6 )
    {
      if ( (*(_BYTE *)(v3 + 172) & 0x10) == 0 )
      {
        if ( !v8
          || (*(_BYTE *)(v3 + 175) & 1) != 0
          || (v11 = *(_DWORD *)(v3 + 104), (unsigned int)MiPageFileLargestBitmapsRun(v3) >= v11 >> 2)
          && (v6 >= (unsigned __int64)(unsigned int)dword_140FBF21C >> 2 || v6 >= v8) )
        {
          *(_DWORD *)a1 |= 2u;
        }
      }
    }
  }
  v12 = dword_140FBF21C;
  if ( (*(_DWORD *)a1 & 2) != 0 && v6 < (unsigned int)dword_140FBF21C )
    v12 = v6;
  v13 = *(unsigned __int8 *)(v4 + 1140);
  if ( (_BYTE)v13 )
  {
    v14 = 0;
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1136));
    if ( *(_BYTE *)(v4 + 1142) )
    {
      *(_BYTE *)(v4 + 1142) = 0;
      *(_BYTE *)(v4 + 1140) = 0;
      v14 = 1;
    }
    else
    {
      v12 = v13;
    }
    v16 = (volatile LONG *)(v4 + 1136);
    if ( v15 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    else
      ExReleaseSpinLockExclusive(v16, v15);
    if ( v14 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  }
  if ( (*(_DWORD *)(v1 + 40) & 0x1Cu) < 8 && v12 > 0x100 )
    v12 = 256;
  *(_DWORD *)(a1 + 8) = v12;
  return 0LL;
}
