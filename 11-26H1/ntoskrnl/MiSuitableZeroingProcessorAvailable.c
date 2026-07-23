/*
 * XREFs of MiSuitableZeroingProcessorAvailable @ 0x14052A72C
 * Callers:
 *     MiPeriodicZeroingNeeded @ 0x1402A58F4 (MiPeriodicZeroingNeeded.c)
 *     MiImmediateZeroingNeeded @ 0x1402C09EC (MiImmediateZeroingNeeded.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiFindBestZeroingProcessor @ 0x1402F6038 (MiFindBestZeroingProcessor.c)
 *     MiGetNextEngineType @ 0x14052234C (MiGetNextEngineType.c)
 */

__int64 __fastcall MiSuitableZeroingProcessorAvailable(__int64 a1, unsigned int a2, int a3)
{
  volatile LONG *v5; // rdi
  volatile LONG *v6; // rcx
  KIRQL v7; // bl
  __int64 v8; // r14
  int NextEngineType; // edi
  int v11; // r15d
  int v12; // r12d
  __int64 v13; // rdx
  volatile LONG *v14; // rcx
  _OWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-28h]

  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  v17 = 0LL;
  if ( stru_140E366D8.SystemCallNumber || !*(_QWORD *)(a1 + 14192) )
    return 2LL;
  v5 = (volatile LONG *)(a1 + 14200);
  v6 = (volatile LONG *)(a1 + 14200);
  if ( a3 )
  {
    v7 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v6);
  }
  else
  {
    v7 = ExAcquireSpinLockShared(v6);
  }
  v8 = *(_QWORD *)(a1 + 14192);
  if ( !v8 )
  {
    if ( v7 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    else
      ExReleaseSpinLockShared(v5, v7);
    return 2LL;
  }
  NextEngineType = 0;
  v11 = 0;
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 13896) + 17372LL);
  do
  {
    v13 = v8 + 504LL * NextEngineType + 232;
    if ( *(_QWORD *)(v13 + 136) )
    {
      MiFindBestZeroingProcessor((__int64)v15, (int *)v13, a2, 0);
      if ( DWORD2(v16) != 5 )
        break;
    }
    ++v11;
    NextEngineType = MiGetNextEngineType(NextEngineType, v12);
  }
  while ( v11 < 3 );
  v14 = (volatile LONG *)(a1 + 14200);
  if ( v7 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v14);
  else
    ExReleaseSpinLockShared(v14, v7);
  if ( NextEngineType == 3 )
    return 2;
  return a2;
}
