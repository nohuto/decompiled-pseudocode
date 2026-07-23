/*
 * XREFs of MiPageFileLargestBitmapsRun @ 0x1403FEA88
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiFindBestOutswapPagefile @ 0x1403FE7B0 (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x1403FEB9C (MiGetKernelStackSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 *     MiModwriterConfigureMode @ 0x1403FFEC0 (MiModwriterConfigureMode.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiPageFileLargestBitmapsRun(__int64 a1)
{
  volatile LONG *v2; // rsi
  unsigned int v3; // ebx
  volatile LONG *v4; // rcx
  KIRQL v5; // bp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 i; // rcx
  __int64 j; // rax
  unsigned int v12; // edi

  v2 = (volatile LONG *)(a1 + 200);
  v3 = 0;
  v4 = (volatile LONG *)(a1 + 200);
  if ( KeGetCurrentIrql() == 2 )
  {
    v5 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v4);
  }
  else
  {
    v5 = ExAcquireSpinLockShared(v4);
  }
  v6 = *(_QWORD *)(a1 + 112);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    if ( v6 )
      v6 ^= a1 + 112;
    else
      v6 = 0LL;
  }
  v7 = 0LL;
  while ( v6 )
  {
    if ( *(_DWORD *)(v6 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v6 + 48) )
        goto LABEL_19;
      v8 = *(_QWORD *)v6;
      v7 = v6;
    }
    else
    {
      v8 = *(_QWORD *)(v6 + 8);
    }
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  v6 = v7;
LABEL_19:
  v9 = *(_QWORD *)v6;
  if ( *(_QWORD *)v6 )
  {
    for ( i = *(_QWORD *)(v9 + 8); i; i = *(_QWORD *)(i + 8) )
      v9 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v6 + 16); ; j = *(_QWORD *)(v9 + 16) )
    {
      v9 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v9 || *(_QWORD *)(v9 + 8) == v6 )
        break;
      v6 = v9;
    }
  }
  if ( v9 )
    v3 = *(_DWORD *)(v9 + 52);
  v12 = *(_DWORD *)(a1 + 108);
  if ( v3 > v12 )
    v12 = v3;
  if ( v5 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v2);
  else
    ExReleaseSpinLockShared(v2, v5);
  return v12;
}
