/*
 * XREFs of MiInitializeZeroEngines @ 0x140B277AC
 * Callers:
 *     MiNodeZeroConductor @ 0x140B27510 (MiNodeZeroConductor.c)
 * Callees:
 *     MiGetOptimalProcessorWriteCount @ 0x1404D7040 (MiGetOptimalProcessorWriteCount.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1404EBE80 (MiAbsorbPossibleEngineChanges.c)
 *     MiMergeNewProcessAffinity @ 0x1404FED34 (MiMergeNewProcessAffinity.c)
 *     MiClearZeroContextForceCalibration @ 0x14070E330 (MiClearZeroContextForceCalibration.c)
 *     MiZeroEngineSetOptimalCount @ 0x14070EE28 (MiZeroEngineSetOptimalCount.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1407102D0 (MiComputeCacheAttributeSpeeds.c)
 *     MiZeroPageCalibrate @ 0x140710F80 (MiZeroPageCalibrate.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiInitializeZeroEngines(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // r12d
  int v4; // r13d
  int v5; // edi
  unsigned int v6; // r15d
  int v7; // edi
  __int64 v8; // rbx
  __int64 v10; // r8
  int v11; // eax
  union _SLIST_HEADER v12[6]; // [rsp+20h] [rbp-98h] BYREF

  memset_0(v12, 0, sizeof(v12));
  v2 = a1;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 1;
  do
  {
    if ( *(_QWORD *)(v2 + 368) )
    {
      if ( *(_BYTE *)(a1 + 163) )
      {
        MiClearZeroContextForceCalibration(a1);
        v4 = 1;
      }
    }
    else
    {
      *(_QWORD *)(v2 + 368) = a1;
      *(_DWORD *)(v2 + 232) = v5;
      *(_QWORD *)(v2 + 416) = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 56320LL * *(unsigned int *)(a1 + 56);
      *(_QWORD *)(v2 + 408) = v2 + 400;
      *(_QWORD *)(v2 + 400) = v2 + 400;
      *(_QWORD *)(v2 + 312) = v2 + 304;
      *(_QWORD *)(v2 + 304) = v2 + 304;
      if ( *(_BYTE *)(a1 + 161) )
        *(_BYTE *)(v2 + 265) = 1;
    }
    *(_BYTE *)(v2 + 267) = 0;
    if ( (unsigned int)MiAbsorbPossibleEngineChanges(v12, (int *)(v2 + 232)) )
    {
      if ( v4 || LOBYTE(v12[0].Alignment) || *(_BYTE *)(v2 + 268) )
        v3 |= 1 << v5;
    }
    else
    {
      *(_BYTE *)(v2 + 267) = 1;
      v6 = 0;
      *(_BYTE *)(v2 + 270) = 1;
    }
    ++v5;
    v2 += 504LL;
  }
  while ( v5 < 3 );
  MiMergeNewProcessAffinity(a1);
  v7 = 0;
  v8 = a1 + 268;
  do
  {
    if ( *(_DWORD *)(v8 + 92) && _bittest(&v3, v7) )
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
        v6 = 0;
        *(_BYTE *)(v8 + 2) = 1;
      }
    }
    ++v7;
    v8 += 504LL;
  }
  while ( v7 < 3 );
  return v6;
}
