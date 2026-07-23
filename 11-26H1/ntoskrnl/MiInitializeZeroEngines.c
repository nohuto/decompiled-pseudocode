/*
 * XREFs of MiInitializeZeroEngines @ 0x140B2A06C
 * Callers:
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 * Callees:
 *     MiGetOptimalProcessorWriteCount @ 0x1404D0810 (MiGetOptimalProcessorWriteCount.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1404E5460 (MiAbsorbPossibleEngineChanges.c)
 *     MiMergeNewProcessAffinity @ 0x1404F8524 (MiMergeNewProcessAffinity.c)
 *     MiClearZeroContextForceCalibration @ 0x140713030 (MiClearZeroContextForceCalibration.c)
 *     MiZeroEngineSetOptimalCount @ 0x140713B28 (MiZeroEngineSetOptimalCount.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140714FCC (MiComputeCacheAttributeSpeeds.c)
 *     MiZeroPageCalibrate @ 0x140715C7C (MiZeroPageCalibrate.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInitializeZeroEngines(__int64 a1)
{
  int v2; // r15d
  __int64 *v3; // rbx
  int v4; // r12d
  unsigned int v5; // ebp
  int i; // esi
  int v7; // esi
  __int64 v8; // rbx
  __int64 v10; // r8
  int v11; // eax
  _SLIST_HEADER v12[6]; // [rsp+20h] [rbp-98h] BYREF

  memset_0(v12, 0, sizeof(v12));
  v2 = 0;
  v3 = (__int64 *)(a1 + 368);
  v4 = 0;
  v5 = 1;
  for ( i = 0; i < 3; ++i )
  {
    if ( *v3 )
    {
      if ( *(_BYTE *)(a1 + 163) )
      {
        MiClearZeroContextForceCalibration(a1);
        v4 = 1;
      }
    }
    else
    {
      *v3 = a1;
      *((_DWORD *)v3 - 34) = i;
      v3[6] = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 56320LL * *(unsigned int *)(a1 + 56);
      v3[5] = (__int64)(v3 + 4);
      v3[4] = (__int64)(v3 + 4);
      *(v3 - 7) = (__int64)(v3 - 8);
      *(v3 - 8) = (__int64)(v3 - 8);
      if ( *(_BYTE *)(a1 + 161) )
        *((_BYTE *)v3 - 103) = 1;
    }
    *((_BYTE *)v3 - 101) = 0;
    if ( (unsigned int)MiAbsorbPossibleEngineChanges(v12, (int *)v3 - 34) )
    {
      if ( v4 || LOBYTE(v12[0].Alignment) || *((_BYTE *)v3 - 100) )
        v2 |= 1 << i;
    }
    else
    {
      *((_BYTE *)v3 - 101) = 1;
      v5 = 0;
      *((_BYTE *)v3 - 98) = 1;
    }
    v3 += 63;
  }
  MiMergeNewProcessAffinity(a1);
  v7 = 0;
  v8 = a1 + 268;
  do
  {
    if ( *(_DWORD *)(v8 + 92) && _bittest(&v2, v7) )
    {
      *(_BYTE *)v8 = 0;
      if ( (unsigned int)MiZeroPageCalibrate((int *)(v8 - 36), v4) )
      {
        MiComputeCacheAttributeSpeeds(v8 - 36);
        v11 = MiGetOptimalProcessorWriteCount(*(_DWORD *)(a1 + 56), v7, v10, 0);
        MiZeroEngineSetOptimalCount(v8 - 36, v11);
      }
      else
      {
        *(_BYTE *)v8 = 1;
        v5 = 0;
        *(_BYTE *)(v8 + 2) = 1;
      }
    }
    ++v7;
    v8 += 504LL;
  }
  while ( v7 < 3 );
  return v5;
}
